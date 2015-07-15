---
layout: article
title: "量子力学框架回顾一"
date: 2013-11-10
modified: 2013-11-18 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: true
comments: true
categories: science
summary: 量子力学回顾系列是为果壳的 [纠缠与相干](http://www.guokr.com/group/394/) 小组写的基础知识帖子。主要的受众应该是学过一点量子力学，但是后来很久没有再接触过量子力学的人或者没有学过量子力学但是有些物理基础的人。
---


量子力学回顾系列是为果壳的 [纠缠与相干](http://www.guokr.com/group/394/) 小组写的基础知识帖子。主要的受众应该是学过一点量子力学，但是后来很久没有再接触过量子力学的人或者没有学过量子力学但是有些物理基础的人。



$$
\newcommand{\ud}[1]{{#1^{\dagger}}}
\newcommand{\bra}[1]{\left\langle #1\right|}
\newcommand{\ket}[1]{\left| #1\right\rangle}
\newcommand\Tr{\mathrm{Tr}}
\newcommand{\braket}[2]{\langle #1 \mid #2 \rangle}
\newcommand\d{\mathrm{d}}
\newcommand\I{\mathbb{I}}
\newcommand{\avg}[1]{\left< #1 \right>}
$$


-----

初等量子力学其实核心内容非常少，甚至可以在一个帖子里面说完。

这个帖子中，我们会回顾一下量子力学，这样可以给没学过量子力学的同学一些概念，也可以帮助那些很久没有再碰过量子的同学一些复习的机会。

因为有很多东西我不知道怎么翻译，所以就直接使用英文名称了，反正就是个代号，应该无妨。


## 量子力学的前三个假设

* Physical State 是使用希尔伯特空间的一个 ket 来表示的，通常写作 $\ket{\psi}$。如果要看这个 state 具体是什么样子，我们需要指定一组完备的基矢 $\ket{i}$，通过把 state 在基矢上展开，我们可以得到一些具体的表达式，例如一个矢量，例如一个函数，取决于我们的基矢是连续的还是离散的。

  $$\ket{\psi} = \sum_i \ket{i}\bra{i}\ket{\psi} = \sum_i C_i \ket{i}$$

  这个跟相对论或者更简单（对物理学家来说是更复杂的）刚体力学里面类似，本质上类似微分几何里面要写出矢量具体形式，需要给出基矢。或者在简单的情况下，这个就等价于说，矢量是矢量分量和基矢，而不是我们小学中学学的那种只有一组分量的形式。这点很关键，如果不明白这一点，在做坐标变换的时候，常常就会搞混。

  物理里面最重要事情之一就是找不变量，除了做了好的可观测量，不变量还可以帮助我们做很多事情，因为不变，所以坐标变换下面也不变，这样才可以把不同的坐标下面的物理联系起来。

  State 是什么？就是一个用来表征一个体系所处的状态的。有了 state，我们就可以得到我们想要的任何的观测量。所以用 state 来代表一个体系的状态是个很好的选择。我们不再用 坐标，动量 来表示状态，因为我们有了 state，可以得到坐标和动量，state 要比他们更基本。


* Operators 通常是 Hermitian 算符。测量在量子力学里面（形式上）意味着 $\hat \Omega$作用在 state 上面，这样会自动挑选出这个测量的本征态 $\ket{\omega}$，其中可能的本征态出现的概率是：

  $$\left|\braket{\omega}{\psi}\right|^2$$

  这个怎么理解呢？算符就是个操作，作用就是投影。

  我们可以看一个平面几何的例子：

  如果我们有个矢量 $\vec r$，我们要把这个矢量投影到 $\vec x$ 轴上，怎么做呢？如果我们把 $\vec x$ 轴的基矢（单位矢量）写作 $\vec e_x$，那么这个投影就是

  $$ \vec e_x \cdot \vec r$$

  实际上，我为什么要把 x 轴基矢的指标写在下面呢？

  上面我们说了一个矢量应该包含分量和（正交）基矢，所以说，严格的写出来，

  $$r=r^x e_x + r^y e_y + r^z e_z$$

  这里 $e_x$ 等等坐标基矢。那么如何写出x轴的单位矢量呢？那应该是

  $$x= x^x e_x$$

  没有其它的分量。不过因为这个是单位矢量，所以（欧式空间）长度应该是 1，所以我们可以简单的写作

  $$I=e^x e_x$$

  给 $e^x$ 看起来像是 $e_x$ 的对偶。从这个例子可以看出来，其实我们可以简单的把基矢的对偶作用在一个矢量上面，从而把相应的分量挑选出来，例如我们把 $e^x$ 作用在 r 矢量上

  $$e^x (r^x e_x + r^y e_y + r^z e_z) = e^x r^x e_x = r_x$$

  （用了正交条件, $e^x e_y = 0$）

  结果正好是 x 轴方向的分量，也就是说，投影操作其实是这样的。

  （实际上上面那个 $ \vec e_x \cdot \vec r$ 应该写作 $e^x r$，那我为什么把指标放在下面也对呢？因为在欧式空间里面 $e^x$ 和 $e_x$ 是等价的，原因在度规是个单位张量。）

  这么说来，算符像是个投影的作用，那 state 投影在某个方向上。为什么可以这么说呢？我们可以把上面那个投影的操作翻译成 Dirac 符号，

  $e_x$ -> $\ket{x}$

  $e^x$ -> $\bra{x}$

  这样就可以把上面那个投影的矢量的运算翻译成使用 Dirac 符号来表示了

  $$\bra{x}(rx \ket{x} + ry \ket{y} + rz \ket{z}) = rx \braket{x}{x} = rx$$

  （同样用了正交条件， $\bra{x}\ket{y}=\bra{x}\ket{z}=0$）

  如果我们把 $rx \ket{x} + ry \ket{y} + rz \ket{z}$ 看做是一个 state，即 $\ket{\psi} = rx \ket{x} + ry \ket{y} + rz \ket{z}$。那么就是说

  $$\braket{x}{\psi}= rx $$

  这里写 $\braket{x}{\psi}$ 的实际意思是 $\bra{x}\ket{\psi}$。

  看到了吧，算符操作本质上就类似于投影。后面我们还会提到更多的算符的事情，因为这比较是量子力学里面最最核心的概念之一。

  （有没有一种感觉，如果我们用 Dirac 符号来讲这些简单的几何和线性代数，那可多干净啊~）



* State 的演化遵从 Schrodinger 方程（就不打那两个点了....希望 Schrodinger 先生不要介意）

  $$i\hbar \frac{\d}{\d t}\ket{\psi(t)} = \hat H \ket{\psi(t)} $$

  $\hat H$ 是 Hamiltonian Operator.




### 这三个假设说的什么

这三个假设的整体的逻辑是这样的：

**我们先得找出一种方法来描述一个物理体系（Postulate 1），然后我们得找到一种方法来获取我们想要的客观测量的信息（Postulate 2），其次我们需要知道体系随时间的演化（Postulate 3）.**

但是还有一些问题，例如我们如何知道想要的算符是什么样子呢？

 
### 仅仅利用前三个假设可以做很多事情

如何来描述一个体系的演化呢？我们当然可以直接用 Schrodinger 方程，但是问题在于，对于一些简单的情况，例如我们常见的那种 Hamiltonian 不含时间的情况，会不会有更加简单的形式呢？

（另外很重要的一件事情是 Picture：Schrodinger Picture 和 Heisenberg Picture。这两个说的是量子力学里面的一种相对性，更详细的说是坐标变换的相对性，坐标变换的时候我们可以理解为点不变而坐标系变化，也可以理解为点的变换坐标系不变。这种相对性在经典力学里面也有，只是我们不常提到。如果学刚体力学的话，可能会提到这一点。）

下面我们开始使用 Black Magic，定义一个神奇的算符：

$$\hat U \ket{\psi(t_0)} = \ket{\psi(t)}$$

有了这个神奇的算符 $\hat U$ 和一个初始状态，我们就可以得到任意时刻的状态了！

那么我们可以得到这个神奇的算符么？

到目前为止，我们知道的位移的有关 state 演化的知识就是 Schrodinger 方程（第三个假设），所以我们就试试。把这个等式代入到 Schrodinger 方程中。

$$
\begin{eqnarray}
     i\hbar \frac{\d }{\d t}\ket{\psi(t)} &=& \hat H \ket{\psi(t)} \\
     i\hbar \frac{\d }{\d t}\hat U \ket{\psi(t_0)} &=& \hat H \hat U \ket{\psi(t_0)} \\
     i\hbar \frac{\d }{\d t}\hat U &=& \hat H \hat U
\end{eqnarray}
$$

这个结果看起来是不是很熟悉？这个方程的解（如果 Hamiltonian 是不含时间的）就是如下简单的指数形式

$$\hat U = e^{- i \hat H (t-t_0)/\hbar}$$


我们可以证明这个神奇的算符是 Unitary 的，只要 $\hat H$ 是 Hermitian 的（这通常是对的，但是也有 non Hermitian 的一些唯像的例子）。


上面我们得到了这个神奇的演化算符的形式，但是只有那个形式通常不好用，所以我们会在 Hamiltonian 本征基矢（离散）下面写出来, $\ket{\epsilon_i}$,

$$
\begin{eqnarray}
 	 \hat U \ket{\phi} &=& e^{- i \hat H (t-t_0)/\hbar} \ket{\psi}   \\
     \hat U \ket{\phi} &=& \sum_i e^{- i \hat H (t-t_0)/\hbar} \ket{\epsilon_i}\braket{\epsilon_i}{\psi}  \\
	 \hat U \ket{\phi} &=& \sum_i e^{- i \epsilon_i (t-t_0)/\hbar} \ket{\epsilon_i}\braket{\epsilon_i}{\psi}
\end{eqnarray}
$$
 	
我们通常会用下面的形式来写这个演化算符：

$$\hat U = \sum_i e^{- i \epsilon_i (t-t_0)/\hbar} \ket{\epsilon_i}\bra{\epsilon_i}$$






### 几点数学知识

说到这里，我们得加一点其他的数学知识了。

**Hermitian Conjugate**

${}^\dagger$ 是 Hermitian Conjugate 的符号，例如
$$\hat A^\dagger$$
是算符 $\hat A$ 的 Hermitian Conjugate.

对于 state，我们有
$$\ket{\psi}^\dagger = \bra{\psi}$$


**Hermitian**

我们说一个东西是 Hermtian 的如果它的 Hermitian Conjugate 是它本身，即
$$\hat A^\dagger = \hat A$$



**Identity**

Identity 就是一个作用在一个 state 或者算符上面不改变 state 或者算符的一个东西。既然不改变原来的内容，那么为什么我们会需要这个东西呢？

这就是量子力学里面最大的秘密了。量子力学里面最大的秘密就是往式子里面插入 Identity。

我们可以看一个例子。先考虑一个问题，一个矩阵的函数 $f(\mathbf A)$ 是如何定义的呢？
矩阵基本运算我们只知道加法和乘法，所以要定义一个函数，需要把这个写成加法和乘法的样子。哎，我们不是有个叫做 Taylor 展开的东西么，这个展开的结果就只有乘法和加法，所以我们定义矩阵的函数是通过 Taylor 展开来做的。

量子力学里面离散的基矢下面的算符就是矩阵的形式，所以实际上我们定义量子力学里面的算符也是通过 Taylor 展开定义的。下面我们证明一个量子力学里面常用的式子

$$
\begin{eqnarray}
&&\hat A^\dagger e^\hat B \hat A \\
&=& \hat A^\dagger \left( \sum_n \frac{1}{n!}\hat B^n \right) \hat A\\
&=&\hat A^\dagger \left( \hat B + \frac{1}{2!}\hat B^2 + \frac{1}{3!}\hat B ^3 + \cdots \right) \\
&=& \hat A^\dagger \hat B \hat A + \frac{1}{2!} \hat A^\dagger \hat B^2 \hat A + \frac{1}{3!}\hat A^\dagger \hat B^3 \hat A + \cdots
\end{eqnarray}
$$

如果我们的$\hat A$是 Unitary 的（看下面的关于 Unitary 的说明），即，$\hat A^\dagger \hat A = \hat I$ .然后我们可以往里面加 Identity （$\hat I$），例如
$$ \hat A^\dagger \hat B^2 \hat A = \hat A^\dagger \hat B \hat I \hat B \hat A = \hat A^\dagger \hat B \hat A \hat A^\dagger \hat B \hat A = (\hat A^\dagger \hat B \hat A)^2$$

用同样的方法，可以得到一个关于 $\hat A^\dagger f(\hat B)\hat A$ 的等式。（请自行证明。）

**Unitary**

我们说一个算符是 Unitary 的，如果
$$\hat U^\dagger \hat U = \hat I $$

$\hat I$ 是单位算符，通常可以简单写成 $I$。

Unitary 是个非常重要的 ，它对于理解体系演化有非常重要的作用。后面我们会看到。


**Eigenstate**

如果
$$\hat \Omega \ket{\omega}=\omega \ket{\omega}$$
即如果一个算符作用在这个态上面不改变这个态，那么我们说这个态是一个算符的本征态（eigenstate）。

其中 $\omega$ 是本征值。

这些定义跟线性代数里面的是一样的。