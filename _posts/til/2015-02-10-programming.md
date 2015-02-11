---
layout: article
title: "TIL - Programming"
modified: 2015-02-10 # 2015-02-03 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: false
comments: true
categories: til
summary: In python, assigning values to several variables can be done in a compact way using list manipulation.
---


## Assigning Values to Multiple Variables

In python, assigning values to several variables can be done in a compact way using list manipulation.

{% highlight python %}
x1 = np.zeros(30)
v1, w1, u1 = np.split(x1,3)[:3]
print v1, w1, u1
{% endhighlight %}
