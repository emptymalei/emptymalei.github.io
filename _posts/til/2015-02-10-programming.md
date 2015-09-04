---
layout: article
title: "TIL - Programming"
date: 2015-04-10
modified: 2015-04-10
author: OctoMiao
toc: false
comments: true
categories: til
summary: Run a program in the background on ubuntu.

---

## Run a program in the background on ubuntu

1. Make it excuable: `chmod +x program.py`
2. Use no hang up: `nohup /path/to/program.py &`. `nohup` keep the program running even in one closes the terminal. `python /path/to/program.py &` also keeps it running in the terminal in background. But it terminates the program if one logs out. To redirect the output to another file, `nohup comp-range-de.py > comp-range-de.out 2>&1&` or `nohup comp-range-de.py &> comp-range-de.out&` for short.
3. Check the process: `ps ax | grep program.py`. `ps -e` can list out all the running programs.

Source: [How to run the Python program in the background in Ubuntu machine? ](http://askubuntu.com/questions/396654/how-to-run-the-python-program-in-the-background-in-ubuntu-machine)

It is very important to understand the output of `ps`. Here is the man.

{% highlight bash %}
PROCESS STATE CODES
       Here are the different values that the s, stat and state output
       specifiers (header "STAT" or "S") will display to describe the state of
       a process.
       D    Uninterruptible sleep (usually IO)
       R    Running or runnable (on run queue)
       S    Interruptible sleep (waiting for an event to complete)
       T    Stopped, either by a job control signal or because it is being
            traced.
       W    paging (not valid since the 2.6.xx kernel)
       X    dead (should never be seen)
       Z    Defunct ("zombie") process, terminated but not reaped by its
            parent.

       For BSD formats and when the stat keyword is used, additional
       characters may be displayed:
       <    high-priority (not nice to other users)
       N    low-priority (nice to other users)
       L    has pages locked into memory (for real-time and custom IO)
       s    is a session leader
       l    is multi-threaded (using CLONE_THREAD, like NPTL pthreads do)
       +    is in the foreground process group
{% endhighlight %}

Meanwhile, another question is how to kill such a process.

{% highlight bash %}
xxx@ipython-notebook:~/abc/py$ ps -eaf | grep vacOsc4CompSSConvention-moretol.py
xxx    12921 11369 99 17:05 pts/0    00:04:49 python vacOsc4CompSSConvention-moretol.py
xxx    13040 11369  0 17:10 pts/0    00:00:00 grep --color=auto vacOsc4CompSSConvention-moretol.py
xxx@ipython-notebook:~/abc/py$ kill 12921
{% endhighlight %}


## Stupid numpy.piecewise


The `piecewise()` function in numpy is not very good. Due to the writing of the function, one wouldn't be surprised to encounter the following error,

{% highlight python %}
if (n != n2):
    raise ValueError(
        "function list and condition list must be the same")
{% endhighlight %}

in which `n` is the length of condition list and `n2` is the length of function list.

To avoid it, the input should always be prepared as following

{% highlight python %}
x = np.asarray(x)
# The following is important to avoid the weird behavior of piecewise()
if not x.shape:
    x = np.asarray([x])
{% endhighlight %}




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




## HTML

* [Animate.CSS](https://github.com/daneden/animate.css) Animations in HTML.


## Migrating Wordpress to Static

The following command can mirror a whole website including a wordpress into a static html site locally.

```
# Mirror website to a static copy for local browsing.
```

```
# This means all links will be changed to point to the local files.
```

```
# Note --html-extension will convert any CGI, ASP or PHP generated files to HTML (or anything else not .html).
```

```
wget --mirror -w 2 -p --html-extension --convert-links -P <dir> http://www.yourdomain.com
```

But this will get a static site with absolute links. To get a site that works as relative links for wordpress, use this plugin in first:

* [staticpress](https://github.com/megumiteam/staticpress)
