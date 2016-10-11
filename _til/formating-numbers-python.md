---
layout: til
title: "Formatting Numbers in Python"
date: 2016-10-11
author: OctoMiao
comments: true
categories: programming
filter: programming
summary: Formatting numbers in python using format
---


`.format()` is a good way to format numbers. A good reference is [PyFormat](https://pyformat.info/).

For example, we can use scientific notation.

{% highlight python %}
print "{:e}".format(9887.2)
{% endhighlight %}

will give us

```
9.887200e+03
```
