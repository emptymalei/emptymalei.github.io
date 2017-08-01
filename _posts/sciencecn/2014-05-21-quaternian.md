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



上周 （May 21, 2014，此文已经多次更新） colloquium 的时候，第一次听到 quaternion 这个词，觉得很新鲜。quaternion 的矩阵表示是

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
z=a \mathbf I + b \mathbf J
\end{equation}
$$

的形式。$\mathbf J$ 定义为 $i \boldsymbol \sigma_2$. 也就是说这里所有的元素都是实数，是复数的一种表示方式。

也有定义 $\mathbf J = - i \boldsymbol \sigma_2$ 的方式，这样的定义好处是可以直接跟转动对应起来。
{: .notes--info }

<div class="notes--info" markdown="1">
之所以可以写成这样的形式，是因为

\begin{equation}
\mathbf J ^ 2 = - \mathbf I.
\end{equation}

这样就跟虚数单位 $i$ 很像。这里似乎有一个可以自由选择 $\mathbf J$ 的符号的问题。

另外这个原因跟 $\mathbf J$ 的本征值是 $\pm i$ 有关。
</div>

仿照复数的矩阵表达，我们可以想象如果把用来做基的矩阵扩展到复数域上的矩阵，那么就可以扩展基的个数，从而扩展数的行为，而且在选取某些基前面的系数为零的时候，可以退化到复数的情况。也就是说，quaternion 矩阵表示的基可以用复数的矩阵来表示，也暗示了我们需要使用更多的 Pauli Matrices.

例如文章开头的四元数 $q$ 可以拆解为

$$
\begin{equation}
q = \begin{pmatrix}
z & w \\ 
-w^* & z^*
\end{pmatrix} = 
z_ R \mathbf I + z_ I \mathbf J_ 3 + w_ R \mathbf J_ 2 + w_ I \mathbf J_ 1,
\end{equation}
$$

其中 $\mathbf J_i = i \boldsymbol \sigma_i$.

一个非常有趣的问题是，既然复数常常可以解释为转动，那么四元数是否也是对应某种转动呢？

<div class="notes--info" markdown="1">
复数理解为转动的想法，可以在复数坐标系里面理解。虚数部分和实数部分形成一个坐标，或者向量，可以解释为一个跟实数轴正向形成的角度，复数乘法可以解释为角度的相加。这个可以使用三角函数关系证明。

当两个复数相乘的时候，其实是实数部分会和虚数部分以及虚数单位相乘，而一个实数乘上一个虚数单位，其实就把这条边转动了90度。

换个角度来看这个问题，那就是转动的矩阵表达其实就是

$$
\begin{pmatrix}
\cos \theta & -\sin\theta \\
\sin\theta & \cos\theta
\end{pmatrix} = \cos \theta \mathbf I - \sin \theta \mathbf J.
$$

</div>

## 四元数的几个好玩的性质

做了这样的推广之后得到的 quaternion 还有还好的性质，

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


另外一个非常有趣的事情是，quaternion 可以跟 Pauli matrices 联系起来。从之前的矩阵分解来看，一个任意的 quaternion，可以通过 Pauli matrices $\vec \sigma$ 和一个四向量 $\vec x$ 来生成，

$$
\begin{align}
q(x) & = x^0 - i \vec{\boldsymbol\sigma} \cdot \vec x \\
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

在三维欧氏空间中，围绕任意单位矢量 $\hat u = u_1 \hat e_1 + u_2 \hat e_2 + u_3 \hat e_3$ 转动角度 $\theta$ 的生成元是

$$
\begin{equation}
e^{\frac{\theta}{2} \hat u} = \cos \frac{\theta}{2} + \hat u \sin \frac{\theta}{2}.
\end{equation}
$$

如果我们把一个四元数的各个基 $\mathbf J_i$ 分别跟 $\hat e_i$ 对应起来，那么我们就可以把四元数作为三维的转动来理解转动来理解。例如对于任意的四元数我们可以写成

$$
\mathbf q = \lvert q \rvert \left( \cos \theta \mathbf I +  \sin\theta \frac{ u_1 \mathbf J_1 + u_2 \mathbf J_2 + u_3 \mathbf J_3 }{ \lvert u_1 \mathbf J_1 + u_2 \mathbf J_2 + u_3 \mathbf J_3 \rvert } \right).
$$

