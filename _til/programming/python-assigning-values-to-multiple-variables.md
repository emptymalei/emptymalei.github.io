---
layout: til
title: "Assigning Values to Multiple Variables"
date: 2015-12-04
author: OctoMiao
comments: true
categories: programming
filter: programming
summary: Assigning Values to Multiple Variables
---

In python, assigning values to several variables can be done in a compact way using list manipulation.

{% highlight python %}
x1 = np.zeros(30)
v1, w1, u1 = np.split(x1,3)[:3]
print v1, w1, u1
{% endhighlight %}
