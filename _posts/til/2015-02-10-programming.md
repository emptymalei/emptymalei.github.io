---
layout: article
title: "TIL - Programming"
modified: 2015-03-19 # 2015-02-03 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: false
comments: true
categories: til
summary: Tips on python coding

---

## Various Ways of Writing Loops

1. List Comprehension

{% highlight python %}
[2*x+3 for x in list]
{% endhighlight %}


2. `map`

{% highlight python %}
map(function, list)
{% endhighlight %}

A function can also be defined on the fly.

{% highlight python %}
map(lambda x: function of x, list)
{% endhighlight %}


For multivariable,

{% highlight python %}
map(lambda x,y:x+y, xlist, ylist)
{% endhighlight %}


3. `zip` and `map`

`zip` is useful in a map of multivariable function.

{% highlight python %}
map(functionofxy, zip(xlist,ylist))
{% endhighlight %}

As given in the reference link, one good example is

{% highlight python %}
map(sum,zip(A,B,C))
{% endhighlight %}


4. `map` and list comprehension



{% highlight python %}
[map(lambda x: x+3, list) for list in shape2by2list]
{% endhighlight %}




Ref. [Great Python Tricks for avoiding unnecessary loops in your code](http://forums.udacity.com/questions/1002566/great-python-tricks-for-avoiding-unnecessary-loops-in-your-code)



## Map vs For in Python

`map` is sometimes more convinient instead of for. The code

{% highlight python %}
newlist = []
for word in oldlist:
    newlist.append(word.upper())
{% endhighlight %}

can be reformed using `map`

{% highlight python %}
newlist = map(str.upper, oldlist)
{% endhighlight %}

`for` loop is sometimes slow because the dot evaluation inside is evaluated for each loop. Thus the following code is more efficient.

{% highlight python %}
upper = str.upper
newlist = []
append = newlist.append
for word in oldlist:
    append(upper(word))
{% endhighlight %}


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