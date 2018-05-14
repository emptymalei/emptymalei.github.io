---
layout: datascience
title:  "Bilibili Data Project II: Data Analysis"
date: 2018-05-08 #2014-08-27T11:57:41-04:00
modified: 2018-05-08
subtitle: "Describe the video and user data of bilibili.com and research video characteristics and user profiles"
speaker: "OctoMiao"
author: OctoMiao
comments: true
categories:
- Data
tags:
- Bilibili
- Python
- Data Scraping
- Data Visualization
- Statistics
summary: Introduce geometry into the manifold of complex networks
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





# Introduction

The data acquisition methods are explained in the post [Bilibili Data Project I: Data Acquisition]({{ site.url }}/itsdata/bilibili-data-project-1/).

In this post, I will explain the data analysis process of this project.

# Summary

The total video-id range is [1,23323833] by the time 2018-05-11 23:06:34.597336. I extracted 15920858 total entries from the website.

As I walk through the data, I found no obvious evidence for data fraud. In this section, I will demonstrate several interesting statistics about these video.

## Video ID Filling Rate

I calculated the filling rate of video ids, i.e., the percentage of video ids that are actually associated with videos,

$$
\begin{equation}
F = \frac{\text{Number of video IDs associated with videos}  }{ \text{ Video ID range} }.
\end{equation}
$$

<figure markdown="1">
![](../assets/bilibili-data-project-2/filling-rate-vid-range.png)
<figcaption markdown="1">
Filling rate of video IDs. The black dots are the data. The red line is a linear fit for the video IDs range starting from [3000000,3100000].
</figcaption>
</figure>

I observed that the filling rate of video IDs are filled more, as the linear fit for the linear part of data shows. I could think of three reasons.

1. Videos are removed less than before because of qualities, change of policies, or lack of moderators.
2. Videos are removed through a long term of observations by the website. Older videos had long time to be exposed for deletions.
3. Some change in the website's concentrations of video types. For example, they might bave a lot of pirated videos in the begining and deleted them due to copyright requests. The pit which happend between 2015-10-03 and
2014-03-08 is possibly related to this.


The fact that the filling rate is linear is kind of suprising.
{: .notes--warning}

## Views of Videos

I extracted the total views averaged over 10 days for different video submission dates. I see the grow of views. The website has obtained more users as I read from the news. It's not surporising that the total number of views has grow to a large number, which is more than 1 billion. I do not find sudden changes of views. If any fraud data is present, abrupt changes in the pattern should be observed unless the fraud is done gradually.

<figure markdown="1">
![](../assets/bilibili-data-project-2/average-views.png)
<figcaption markdown="1">
Average views of videos as a function of date submitted for each categories. The number of views for videos is increasing fast as the publication dates becomes more recent. The views are averaged over 10 days.
</figcaption>
</figure>

On the other hand, I can calculate the histogram of views. I would expect that most videos do not have a lot of views.

<figure markdown="1">
![](../assets/bilibili-data-project-2/histogram-views.png)
<figcaption markdown="1">
Histogram for views. It has a long tail.
</figcaption>
</figure>

The behavior for number of likes and coins since they are related to each other so closely, which I will show later. It's kind of trivial.

## Duration of Videos

There are many descriptive tasks for this dataset. I would like to show one more interesting behavior. The duration of videos are not some trivial guessing. I would say video duration doesn't become too long. Meanwhile, the video duration doesn't become too short such as 0 second. So there must be a peak.

<figure markdown="1">
![](../assets/bilibili-data-project-2/duration-histogram.png)
<figcaption markdown="1">
Histogram for duration. As the qualitative analysis argument shows, a peak is prove to be exist at 4 min.
</figcaption>
</figure>


## Correlations between Views of Videos and Fans of Creators

This is a natural guess. Here I provide proof. In the previous post, I have showed a demo of the dashboard that I created for continuous tracking of users and their videos. We clearly observe a correlation between the curves of views and number of fans.


<figure markdown="1">
![](../assets/bilibili-data-project-2/correlations-between-views-fans.png)
<figcaption markdown="1">
Correlation between views and fans. The plot shows the increments of views of all videos created by the user uupers and the fans of this account.
</figcaption>
</figure>

I have the passive and active interpretation of this plot. I would go with the active view. The views are converted to fans and coins. Hereby I conclude that the conversion from views to fans is about 1/20, and the conversion from views to coins is about 1/10.





# Tech Stack

1. Python
2. Pandas


# Methods

Since I have chosen to use pandas, I created pandas data frames from the csv data files.

As for a first step, I would like to make a scatter matrix for all the data.

<figure markdown="1">
![](../assets/bilibili-data-project-2/video-scatter-matrix.png)
<figcaption markdown="1">
Scatter matrix for all the dimension of data. We do find of nice correlations between quantities. However, they are utterly trivial.
</figcaption>
</figure>

The analysis of each of these dimensions was done in details.

# Future Work

I have done some more predictive work using bubble chart to show the possible correlations between 3 dimensional data.


# Notes

1. The coin is the virtual currency of the website. Coins are gifted to creators of videos by the viewers.
