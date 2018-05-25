---
layout: datascience
title:  "Bilibili Data Project I: Data Acquisition"
date: 2018-05-08 #2014-08-27T11:57:41-04:00
modified: 2018-05-08
subtitle: "Describe the video and user data of bilibili.com and research video characteristics and user profiles"
speaker: "OctoMiao"
author: OctoMiao
comments: true
categories: Data
tags:
- Bilibili
- Python
- Data Scraping
- Data Visualization
- Statistics
summary: Accuqire video data from bilibli.com
code:
  - title: "data-acquisition"
    link: https://github.com/emptymalei/data-acquisition/tree/master/bilibili
  - title: "data-playground:bili"
    link: https://github.com/emptymalei/data-playground/tree/master/bili
  - title: "data-playground:bilidash"
    link: https://github.com/emptymalei/data-playground/tree/master/bilidash
published: true
---


* ToC
{:toc}


**The data analysis and visualization post is coming soon.**


# Introduction

I am analyzing the video meta data of bilibili.com, which is one of the largest video hosting platforms in China. It is estimated to have several tens of millions of videos.

There are two type of data that would be very useful. One of the is a snapshot of the current meta data of videos. The other one is time evolution of them.

# Summary


For now I have obtained all the video meta data of the whole website. I also keep the monitoring program working on a remote server so that I obtain the time series data without disturbance.

<figure markdown="1">
![](../assets/bilibili-data-project-1/video-meta-data-head.jpg)
<figcaption markdown="1">
Data file off all the videos. This shows the first few lines of the csv data file. I choose csv file because the data is only on the scale of several GB.
</figcaption>
</figure>


I have built a dashboard to stream data from my server and visualize the data.

<figure markdown="1">
![](../assets/bilibili-data-project-1/bilidash-demo.jpg)
<figcaption markdown="1">
[A dashboard for monitoring videos and users](https://uupers.github.io/bilidash/). The top panel is the number of fans vs time. The lower panels are the number of views of each video vs time.
</figcaption>
</figure>


# Tasks Defined

1. Grab video meta data from bilibili.com.
  1. Scrape a snapshot of all videos.
  2. Concentrate on some videos and monitor through time.
2. Analyze the videos
  1. Analyze video meta data in general.
  2. Explore possible time evolution.
3. Present the results.

# Methods

## Data Acquisition for All Videos ([Code](https://github.com/emptymalei/data-acquisition/tree/master/bilibili))

I choose to use Python as my tech stack. A list of modules and packages are listed bellow.

1. requests
2. json
3. multiprocessing

The idea of this crawler is to request from API of bilibili.com and parse the data into data files. Following the lead, my code is arranged as follows.

{% highlight python %}
# request data from the remote
requests.get( ' link to api ' )
# parse return of the remote
parse( ... )
# write data to file
VidDumpBatch( ... )
{% endhighlight %}

Simple as it seems to write a working script, it takes some effort to optimize it. I have encountered several problems and solved them all.

1. `requests` returns errors. I implemented error handling and retry if connection failure. Retry function is set to increase time delay for each try.
2. `requests` reaches some limit and returns error of 'max retries exceeded with url ...'. The reason turns to be `requests` doesn't close connections automatically. Naturally, the solution is to close the connections by hand.
3. The code efficiency is low.
   1. I had to remove most of the for loops and replace them with list comprehensions.
   2. I examined the cProfile using `snakeviz` and found that the most time consuming part is the url request, which is kind of trivial. So I utilized `multiprocessing` to create multiple processes of the requests.
   3. Benchmarks were done to ensure efficiency.

## Monitoring the Time Evolution of Videos ( [Code](https://github.com/uupers/bilidash) )

The time series data is easier to obtain since it doesn't require a large scale scraping.

The design of the framework is a complete separation of the front-end and back-end.

I have written the front-end first using `Plotly.js` and `Vue.js`, which can be accessed [here](https://uupers.github.io/bilidash/). I have got nothing to say about it since it's easy.

The back-end is written using Python, which can be accessed from [here](https://github.com/uupers/bilidash). I wrote a package named `bilidash` to provide all the functions and classes. I have
1. `monitor-av.py` monitors the videos and export data as time series.
2. `record-front-page.py` scrapes and parses the front page and exports the video ids on front page.
3. `track-uupers.py` trackes some given users. Here I am interested in the user id `uupers`.
4. `uupers-vid-params.py` tracks the videos of the user `uupers`.
The trick of the whole project is to manage scheduled python jobs correctly, for which I used the standard library module `sched`.








# Future Work

As far as IO is concerned, the efficiency can be optimized by using binary data dumping, such as `netcdf/hdf5`.
