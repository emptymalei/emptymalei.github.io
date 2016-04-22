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

或者说，任何复数都可以写成

$$
\begin{equation}
z=x\mathbf I + y\boldsymbol\sigma_2
\end{equation}
$$

的形式。

但不同的是，quaternion 矩阵表示的元素是复数，也需要我们使用更多的 Pauli Matrices。

做了这样的推广之后，quaternion 还有还好的性质，

1. 在加法，乘法和实数乘法下面是 closed.
2. 模是两个复数的模之和。

这些性质都很容易验证，特别是在 closed 这条，我们可以进一步验证这构成一个群。

还有一个非常漂亮的性质就是自己乘以自己的 hermitian conjugate 等于其模乘以单位矩阵，

$$
\begin{equation}
q^\dagger q= q q^\dagger = \| q \|^2 I.
\end{equation}
$$

为什么这个漂亮呢？因为这样我们就可以往 $2\times2$矩阵里面随便插入这个量除以其模。


另外一个非常有趣的事情是，quaternion 可以跟 Pauli matrices 联系起来。一个任意的 quaternion，可以通过 Pauli matrices $\vec \sigma$ 和一个四向量 $\vec x$ 来生成，

$$
\begin{align}
q(x) & = x^0 - i \boldsymbol\sigma \cdot \vec x \\
& = \begin{pmatrix} x^0 - i x^3 & -x^2 -ix^1 \\ x^2 -i x^1 & x^0 + i x^3 \end{pmatrix}.
\end{align}
$$

这个也正好体现了 Pauli matrices 外加单位矩阵的完备性。

再加上 Pauli matrices 跟转动有关，所以这个简单的推广在物理中有很重要的应用。

## 转动

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

除了生成元的看法，还有一种比较直观的方法来理解转动，那就是给定一个复数，另一个复数作用上去的结果是一个转动过的复数。

$$
\begin{equation}
z_1 z_2=(\rho_1 e^{i\phi_1}) (\rho_2 e^{i\phi_2})= \rho_1\rho_2 e^{i(\phi_1+\phi_2)}
\end{equation}
$$

也就是说，一个复数 $z_1$ 作用在另一个复数 $z_2$ 上产生了两个效果：

1. 长度增加了 $\rho_1$ 倍
2. 角度转动了 $\phi_1$

再换句话说，单位长度复数作用在另一个复数上的结果是一个纯粹的转动。

要理解四元数对应的转动，需要先指明四元数对应的空间。如果我们指定四元数的长度，那么可以看到是一个四个参数的长度，其实是半径，也就是可以看作四维空间中的三维球面。作为对照，定长复数是个二维的圆。

## Hamiltonian

我们可以看一下一个二能级系统的 Hamiltonian,因为是 $2\times 2$，所以可以使用 Pauli matrices + identity 展开，然而 identity 对应的是个 global phase，所以我们可以只用 Pauli matrices 来表示一个 Hamiltonian,

$$
\begin{equation}
\mathbf H = \vec h\cdot\boldsymbol \sigma
\end{equation}
$$

对于任意的 unitary 的变换 $\mathbf U_0=\cos\theta \mathbf I + \sin\theta\hat{\mathbf H}$ 作用在 Hamiltonian 上，即 $\mathbf U_0 \mathbf H \mathbf U_0^\dagger$，我们可以证明这是 Hamiltonian $\mathbf H$ 的旋转。

$$
\begin{equation}
\mathbf U_0 \mathbf H\mathbf  U_0^\dagger =(\cos \theta \mathbf I + \hat{\mathbf{H}}\sin\theta) \mathbf{H}(\cos \theta \mathbf I + \sin \theta \hat{\mathbf{H}}) ^\dagger = \mathbf{H}.
\end{equation}
$$

为了看清楚这个转动，我们定义一个正交空间。通过 Hamiltonian 的写法已经比较明显，就是我们的基矢是 Pauli matrices 组成的。我们构造的转动，其实是一个围绕 $\hat{\mathbf H}$ 的转动，因为我们发现我们构造的转动对 $\mathbf H$ 不起作用。这类似于欧氏空间的转动，围绕自身为转动轴的转动不改变这个矢量本身。

那么一个更加一般的 unitary 变换呢？例如 $\mathbf U=\cos\theta \mathbf I + \sin\theta \hat{\mathbf u}$，这里 $\hat{\mathbf u}=\vec u \cdot \boldsymbol{\sigma}$ 是个单位矢量（等价于说 $\vec u$ 是个欧氏空间的单位矢量）。 我们可以证明 $\mathbf U \mathbf H \mathbf U^\dagger$ 是一个围绕转动轴 $\hat{\mathbf u}$ 的转动，转动的角度是 $2\theta$.

简单起见，我们看一个特殊的情况，$\vec u=(1i,0,0)$. 类比欧氏空间的转动，现在转动轴等价于在欧氏空间的 $x$ 轴上。同时，我们也考察 Hamiltonian 的特殊情况，$\vec h=(0,h_2,0)$。这样转动 $2\theta$ 之后，至少在欧氏空间，我们应该得到这样一个矢量 $(0,\cos 2\theta,\pm i\sin 2\theta)$ . 最后有 $\pm$ 是因为我们尚且不确定转动的方向。

我们可以验证这个结果。

$$\begin{align}\mathbf U \mathbf H \mathbf U^\dagger &= (\cos\theta \mathbf I + \sigma_1 \sin \theta)h_2\sigma_2 (\cos \theta I + \sigma_1 \sin\theta) \\ &= h_2\left[ (\cos^2\theta - \sin^2\theta)\sigma_2 + \cos \theta \sin\theta \{\sigma_2,\sigma_1 \}\right] \\ & = h_2( 0,\cos 2\theta,0)\end{align}$$

我们已知 $\{\sigma_2,\sigma_1\}=0$ ，所以现在计算有问题？问题出在哪里呢？



> 这里计算有误！或者基矢定义的问题？感觉不像是基矢定义的问题，顶多就是多一些正负号或者 $i$ 之类的量。不应该直接变成第三项为零啊。
