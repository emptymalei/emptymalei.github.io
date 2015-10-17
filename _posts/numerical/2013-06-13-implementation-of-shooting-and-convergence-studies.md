---
layout: article
title: "Implementation of Shooting and Convergence Studies"
date: 2013-06-13 # not necessarily the date created but to ensure the sorting of posts
modified: 2013-06-13 # 2015-02-03 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: false
comments: true
categories: numericalcn
summary: 学习 Matlab 解微分方程，并且跟随 Prof 一起来用 Shooting 方法解决边值问题（boundary value problem）的例子，当然这里面包括了 time-stepping 方法。
---



这一节学习 Matlab 解微分方程，并且跟随 Prof 一起来用 Shooting 方法解决边值问题（boundary value problem）的例子，当然这里面包括了 time-stepping 方法。


## 4.1 Converting to 1st-order Problem

我们下面要解决一个具体的问题例子：
\begin{eqnarray}
\phi_{xx} + (n(x) - \beta )\phi &=& 0 \\
\phi(\pm 1) &=& 0
\end{eqnarray}

为了简单我们给定一个 $n(x) =100$。

现在回想一下我们之前讨论的理论，是下面的形式：
$$ \frac{\mathrm d y}{\mathrm dt} = f(t,y) $$
那么我们的任务就是：把现在的问题转化成这类一阶的问题。

我们定义
$$
\begin{cases}
y_1 = \phi \\
y_2 = \phi_x
\end{cases}
$$

然后很容易代入原来的问题中，得到
$$
\begin{cases}
y_1’=y_2 \\
y_2’ = (\beta - 100) y_1
\end{cases}
$$

太好了，我们现在就把问题转换成一阶的问题了。也就是说，写成矢量形式：
$$ \frac{\mathrm d\vec y}{\mathrm dx} = \vec f(x,\vec y) $$
其中，
$$\vec y = \begin{pmatrix} y_1 \\ y_2 \end{pmatrix}$$
$$ \vec f(x,\vec y) = \begin{pmatrix} y_2 \\ (\beta - 100) y_1 \end{pmatrix} $$



## 4.2 Implementation of Boundary Conditions


上面只是方程本身的，我们还有边界条件。所以最终，我们要解决的问题就是：


$$
\begin{cases}
y_1’=y_2 \\
y_2’ = (\beta - 100) y_1
\end{cases}
$$
$$ \phi(\pm 1) = 0 $$
$$ \beta < 100 $$


为什么 $\beta < 100$ 呢？现在我们想一下 $\beta > 100 $，那么我们要解决的问题是：
$$ \phi_{xx}= (\beta -100 )\phi $$
这样的话，解就是
$$\phi \propto  e^{\pm \sqrt{\beta -100} x} $$

这个解是没法满足边界条件$\phi(\pm 1) = 0$ 的。因为这个解是单调的，而我们要求在 -1 和 1 处有相同的值 0。