这样一来，$\hat u$ 就跟  $ \frac{ u_1 \mathbf J_1 + u_2 \mathbf J_2 + u_3 \mathbf J_3 }{ \lvert u_1 \mathbf J_1 + u_2 \mathbf J_2 + u_3 \mathbf J_3 \rvert } $ 对应起来了。这里我们直接用 $\hat{\mathbf u}$ （粗体是因为这里是矩阵表示）替换这一项，

$$
\mathbf q = \lvert q \rvert \left( \cos \theta \mathbf I +  \sin\theta \hat{\mathbf u} \right).
$$

这样我们就可以用 Euler 公式来重新写出四元数 $\mathbf q$，

$$
\mathbf q = \lvert q \rvert e^{ \theta \hat {\mathbf u} }.
$$

其中的粗体的矩阵无非就是等价于坐标轴的单位矢量。

对于任意的三维空间的矢量 $\vec s$，我们可以把这个矢量围绕一个矢量 $\hat u$ 转动 $2\theta$ 写作 $\mathbf q \vec s {\mathbf q}^{-1}$.


## Hamiltonian

我们可以看一下一个二能级系统的 Hamiltonian,因为是 $2\times 2$，所以可以使用 Pauli matrices + identity 展开，然而 identity 对应的是个 global phase，所以我们可以只用 Pauli matrices 来表示一个 Hamiltonian,

$$
\begin{equation}
\mathbf H = \vec h\cdot \vec{\boldsymbol \sigma} = -i \vec h \cdot \vec{ \mathbf J }.
\end{equation}
$$

对于一个 unitary 的变换 $\mathbf U_0=\cos\theta \mathbf I + \sin\theta\hat{\mathbf H}$ 作用在 Hamiltonian 上，即 $\mathbf U_0 \mathbf H \mathbf U_0^\dagger$，我们可以证明这是 Hamiltonian $\mathbf H$ 的旋转。

$$
\begin{equation}
\mathbf U_0 \mathbf H\mathbf  U_0^\dagger =(\cos \theta \mathbf I + \hat{\mathbf{H}}\sin\theta) \mathbf{H}(\cos \theta \mathbf I + \sin \theta \hat{\mathbf{H}}) ^\dagger = \mathbf{H}.
\end{equation}
$$

为了看清楚这个转动，我们刚刚定义一个正交空间，$\\{\mathbf I, \vec{\mathbf J}\\}$。通过 Hamiltonian 的写法已经比较明显，就是我们的基矢是 Pauli matrices 组成的。我们构造的转动，其实是一个围绕 $\hat{\mathbf H}$ 的转动，因为我们发现我们构造的转动对 $\mathbf H$ 不起作用。这类似于欧氏空间的转动，围绕自身为转动轴的转动不改变这个矢量本身。

那么一个更加一般的 unitary 变换呢？例如 $\mathbf U=\cos\theta \mathbf I + \sin\theta \hat{\mathbf u}$，这里 $\hat{\mathbf u}=\hat u \cdot \boldsymbol{\sigma}$ 是个单位矢量（等价于说 $\vec u$ 是个欧氏空间的单位矢量）。 我们可以证明 $\mathbf U \mathbf H \mathbf U^\dagger$ 是一个围绕转动轴 $\hat{\mathbf u}$ 的转动，转动的角度是 $2\theta$.

## 中微子物理

在场论中，常常遇到需要转换态空间的情况。例如对于中微子来说，真空中的中微子振荡的 Hamiltonian 在味道空间写作

$$
H \to \mathbf H_f =  \frac{\omega}{2}\begin{pmatrix}
-\cos 2\theta & \sin 2\theta \\
\sin 2\theta & \cos 2\theta
\end{pmatrix} = -\frac{\omega}{2}(  \cos 2\theta \boldsymbol\sigma_3 + \sin 2\theta \boldsymbol\sigma_1 )
$$

也就是说，这个 Hamiltonian 可以看作是 

$$
\mathbf H_p = - \frac{\omega}{2} \boldsymbol \sigma_3
$$

以 $i \boldsymbol \sigma_2$ 为轴转动 $\theta$ 的结果。

而这里 $\mathbf H_p$ 就是本征能量基上的表示，而 $\mathbf H_f$ 是味道空间的表示，两者之间相差一个转动。这也就是所谓的 Flavor Isospin Language. 当然如果想要把整个 Schrodinger 方程变成三维空间里的矢量语言，我们需要对波函数（或者密度矩阵）做相应的处理。