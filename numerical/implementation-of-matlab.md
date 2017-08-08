---
layout: article
title: "Implementing MATLAB's Boundary Value Solver"
date: 2013-06-22 # not necessarily the date created but to ensure the sorting of posts
modified: 2013-06-22 # 2015-02-03 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: false
comments: true
categories: numericalcn
summary: 这一部分我们学习如何把具体的微分方程问题转化成 MATLAB 可以解决的问题，并且学习使用 MATLAB 的 bvp4c 来编程。
---




这一部分我们学习如何把具体的微分方程问题转化成 MATLAB 可以解决的问题，并且学习使用 MATLAB 的 bvp4c 来编程。


## 6.1 Setting Up Boundary Value Problems in MATLAB

因为 MATLAB 善于解决矩阵问题，所以我们一般要把问题简化为矩阵的问题。因此如果要使用我们前面的解决微分的方法（离散的，而非解析的），我们需要把高阶的问题简化成低阶的问题。

用一个简单的例子来说明。

$$ y’’ + 3y + 6y = 5 $$

首先我们想要写成矩阵形式，需要化成一阶的方程组。对于这个具体的问题，我们可以定义：
\begin{eqnarray}
y_1 &=& y \\
y_2 &=& y’
\end{eqnarray}

这样我们原来的方程就能写成
\begin{eqnarray}
y_1’ &=& y_2 \\
y_2’ &=& 5 - 3y_2 - 6y_1
\end{eqnarray}

然后我们需要把初始条件加进来：
\begin{eqnarray}
y_1 - 3 &=& 0 \qquad \text{at } x =1\\
y_1 + 2 y_2 &=& 5 \qquad \text{at } x=3
\end{eqnarray}


## Implementing bvp4c in MATLAB

JUST MATLAB PROGRAMMING

CHECK THE PROGRAMS

## Nonlinear Boundary Value Problems

采用这样一个例子;
$$ y’’  +  (100 - \beta )y + y^3 = 0 $$

边界条件：
$$ y(\pm 1) =0 $$

第一部还是把这些写成一阶的方程组：

定义
\begin{eqnarray}
y_1 &=& y \\
y_2 &=& y’
\end{eqnarray}

原来的二阶的方程变成：

\begin{eqnarray}
y_1’ &=& y_2 \\
y_2 ‘ &=& (\beta - 100)y_1 - y^3
\end{eqnarray}

但是这里有一个多余的参数 $\beta$，我们需要一个额外的限制，所以我们临时添加一个：
$$ y_2(-1) = 1 $$


## Solving Nonlinear Problems with bvp4c

JUST MATLAB PROGRAMMING

CHECK THE PROGRAMS
