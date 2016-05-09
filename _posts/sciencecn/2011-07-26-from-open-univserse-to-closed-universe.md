---
layout: article
title: "我们的宇宙可能由闭宇宙演化为开宇宙么"
date: 2011-07-26
modified: 2011-07-26 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: sciencecn
summary: 我们的宇宙可能由闭宇宙演化为开宇宙么
---

这是一个系列栏目，我们将对一个初步问题逐步剖析，给出解释并不断引出新的问题。

## 第一节

准备知识：

Q：什么是开宇宙？什么是闭宇宙？
A：选取球坐标：t,r,$\theta$,$\phi$。给定一个 FRW 度规：

$$
\left(
\begin{array}{cccc}
 -1 & 0 & 0 & 0 \\
 0 & \frac{a[t]^2}{1-r^2 k} & 0 & 0 \\
 0 & 0 & r^2 a[t]^2 & 0 \\
 0 & 0 & 0 & r^2 a[t]^2 \sin{\theta}^2
\end{array}
\right)
$$



如果k=0，那么这个度规是一个平直的欧式度规，也就是平直的宇宙；如果k=−1，那么这是一个双曲面的度规，代表开放的宇宙；如果k=+1，这是一个球面度规，这代表闭合的宇宙。这里面之所以k只能取孤立的值，是因为我们故意通过调节a[t]把它scale过了。

我们的宇宙可能由闭宇宙演化为开宇宙么？

[IMPORTANT:要么不读下面的，要么全部读完。]

下面我们使用连续流体模型来计算宇宙的演化。在这种简化的模型下，宇宙的演化是由宇宙的内含物质的多少和属性以及设定的度规，按照Einstein方程( $G_{ab}=8\pi T_{ab}$ )来确定的。

使用我们一开始给出的坐标和度规。为了讨论宇宙是否可以有一开始的开（或者闭）演化为闭（或者开），这里先假定代表宇宙的开闭的k与时间有关，记为k[t]。也就是说，度规为：


$$
\left(
\begin{array}{cccc}
 -1 & 0 & 0 & 0 \\
 0 & \frac{a[t]^2}{1-r^2 k[t]} & 0 & 0 \\
 0 & 0 & r^2 a[t]^2 & 0 \\
 0 & 0 & 0 & r^2 a[t]^2 \sin{\theta}^2
\end{array}
\right)
$$

计算得到 Einstein 张量，完整的式子可以从本文结尾所附文档中查看。

一般而言，我们的使用各项同性的理想流体模型。对应的物质的能动张量 $T_{ab}$没有非对角项。也就是说，利用Einstein方程，我们得到，$G_{01}=0$。即

