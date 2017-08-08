---
layout: article
title: "Iterative Solution Methods for Ax=b"
date: 2013-06-23 # not necessarily the date created but to ensure the sorting of posts
modified: 2013-06-23 # 2015-02-03 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: false
comments: true
categories: numericalcn
summary: 复习 Augmented matrix 方法解方程，说明这种高斯消元法是 O(N^3) 的解法。
---

## 9.1 Linear System of Equations

复习 Augmented matrix 方法解方程：http://en.wikipedia.org/wiki/Augmented_matrix

然后，说明这种高斯消元法是 O(N^3) 的解法。


## 9.2 LU Decomposition

查看讲义或者 wikipedia （http://en.wikipedia.org/wiki/LU_decomposition#Example ）。

LU decompostion 也是 O(N^3) 的解法，但是只要做了一次 LU decomposition，之后再处理同样的矩阵，就不需要再做 decomposition 了，这样如果要重复处理类系的矩阵，那么后面的处理就变成了  O(N^2) 的算法。

## 9.3 Factoring A Matrix

总结前面的两节：

1. Gaussian Elimination: $O(N^3)$
2. LU Decomposition: $O(N^2)$

但是如何获得 LU 分解呢？课程给了一个例子。

## 9.4 MATLAB 对这个问题的处理的

（略）
