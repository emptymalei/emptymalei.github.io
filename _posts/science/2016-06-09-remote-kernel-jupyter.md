---
layout: article
title: "Remote Kernel for Jupyter"
date: 2016-06-09
modified: 2016-06-09 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: science
tag:
- enlist
- jupyter
summary: keynote
---

Right just some key points.

1. What did you use? [rk](https://github.com/korniichuk/rk)
2. Does it work well? Well, not really so good if one need to restart kernel frequently. The restart/reconnect is very slow.


There are some things that can be down on this remote kernel very conviniently. One of them is to do data process or visualization directly from the data file calculated by a script on the server. Suppose we have a data file output on the server under folder `~/calculate/assets`. We can using our jupyter to directly connect to the remote kernel. Using `%bash` we can actually use bash commands inside jupyter, e.g.,

{% highlight bash %}
%%bash
tree
{% endhighlight %}

which will show us the `tree` result from the server. Find the right path to the data file and import it then process data right in jupyter even the data is stored on a remote server.