$$
\frac{rk'[t]}{1-r^2 k[t]}=0.
$$

如此我们便得到代表宇宙的开闭的k必定是一个与时间无关的量。从而证明在理想流体各项通过性FRW模型中，宇宙不可能从闭合演化为开放或者相反。

其他模型？
如果想要使得k含时，必须使得能动张量存在两个非对角项，即 $T_{01}$ 和 $T_{10}$。也就是说要使用非理想的流体模型。然后通过非对角项增加一个方程，用了解决增加的含时未知量k[t]。这样方程依然很可能可解。
下面要解决的问题是，如果引入非理想流体模型，那么是否是要偏离理想流体模型多远呢？因为我们的宇宙中的星体相隔比较远，产生shear的可能性比较小。所以偏离理想流体模型太远的模型是不可靠的。

[2011-07-29][IMPORTANT]

上面提到使用非理想流体模型。这个说法不太对。因为非理想流体最多在空间分量上引入非对角。

从上面的计算可以看到，如果要求k含时，那么要求T01不为零。意思是说，要求在r方向存在能流密度。这跟是不是理想流体没什么关系。物理上讲，这是显然要这样的，因为比如我们想要宇宙从闭宇宙演化为开宇宙，而我们用的又是各向同性的度规，那么可以通过减少空间各点的能量密度来实现。但是同时，物理上讲，这个又很奇怪。因为我们这里的能动张量是一个共动坐标上的量，所以如果存在这样的能流项，意味着空间每一点的共动的能量密度在流失或者流入，也就是意味着能量的消失或创生，这一点非常非常难以令人接受。

所以上面提到的其他模型，一般也是不行的。

需要提到的一点是，这个方法来证明有两个问题：

a. 我们得到度规的时候，是把 $\frac{\mathrm d^2 r}{K[t](1-kr^2)}$ 分母上的含时间的项提出来，这里k之所以只能够取1,0,-1是因为这分别代表着球面度规，平直度规和双曲面度规。所以上面直接取k[t]含时间的方法不太合适。
b. 这样证明多此一举。正如上面所说，如果一开始我们选定一个度规，那么含时间的项只是K[t]。不管这一项如何变，都不会导致几何性质从球面度规变化为双曲面度规或其他的。



* 完整的计算过程：[OpenOrClosedUniverse.pdf]({{ site.url }}/images/posts/from-open-univserse-to-closed-universe/OpenOrClosedUniverse.pdf)
* Mathematica文件 [package+calculation]({{ site.url }}/images/posts/from-open-univserse-to-closed-universe/OpenOrClosedUniverse.zip)


## 第二节

第一节中用了一种不恰当的方法来讨论这个问题。但是我们给出了一个比较好的物理解释。
现在，我们将重新思考这个问题，并在文章结束提出下一期的问题。

梁灿彬的《微分几何入门与广义相对论》一书中，讨论了如何找到可以描述所有满足宇宙学原理的可能的度规的方法。通过讨论，得到了三种度规可以完整的描述所有的最大对称性的静态度规。度规的空间部分列出如下：

$$
\begin{align}
\mathrm d l^2&= K^{-1}[\mathrm d^2 \arcsin r  + r^2 (\mathrm d\theta^2+\sin^2\theta\mathrm d^2\phi)], K>0 \\
\mathrm d l^2&= \mathrm d r ^2 + r^2 (\mathrm d\theta^2+\sin^2\theta\mathrm d^2\phi), K=0 \\
\mathrm d l^2&=- K^{-1}[\mathrm d  ^2\mathrm {sh}^{-1} r + r^2 (\mathrm d\theta^2+\sin^2\theta\mathrm d^2\phi)], K<0
\end{align}
$$


在这三种情况里面，我们总可以做共形变化，把这些度规变成静态的球面、欧式或者双曲面的度规。写成下面的形式

$$
\mathrm ds^2=-\mathrm dt^2+a^2(t)[\frac{\mathrm dr^2}{1-kr^2}+r^2(\mathrm d\theta^2+\sin\theta\mathrm d\phi^2)],
$$



其中，k只取-1,0,1.因为我们故意通过通过变化scale factor a(t) 来代替上面的三个式子中的K(t)。


这样一来，宇宙的时空曲率的信息都放在了scale factor中了，而k决定了宇宙时空几何的类型，即球面，平直还是双曲。如果我们选定一种作为宇宙开始的时候的度规，比如这里我们选取球面度规，那么随着宇宙的演化，宇宙的曲率将从无穷大一直减小到0。我们不会再去讨论这个曲率从零变为负值的情况。因为时空曲率变为零，意味着scale factor无穷大，也就是说，意味着是无限远的未来。由于能量密度不能为负，所以不可能从一种类型的时空几何变为另一种类型。

下面我给出详细的计算。思路是，看一下是不是有可能从一种接近另一种然后到达最后一种情况。由于一旦度规写出来，其实就确定了一种时空几何，所以只能看其渐进行为，比如是从球面度规渐进平直。实际上不用计算也能够明白，渐进行为是可以的，这意味着无穷久之后。

假定一开始的宇宙的度规如下：

$$
\left(
\begin{array}{cccc}
 -1 & 0 & 0 & 0 \\
 0 & \frac{A[t]}{1-k r^2} & 0 & 0 \\
 0 & 0 & r^2 A[t] & 0 \\
 0 & 0 & 0 & r^2 A[t] \text{Sin}[\theta ]^2
\end{array}
\right)
$$

当然，其中的A[t]为正。计算得到Einstein Tensor为

$$
\left(
\begin{array}{cccc}
 \frac{3 \left(4 k A[t]+A'[t]^2\right)}{4 A[t]^2} & 0 & 0 & 0 \\
 0 & -\frac{A'[t]^2-4 A[t] \left(k+A”[t]\right)}{4 \left(-1+k r^2\right) A[t]} & 0 & 0 \\
 0 & 0 & \frac{r^2 \left(A'[t]^2-4 A[t] \left(k+A”[t]\right)\right)}{4 A[t]} & 0 \\
 0 & 0 & 0 & \frac{r^2 \text{Sin}[\theta ]^2 \left(A'[t]^2-4 A[t] \left(k+A”[t]\right)\right)}{4 A[t]}
\end{array}
\right)
$$


通过Einstein Equation，即 $G_{ab}=8\pi G T_{ab}$ 得到两个方程，就是修正的Friedmann方程。

$$
\begin{align}
\frac{3 \left(4 k A[t]+A'[t]^2\right)}{4 A[t]^2}&=-8 G \pi  \rho [t] \\
\frac{A'[t]^2-4 A[t] \left(k+A”[t]\right)}{4 A[t]}&=8 G \pi  A[t] p[t]
\end{align}
$$

重新整理得到，

$$
\begin{align}
6A”[t]-3\frac{A'[t]^2}{A[t]}-16\pi G A[t](\rho[t]+3p[t])&=0 \\
\frac{3A'[t]}{2A[t]}[\rho[t]+p[t]]+\rho ‘[t]&=0
\end{align}
$$


到现在位置，我们就可以发现这里A[t]具有scale factor（或者说其平方）的作用相同。当这个量可以从0变到无穷大，却不可能变符号。因为从上面的方程组的第一个式子可见（需稍许分析讨论），变化符号，意味着能量密度为负。显然不能如此。

我们可以进一步计算，假定物态方程 $w=p/\rho$ 为不含时的量，这样可以得到下面的结果。

A[t]>0时，

$$
\rho A^{3(1+w)/2}=\text{Const}
$$

A[t]<0时，

$$
\rho (-A)^{3(1+w)/2}=\text{Const}
$$


从这里也可以看出 A[t] 即 $a^2[t]$.（事实上一开始定义如此。）

剩下的步骤与梁灿斌老师的书上的步骤相同，解出A[t]。然后稍加讨论，可以得到，如果一开始的时空几何类型是确定的，那么就不能越过平直变为第三种。但是如果一开始平直，那么可以从平直变为另外两种。

附录：

Mathematica文件：[OpenOrCloseMathematicaFile]({{ site.url }}/images/posts/from-open-univserse-to-closed-universe/OpenOrClose2.zip).
其中Great.m是package文件，如果想要重新计算，请先运行此package。EinsteinTensor.nb为Einstein张量的计算。Calculation.nb为其余式子的计算过程。


下面思考问题：

真的不能够从？如果在Einstein方程中引入新的量呢？比如我们引入神奇的Λ或者暗能量？


## 第三节

上面浪费了很多时间来求解Einstein方程。最后我们又提出了一个问题：如果存在 $\Lambda$ 或者 Dark energy 呢？

首先，重新看一下准备知识。什么是开宇宙？什么是闭宇宙？我们很可能会觉得，代表宇宙膨胀的大小的scale factora(t)如果一直变大，那么就应该表示开宇宙，如果scale factor后来变小，直到变回零。那么就是闭宇宙。
但是这里有个问题。表示时空的几何类型（球面、平直还是双曲）的k（只能去1,0.-1）和scale factora(t)到底会不会回到零有什么关系？两者之间有确定的对应关系么？

我们看一下Friedmann方程等。

$$
\begin{align}
3(\dot{a}^2+k)/a^2 &= 8\pi \rho \\
2\ddot{a}/a+(\dot{a}^2+k)/a^2 &= -8 \pi \rho
\end{align}
$$

稍加化简，得到

$$
\ddot a=-4/3 \pi a (\rho+3p).
$$


从这个方程可见，scale factor的演化是由ρ和p来决定的。这跟表示时空的几何类型的k没关系。

也就是说，如果我们依照第一节中的定义方法，那么闭宇宙并不表示宇宙将来会collapse。

举一个简单的例子。
假定宇宙开始是个闭宇宙，即仅仅说明k=+1。宇宙开始时是Radiation domination，因此我们可以计算出scale factor的演化。

$$
a^2(t)=2 B t-t^2
$$

其中 B为不含时常数。（我沿用了梁灿斌书中的记号。）
这样a(t)是一条开口向下的抛物线。如果宇宙中始终只有radiation的而一开始又是k=+1话，那么宇宙将会collapse。
但是，假定在某一个时刻，宇宙从radiation domination过渡到matter domination。这时候，scale factor的方程变为

$$
a=A(1-\cos{\hat t})/2+C_1, \qquad  t=A(\hat t-\sin{\hat t})/2
$$

这里的待定的系数是有边界条件（比如radiation matter equality时刻的值）来确定的。这里面的参量看起来挺奇怪，但是不管如何，t和$\hat t$是正相关的，在x很大的时候，基本上就可以看做是一条直线。现在我们可以暂时认为$\hat t(t)$可以用来表征时间。那么scale factor随着时间的向前推移，在合适的范围内，scale factor是个减函数。
到现在位置，如果只存在radiation和matter，而且一开始宇宙的时空几何是k=+1，那么宇宙将只会collapse。

下面我们就引入我们的另一员大将，Dark Energy。在collapse之前，如果有足够多的dark energy，然后宇宙转化为物态方程为w的dark energy主导，那么可以求解到下面的结果。

$$
\dot{a}^2=C_2 a^{2-3(1+w)}+C_3.
$$


这样一来，scale factor的导数a˙最终将会增加，从小于零逐渐变为零，然后如果此时宇宙还没有collapse，那么scale factor的导数a˙将会变为正值，也就意味着宇宙将不再collapse，而是无穷无尽的变大，知道big rip（或者最近有篇文章讲的little rip模型，这是题外话）。

上面的论述证明了宇宙是可能从一开始的看似是要collapse演化到后来永远膨胀的。

我们一开始之所以没有去仔细讨论k和a的关系，是因为如果仅仅存在radiation和matter，那么k=+1就正好意味着宇宙将会collapse，不管宇宙中是radiation还是matter还是二者混合。k=−1也正好意味着宇宙一定是一直膨胀下去的。反之，只要取合适的状态方程和能量密度，开宇宙也可以演化为闭宇宙。

最后，其实按照一般的这种想法（a的行为才反映出宇宙的开和闭），我们在第一篇post中所用的开宇宙闭宇宙的定义不够好。所以最好还是按照scale factor的行为来定义，而k仅仅告诉了我们宇宙的几何类型（球面的，平直的，还是双曲的）。


## 小结

总结：

**什么是开宇宙、闭宇宙？**

这个问题我想重新阐述。讨论一个宇宙是开宇宙还是闭宇宙，一个比较好的参量是看scale factor, $a(t)$。如果在t→0时，$\dot a(t) \geq 0$，也就是说如果宇宙最终一直膨胀下去，那么我们可以把这一的宇宙说成是开宇宙，因为这个宇宙是一个开放的；如果 $t\to 0$ 时，scale factor $a(t) \leq 0$，也就是说宇宙最终将塌缩（collapse，不知道翻译成塌缩合不合适，反正差不多这个意思），那么可以叫这样的宇宙为闭宇宙。

在第一节中，我使用了一种不同的说法。那种说法只有在宇宙只含有matter或者radiation（或二者混合）的时候才成立，也就是说，那种情况下，k的取值正好对应着宇宙的开闭。但是如果宇宙中存在dark energy（或者 $\Lambda$,whatever），那么这个结论就不再正确。(这一段讨论可以简单的从 Friedmann 方程看出来。)

结论是，在理想流体模型中，如果存在dark energy，那么宇宙可以从闭宇宙演化到开宇宙，同样的，也可以从开宇宙变为闭宇宙。

好吧我承认这样说起来有点乱，这里可以理解成 $\dot a(t)\geq 0$ 为开宇宙，$\dot a(t)\leq 0$ 为闭宇宙。这样理解的话开和闭就成了一种某时刻的状态了。这种说法最好只是限于此处讨论。导致这样的结果全部是因为我提出了错误的问题。可见一个正确的好的问题对于一篇文章是多么重要。

补充：

1. 在第一篇post（我们的宇宙可能由闭宇宙演化为开宇宙么？[第一节]）中，采用了一种看似不太正确的算法。下面我用少量的公式论证这种做法其实是正确的。
因为如果我们做一个简单的变量代换 $\hat r=\sqrt{\lvert k\rvert}$，那么

$$
\left(
\begin{array}{cccc}
-1 & 0 & 0 & 0 \\
0 & \frac{a[t]^2}{1-r^2 k[t]} & 0 & 0 \\
0 & 0 & r^2 a[t]^2 & 0 \\
0 & 0 & 0 & r^2 a[t]^2 \sin{\theta}^2
\end{array}
\right)
$$


就变为

$$
\left(
\begin{array}{cccc}
-1 & 0 & 0 & 0 \\
0 & \left|k[t]\right|\frac{a[t]^2}{1-{\hat r}^2 } & 0 & 0 \\
0 & 0 & \left|k[t]\right| {\hat r}^2 a[t]^2 & 0 \\
0 & 0 & 0 & \left|k[t]\right| {\hat r}^2 a[t]^2 \sin{\theta}^2
\end{array}
\right)
$$


也就是说，正如梁灿斌在其书中所说一样，如果k不取0,1-1，那么我们可以把它scale到这种情况。同样，如果我们不选择scale到这三种情况那么前面的第一篇中的讨论就是非常合适的。

2. 第一篇中所得到的Einstein张量和能动张量，很多项都是r的函数，而又不能跟能动张量里面的那些r的项对应起来。这样要么就要得到与r相关的scale factor的演化方程，要么就需要构造奇怪的能动张量。

3. 可以考虑一下modified gravity下的情况，比如比较简单的情况:f(R)模型。





## Acknowledgement:

I am grateful to XU Xiaodong and LIU Yunqi for they have pointed errors in my original post and for their helpful discussions.
