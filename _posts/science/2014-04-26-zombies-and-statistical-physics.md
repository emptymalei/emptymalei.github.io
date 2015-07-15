---
layout: article
title: "僵尸与统计物理"
date: 2014-04-26
modified: 2014-04-26 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: true
comments: true
categories: science
summary: 这是一个关于僵尸的悲惨的故事。有一位可怜的僵尸小朋友，他的名字叫做小喵。他不幸走进了一个神奇的僵尸魔环，任他怎么努力，都走不出去了。他很沮丧，但是现在不是失去理智的时候。他需要快速的计算一下自己的存活率。
published:false
---



这是一个关于僵尸的悲惨的故事。有一位可怜的僵尸小朋友，他的名字叫做小喵。他不幸走进了一个神奇的僵尸魔环，任他怎么努力，都走不出去了。他很沮丧，但是现在不是失去理智的时候。他需要快速的计算一下自己的存活率。

[](http://fc02.deviantart.net/fs47/f/2009/210/4/2/Zommy___the_cute_little_zombie_by_MissBloodyEyes.png)



## 僵尸魔环

小喵很自己的研究了这个魔环。这个其实是一圈可以站上去的转盘，魔环充分利用了小喵每一步都是固定距离的特点，而且当小喵站到某个转盘上的时候，转盘会立刻随机的把他转向相邻的两个转盘之一的方向，当然这样他只能随机的走到相邻的两个转盘之一上面，这样一直下去。

![](https://raw.githubusercontent.com/emptymalei/pandemicControl/master/zombies/resources/zombieCapture1D2.png)


这些转盘中，有些转盘是红色的，上面写着捕捉能力 $C$，也就是说，他有 C 的概率会被捕捉，并不一定归一化了呢，真头疼。

小喵现在已经明白，如果没用其他僵尸的救援，自己不会有生存的机会了。就算每个红色转盘的捕捉能力很弱，这样持续下去，自己早晚会被捕捉的。

但是，小喵明白，僵尸族的集体智慧才是种族活下去的希望，死了自己不要紧，他要给僵尸族留下遗产，解出陷入僵尸魔环之后的生存概率，为僵尸族将来的生存提供参考。




## 物理模型

为了计算自己的存活概率，小喵的脑海中出现了曾经仔细研究过的 master equation。假定自己在 $t$ 时刻处在第 $m$ 个转盘的概率是 $P_m(t)$，那么自己的存活概率自然是所有转盘上的概率之和，

$$
\begin{equation}
Q(t) = \sum_m P_m(t) .
\end{equation}
$$

现在小喵只需要计算出这个结果，就可以知道自己的存活概率随时间如何变化了。要解出这个量，需要使用 master equaton. 现在知道的是，小喵从其他的转盘到转盘 $m$ 的转移率是 $R_{mn} = F(\delta_{m,n-1} + \delta_{m,n+1})$。小喵注意到自己不能留在原来的转盘，因为僵尸就是，简直停不下来。

小喵之前学过 Chapman-Kolmogorov 方程。小喵知道自己在一个没有红色捕捉的魔环上面走，走一步需要 $\tau$ 时间。那么 $t$ 时刻小喵处在第 $\xi$ 个转盘的概率仅仅有他处在相邻的两个的概率和转移率来决定，即

$$
\begin{equation}
P_\xi(t) = \sum_\mu R_{\xi\mu} \tau P_\mu(t-\tau)
\end{equation}
$$

然后小喵想到，这里的转移率需要满足

$$
\begin{equation}
\sum_{\xi} R_{\xi\mu}\tau = 1
\end{equation}
$$

因为在没有捕捉的魔幻上面，概率不能凭空消失。所以小喵脑海中浮现了另一个方程：

$$
\begin{equation}
P_{\xi}(t) = \sum_{\mu} R_{\mu\xi}\tau P_{\xi} (t) .
\end{equation}
$$

这个方程跟之前的方程相减，两边除以 $\tau$，小喵得到了自己的 master equation，如果没有那些红色的捕捉转盘的话，

$$
\begin{equation}
\frac{d}{dt}P_m = F(P_{n+1} + P_{n-1}) - 2F P_m .
\end{equation}
$$

这显然不够，小喵需要把红色的捕捉转盘加进来。小喵用下角标 $r$ 来表示那些红色的转盘，

$$
\begin{equation}
\frac{d}{dt}P_m = F(P_{n+1} + P_{n-1}) - 2F P_m  - C \sum_r \delta_{m,r}P_m .
\end{equation}
$$

这里面的对 $r$ 求和仅仅是对那些红色转盘求和。



好，只要求出所有的 $P_m(t)$，然后求和就可以得到自己的存活概率 $Q(t)= \sum_mP_m(t)$了。



## 小喵解方程

这里只有一个红色转盘（位于 $s$），小喵很高兴，方程是

$$
\begin{equation}
\frac{d}{dt}P_m = F(P_{n+1} + P_{n-1} - 2 P_m)  - C  \delta_{m,s}P_m  .
\end{equation}
$$

小喵知道没有红色转盘并且不考虑寿命的方程变得很简单，

$$
\begin{equation}
\frac{d}{dt}P_m = F(P_{n+1} + P_{n-1} - 2 P_m).
\end{equation}
$$

Fourier transform，小喵心想。于是他快速的在大脑中两边乘以 $e^{ikm}$ 并对 $m$ 求和。

$$
\begin{equation}
\frac{d}{dt} P^k  = F(e^{ikm} P_{m+1} + e^{ikm} P_{m-1} -2 P^k).
\end{equation}
$$

太棒，展开指数，可以直接写出答案，

$$
\begin{equation}
P^k(t) = P^k(0) e^{-4F \sin^2\frac{k}{2} t}.
\end{equation}
$$

再做一次变换，小喵立刻得到了最终结果，

$$
\begin{align}
P_m(t)  & = \frac{1}{N} \sum_ {k} P^k(t) e^{-i km} \\
& = \frac{1}{N} \sum_ {k} P^k(0) e^{-4F \sin^2\frac{k}{2} t}  e^{-i km} .
\end{align}
$$

当然因为周期性的边界条件，结果中的对 $k$ 求和实际上是对 $k = \frac{2\pi}{N} n$ 求和，其中 $n=0,1,2, \cdots, N-1$.

这样只要给定了初始条件，小喵就可以计算自己的存活概率了。上述结果中的初始条件是由下面的式子给定了，

$$
\begin{equation}
P^k(0) = \sum_n P_n(0)e^{ikn}.
\end{equation}
$$

这样把初始条件放进结果中，可以知道

$$
\begin{align}
P_m(t)  & = \frac{1}{N} \sum_ {k}  \sum_n P_n(0)e^{ikn} e^{-4F \sin^2\frac{k}{2} t}  e^{-i km}  \\
&= \sum_n \Pi_{m-n}(t) P_n(0) ,
\end{align}
$$

其中的 $\Pi_{m-n}$ 是传播子（propagator），

$$
\begin{equation}
\Pi_{m-n}(t)  = \frac{1}{N} \sum_ {k}   e^{-4F \sin^2\frac{k}{2} t}  e^{-i k(m-n)} .
\end{equation}
$$


下面小喵只需要把捕捉转盘的影响加进来就可以了。可是，如果一直这样算下去，会变得很复杂，所以小喵开始使用 Laplace 变换，这样一来，无红色捕捉的解可以直接写成

$$
\begin{equation}
\tilde \eta_m = \sum_{n} \tilde \Pi_{m-n} \tilde P_n,
\end{equation}
$$

而完整的解可以直接背书出来

$$
\begin{equation}
\tilde P_m = \tilde \eta_m - C \tilde \Pi_{m-r} \tilde P_r .
\end{equation}
$$

这不是个解，小喵想，因为右边还有未知量 $\tilde P_r$. 这简单，让 $m=r$，可以解出来，

$$
\begin{equation}
\tilde P_r = \frac{\tilde \eta_r}{1+C\tilde \Pi_0}.
\end{equation}
$$

这样最终解其实就是

$$
\begin{equation}
\tilde P_m = \tilde \eta_m - \frac{\tilde \Pi_{m-r} \tilde \eta_r}{1/C + \tilde \Pi_0}.
\end{equation}
$$

最后要算的结果是

$$
\begin{equation}
Q(t) = \sum_m P_m(t).
\end{equation}
$$

同样的进行 Laplace 变换，小喵得到

$$
\begin{equation}
\tilde Q = \frac{1}{\epsilon} \left( 1 - \frac{\tilde \eta_r}{1/C + \tilde \Pi_0} \right).
\end{equation}
$$

这正好是

$$
\begin{equation}
\frac{d}{dt}Q(t) = - \int_0^t \mathscr M(t-t')\eta(t') dt',
\end{equation}
$$

其中 

$$
\begin{equation}
\mathscr M(t-t') = \frac{1}{1/C + \tilde \Pi_0} .
\end{equation}
$$

问题解决了，呃，至少理论上解决了。


## 僵尸云计算


小喵数了一下，共有 42 个转盘，其中一个是捕捉。那么这个问题就可以利用僵尸大脑云计算来解决。








## 结

这位伟大的僵尸物理学家最终没用获救，但是他的遗言，“且活且研究”，在僵尸族中代代相传。