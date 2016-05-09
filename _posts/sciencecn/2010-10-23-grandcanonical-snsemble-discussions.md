---
layout: article
title: "关于巨正则系综巨配分函数收敛性等的一些讨论"
date: 2010-10-23
modified: 2010-10-23 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: sciencecn
summary:
---

<embed src="{{ site.url }}/images/posts/grandcanonical-snsemble-discussions/grandcanonical.pdf" width="100%" height="800px">


## 总结

1. 问题

$$\Xi =\sum \left(e^{-\alpha }e^{-\beta \epsilon }\right)^N$$

收敛条件 $\lvert\text{z$\phi $}\rvert<1$。重点不是要求 $\Xi$ 收敛，关键是要求热力学量收敛。（后面我们会证明对于这种经典无相互作用情况，$\Xi$ 不收敛，一定导致热力学量N，U不收敛。）

2.问题延伸

先不解决这个问题。很自然的想知道，一般情况下，

$$
\begin{align}
\rho &=\frac{1}{\Xi }e^{-\text{$\alpha $N}-\text{$\beta $E}_S} \\
\Xi &=\sum \sum e^{-\text{$\alpha $N}}e^{-\text{$\beta $E}_S}
\end{align}
$$

若 $\alpha \ll 0$ 的某些情况，$\Xi$ 发散，没关系。这其实是归一化问题，类似于平面波无法真正的归一化一样。
我们关心的是热力学量。这个没有办法一般证明。但是可以一般的看一下。$\alpha < 0$

$$
\rho  =1/\Xi  e\text{xp}(\lvert \alpha \rvert N-\text{$\beta $E$\_$}\{S\}])
$$

N越多，体系出现的概率越大。显然，$\bar N \to \infty$ , $\bar U$ 很有可能趋于无穷 。


对于无相互作用可区分的情况，可以准确证明：

$$
\Xi =\sum \left(e^{-\alpha }e^{-\beta \epsilon }\right)^N=\sum (\text{z$\phi $})^N\overset{-}{N}=\frac{-\partial }{\partial \alpha }\text{Ln}[\Xi ]\overset{-}{U}=\frac{-\partial }{\partial \beta }\text{Ln}[\Xi ]
$$


很容易证明（柯西判据），如果 $\lvert \text{z$\phi $}\rver >1$ ，i.e., $\mu > \epsilon$ ,那么 $\bar N$, $\bar U$都不收敛。


3.回到问题（经典可区分固体）

但是对于第一个问题，

$$
\lvert \text{z$\phi $} \rvert <1 \text{is guaranteed}.\mu =\frac{G}{N}=\frac{(U-\text{TS})}{N}< \frac{U}{N}=\epsilon => \mu <\epsilon , i.e., \lvert \text{z$\phi $} \rvert <1 .
$$


4.Physics？

前面证明某些情况下热力学量可能不收敛。那么不收敛是什么意思？
应该是体系没有平衡态！eg,如果选定合适的条件，比如源粒子与sys的结合能力很强（引力体系，熵力体系？），粒子可能源源不断的进入体系。

5.问题

a. $\mu$ 是什么意思？化学只关心两种之间的差值，他们喜欢选定某些参考值来确定 $\mu$，比如最稳定同位素为标准。但是我们物理上，一般是可以计算绝对值。

比如气体等，

$$
\mu  = \left(\frac{\partial G}{\partial N}\right)_{T,p}=\left(\frac{\partial U-T\partial S+p\partial V}{\partial N}\right)_{T,p}=\left(\frac{\tilde{\partial Q}-T\partial S}{\partial N}\right)_{T,p}
$$

这个式子小于零？最好小于零。但是How？

b. 关于是否真的不收敛代表不能有平衡态，需要利用 $\delta S (\delta N, \delta F, \text{etc})$ 等来证明。
