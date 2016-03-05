---
layout: article
title: "四元数和转动"
date: 2014-05-21
modified: 2014-05-21 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: sciencecn
summary: 关于四元数和转动的关系
---



上周 colloquium 的时候，第一次听到 quaternion 这个词，觉得很新鲜。quaternion 的矩阵表示是

$$
\begin{equation}
q = \begin{pmatrix}\;z & w \\ -w^* & \;z^*\end{pmatrix} .
\end{equation}
$$

当时这个定义写出来，我立刻就想到了复数 $C = a+ib$ 的矩阵表达，

$$
\begin{equation}
C = \begin{pmatrix}
  \;\; a &   b  \\
  - b &  a
\end{pmatrix}.
\end{equation}
$$

但不同的是，quaternion 矩阵表示的元素是复数。

做了这样的推广之后，quaternion 还有还好的性质，

1. 在加法，乘法和实数乘法下面是 closed.
2. 模是两个复数的模之和。

这些性质都很容易验证，特别是在 closed 这条，我们可以进一步验证这构成一个群。

还有一个非常漂亮的性质就是自己乘以自己的 hermitian comjugate 等于其模乘以单位矩阵，

$$
\begin{equation}
q^\dagger q= q q^\dagger = \| q \|^2 I.
\end{equation}
$$

为什么这个漂亮呢？因为这样我们就可以往 $2\times2$矩阵里面随便插入这个量除以其模。


另外一个非常有趣的事情是，quaternion 可以跟 Pauli matrices 联系起来。一个任意的 quaternion，可以通过 Pauli matrices $\vec \sigma$ 和一个四向量 $\vec x$ 来生成，

$$
\begin{align}
q(x) & = x^0 - i \vec \sigma \cdot \vec x \\
& = \begin{pmatrix} x^0 - i x^3 & -x^2 -ix^1 \\ x^2 -i x^1 & x^0 + i x^3 \end{pmatrix}.
\end{align}
$$

这个也正好体现了 Pauli matrices 外加单位矩阵的完备性。

再加上 Pauli matrices 跟转动有关，所以这个简单的推广在物理中有很重要的应用。

回想一下，欧式空间的转动，

$$
\begin{equation}
R \circeq \begin{pmatrix}\cos\theta & -\sin\theta \\ \sin\theta & \cos\theta\end{pmatrix},
\end{equation}
$$

显然这个转动是个复数，写成常见的复数形式，应该是

$$
\begin{equation}
R \circeq \cos\theta - i \sin\theta,
\end{equation}
$$

进一步用欧拉公式，

$$
\begin{equation}
R\circeq e^{-i \theta}.
\end{equation}
$$

然后这里可就让我们想到了这是二维欧式空间转动的生成元。
