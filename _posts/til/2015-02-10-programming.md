---
layout: article
title: "TIL - Programming"
date: 2015-12-04
modified: 2016-06-20
author: OctoMiao
comments: true
categories: til
summary: count file number in a folder 
---


* ToC
{:toc}

## matplotlib x y limit and aspect ratio

Use

```
plt.xlim(-1,1)
plt.gca().set_aspect('equal', adjustable='box')
```

if

```
plt.xlim(-1,1)
plt.axes().set_aspect('equal', 'datalim')
```

doesn't work.


## TOP Command

For MacOS, the useful commands are

* sort according to memory: `top -o mreg`
* sort according to execution time: `top -o time`
* sort according to CPU usage (this is default): `top -o cpu`
* sort according to the number of threads running: `top -o threads`
* sort according to the corresponding user name: `top -o user`
* show only N (a number) processes: `top -n N`
* show only one process: `top -pid PIDNUMBER` (where on linux this should be `top -p PIDNUMBER`)

For more options, `top -h` will help.

`htop` is a great replacement for `top`, with build in easy sort, graphical representation etc.


## A Caveat of tree Command


Using `tree` is very convinient however some problems could arise. One of it is that the list could be very long and it takes a long time to display.

The command that counts the number of files and folders is

```
find DIR_NAME -type f | wc -l
```

where `DIR_NAME` is the directory name one needs to count.

