---
layout: article
title: "Initial Value Problem"
date: 2013-06-12 # not necessarily the date created but to ensure the sorting of posts
modified: 2013-06-12 # 2015-02-03 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: false
comments: true
categories: numericalcn
summary: 初始值问题
---

Initial value problem, 初始值问题是这样的：

$$ \frac{\mathrm d y}{\mathrm d t} = f(t,y) $$


数学上，我们的处理是这样的：
$$ \frac{\mathrm dy}{\mathrm dt} = \lim_{\Delta t\rightarrow 0} \frac{y(t + \Delta t) - y(t)}{\Delta t} $$


数值计算中，如果我们依然按照上面的数学的方法来处理，那么我们就要告诉计算机去做 0/0，这显然是不行的。

实际上，计算机是这么处理的。当 $\Delta t$ 很小的时候，
$$ \frac{\mathrm dy}{\mathrm dt} \approx \frac{y(t + \Delta t) - y(t)}{\Delta t} $$


我们有好几种方法来数值的解决这类问题。
