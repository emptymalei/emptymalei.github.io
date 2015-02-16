---
layout: article
title: "TIL - Programming"
modified: 2015-02-15 # 2015-02-03 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: false
comments: true
categories: til
summary: One can open URL in python by applying the python webbrowser module.

---


## snakeviz

**snakeviz** is a very nice tool to inspect a python program and find out what happened when a function is called.

It also shows the time consumed on each step.


## Assigning Values to Multiple Variables

In python, assigning values to several variables can be done in a compact way using list manipulation.

{% highlight python %}
x1 = np.zeros(30)
v1, w1, u1 = np.split(x1,3)[:3]
print v1, w1, u1
{% endhighlight %}


## Open URL using python using webbrowser module

Even in python, one can open a url using default browser.

{% highlight python %}
import webbrowser
webbrowser.open('http://www.python.org')
{% endhighlight %}