MORE on [stackoverflow](http://stackoverflow.com/questions/9157138/recursively-counting-files-in-a-linux-directory).


## .gitignore by file size


http://stackoverflow.com/questions/4035779/gitignore-by-file-size


```
find . -size +1G | cat >> .gitignore
```

For the actual application purpose, I would prefer to overwrite the .gitignore file, which only requires single `>`

```
find . -size +50M | cat > .gitignore
```


## Mathematica Smooth Plot

Mathematica doesn't plot oscillating functions correctly. Weird wiggles and breaks in the plots are so common at least in the new versions of Mathematica. The solution to this problem is, of course, increase the sampling points. One way of doing this is through

```
PlotPoints->....
```

For example, suppose the plot range is from 0 to `endpoint=1000`, I could use

```
PlotPoints->Length@endpoint
```




## Mathematica Plot Default Font Style and Ticks Style: BaseStyle

Most of time, the plot generated using Mathematica is not a good one for projectors because the font size and ticks size are small. `BaseStyle` is a good solution to this problem. Here is an example from Wolfram Language

```
Plot[Sin[x]^2, {x, 0, 2 Pi}, PlotLabel -> Sin[x]^2, LabelStyle -> Black, FrameTicksStyle -> Larger, BaseStyle -> \
{FontWeight -> "Bold", FontSize -> 18}]
```

As shown in the example, `LabelStyle->Black` and `FrameTicksStyle->Larger` are also very useful when producing slides for projectors.

More on Wolfram Language: [Formats for Text in Graphics](https://reference.wolfram.com/language/tutorial/FormatsForTextInGraphics.html).



## LaTeX Automatically Adjust Figure

`graphicx`:

{% highlight tex %}
\includegraphics[width=\linewidth,height=\textheight,keepaspectratio]{picture.png}
{% endhighlight %}

Source: [Best figure size adjustment when dealing with different image sizes](http://tex.stackexchange.com/questions/17380/best-figure-size-adjustment-when-dealing-with-different-image-sizes)

## Creating Lists

[Code Style of Python Guide](http://docs.python-guide.org/en/latest/writing/style/)

{% highlight python %}
four_lists = [[0]*5 for __ in range(4)]
{% endhighlight %}

## enumerate()

[Code Style of Python Guide](http://docs.python-guide.org/en/latest/writing/style/)

`enumerate()` can be used to keep track of the index of the list.

{% highlight python %}
test = [None] * 5
for n, elem in enumerate( range(5,10) ):
    print n, elem
    test[n] = elem*2
{% endhighlight %}

Here we also used the technique of creating a list of length 5.


## Python Code Style


[Code Style of Python Guide](http://docs.python-guide.org/en/latest/writing/style/).



**PEP 20 -- The Zen of Python**


{% highlight text %}
1. Beautiful is better than ugly.
2. Explicit is better than implicit.
3. Simple is better than complex.
4. Complex is better than complicated.
5. Flat is better than nested.
6. Sparse is better than dense.
7. Readability counts.
8. Special cases aren't special enough to break the rules.
9. Although practicality beats purity.
10. Errors should never pass silently.
11. Unless explicitly silenced.
12. In the face of ambiguity, refuse the temptation to guess.
13. There should be one-- and preferably only one --obvious way to do it.
14. Although that way may not be obvious at first unless you're Dutch.
15. Now is better than never.
16. Although never is often better than *right* now.
17. If the implementation is hard to explain, it's a bad idea.
18. If the implementation is easy to explain, it may be a good idea.
19. Namespaces are one honking great idea -- let's do more of those!
{% endhighlight %}


## Import in Python

As noted in [Structuring Your Project of Python Guide](http://docs.python-guide.org/en/latest/writing/structure/), `import` in python is rather tricky.

The style

{% highlight python %}
from neuosc import *
{% endhighlight %}

grabs everything in `neuosc` and put them in the global namespace which is more likely to override existing functions in global namespace.

A better way is to import the exact function we need.

{% highlight python %}
from neuosc import par
{% endhighlight %}

Other good import methods are

{% highlight python %}
import neuosc
{% endhighlight %}

or

{% highlight python %}
import neuosc as ns
{% endhighlight %}


## Python List Comprehensions

An ipynb version of this section is [here](https://github.com/emptymalei/emptymalei.github.io/blob/master/_posts/til/assets/programming/python_list_comprehensions.ipynb).

Notes for the article [Python List Comprehensions: Explained Visually](http://treyhunner.com/2015/12/python-list-comprehensions-now-in-color/) by Trey Hunner

### Making a List

Integrated with loops


{% highlight python %}
list_with_for_loop = [x for x in range(10)]  
print list_with_for_loop
{% endhighlight %}


    [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]


Even with conditions in the for loop


{% highlight python %}
list_with_for_loop_conditional = [x for x in range(10) if x%2 == 1]  
print list_with_for_loop_conditional
{% endhighlight %}

    [1, 3, 5, 7, 9]


Nested loops in a list


{% highlight python %}
list_with_nested_loops = [ [x, y] for x in range(3) for y in range(3) ]  
print list_with_nested_loops
{% endhighlight %}

    [[0, 0], [0, 1], [0, 2], [1, 0], [1, 1], [1, 2], [2, 0], [2, 1], [2, 2]]


Another example of nested loops


{% highlight python %}
list_with_nested_loops_2 = [ x for x in range(y) for y in range(3)]  
print list_with_nested_loops_2
{% endhighlight %}

    [0, 0, 0, 1, 1, 1]


[The article](http://treyhunner.com/2015/12/python-list-comprehensions-now-in-color/) gives an example of how to flatten a matrix using this trick. Semantically, one would using


{% highlight python %}
matrix = [[11,12],[21,22]]  
row = [1,2]  
wrong_flatten_of_matrix = [x for x in row for row in matrix]  
print "matrix is", matrix  
print "flattened matrix is", wrong_flatten_of_matrix  
{% endhighlight %}

    matrix is [[11, 12], [21, 22]]
    flattened matrix is [1, 1, 2, 2]


which is obviously **WRONG**. The correct code is given by the author as


{% highlight python %}
right_flatten_of_matrix = [x for row in matrix for x in row]  
print "matrix is", matrix  
print "flattened matrix is", right_flatten_of_matrix  
{% endhighlight %}

    matrix is [[11, 12], [21, 22]]
    flattened matrix is [11, 12, 21, 22]


**The key is to write the nested loops in a list as the normal nested loops.**

With this possible confusion, the author proposed a line breaking solution


{% highlight python %}
right_flatten_of_matrix_line_breaking = [  
    x   
    for row in matrix   
        for x in row  
]  
print "matrix is", matrix  
print "flattened matrix is", right_flatten_of_matrix_line_breaking  
{% endhighlight %}

    matrix is [[11, 12], [21, 22]]
    flattened matrix is [11, 12, 21, 22]


which significantly improved the readability.





## IPython Notebook Magics

Summary of the [video lectures on IPython](https://www.udemy.com/get-started-with-the-ipython-notebook/learn/#/lecture/1077138):

* `%` is line level magic, which only affects the code starting from the position of it, while `%%` is cell level magic;
* List all the magics: `%lsmagic`;
* Timing of a cell: `%timeit `, for example, `%timeit np.cos(1.3)`;
* Write the content of the cell to a file by using `%%writefile output.py`;
* Bash commands can be used in the command mod, by simply using a `!`, for example, `!ls -l` (Tab to autocomplete);
* `%run output.py` can run the file;
* Run a background job using `%%python --bg --out output.txt` then followed by the python code;
* Plots inline can be made using `%matplotlib inline`;


## Filter Prime Numbers

Here is some one-liner from [Linghao:一行 Python 能实现什么丧心病狂的功能？](http://www.zhihu.com/question/37046157/answer/70629342)，

* Find out prime numbers using
  `filter(lambda x: all(map(lambda p: x % p != 0, range(2, x))), range(2, n))`
* Read csw file:
  `with open('t.csv', 'r') as f: rows = [line.strip().split(',') for line in f.readlines()]`
* Transpose a matrix
  `m = [ [1,2],[3,4]]`
  `zip(*m)`




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
