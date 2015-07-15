---
layout: article
title: "量子爱情，统计数据以及认知模型"
date: 2014-04-14
modified: 2014-07-16 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: true
comments: true
categories: science
summary: 这篇文章中，我会重新描述量子爱情的理论并且给出一种通过统计数据建立量子爱情模型的方法。
---


系列文章目录： 

* 第一篇：[爱情的严格量子力学描述](/science/quantum-love/)
* 第二篇：[爱情的量子理论2](/science/quantum-love-2/)
* 第三篇：[心理叠加态：从量子爱情到人的所有心理](/science/from-quantum-love-to-quantum-psychology/)
* 第四篇：[基于统计数据的量子爱情](/science/quantum-psychology-cognition-and-statistics/)


-----

> 其实本文中所讲的那些代表个人的矩阵或者算符，只是 density matrix 而已。又是一篇糊涂的文章。原则上来说这个文章并没有任何进步。另外，density matrix 才是真正的量子态。
> 
> --2014-04-29

-----


之前写过几篇量子爱情的文章（[《爱情的严格量子力学描述》](/science/quantum-love/), [《爱情的量子理论2》](/science/quantum-love-2/)，[《心理叠加态：从量子爱情到人的所有心理》](/science/from-quantum-love-to-quantum-psychology/)），当时并没有一个很清楚的思路，所以实际上写的并不是很清楚。

**这篇文章中，我会重新描述量子爱情的理论并且给出一种通过统计数据建立量子爱情模型的方法。**

## 所谓量子

在开始说这个理论之前，我先介绍一下背景。实际上正如我在[《心理叠加态：从量子爱情到人的所有心理》](/science/from-quantum-love-to-quantum-psychology/)这篇文章里面写的一样，这个方法不能叫做“量子”，这种方法只是借用了量子量子力学里面的数学结构，但是到目前为止我并没有感觉到量子化会有什么深刻的意义。而之所以能够借用这种数学结构，是有着一定的心理学实验基础的。

Hampton 在 1988 年发表的一篇论文显示，经典的统计理论可能在处理人的认知问题的时候不再成立。Hampton 实验大致是一个让人们辨认某件 item 是属于那个 concept 的实验，实验结果用 0 到 1 来显示被试认为某个 item 是 concept 的指数，如果是 1 就是百分百确定这个 item 属于这个 concept。[^1]

实验的结果却非常奇怪。例如实验中，人们认为 Cuckoo （杜鹃）是一只鸟，所以指数是 1\. 杜鹃并不完全是宠物，最后的结果是 0.575。之后大家被要求对杜鹃是**鸟和宠物**（Bird $\land$ Pet）的评判，却得到了一个大于是宠物的指数的结果 0.842\. 如果被试认为杜鹃是 Bird $\land$ Pet，那么被试至少应该以同样的概率认为杜鹃是个 Pet，现在却获得了一个比 Pet 更大的结果。

当然这个实验可能有很多解释。后来 Aerts 等人发表了一些文章，建立了一套基于量子力学、量子场论、路径积分的数学方法[^2][^3][^4][^5]，并且分析了 Hampton 的数据。[^6]

Aerts 等人也尝试给出更加深刻的量子机制，但是就目前来看，还不是特别有说服力。所以，在这个系列中，这里量子爱情的名称，只是说这是量子的方法，并不代表是量子的机制。

## 态与算符

为了能够与实验数据相比较，这里我们重新思考态与算符应该各表示什么。

算符是可以算平均值的，而态可以选作基矢。所以实际上，算符对应于认知模型中的 item，态对应于认知模型中的 concept。这是这篇文章最关键的地方。

举个例子来说明这个问题。在之前的文章中我提到了男孩女孩并不是一个人的本征态，一个人可能并不会是完全男性化的心理（当然前提是假设我们可以很好的定义男性心理，这里只是个玩笑[^7]），所有我可能会有 $\mu(G)$ 的概率是女孩，$\mu(B)$ 的概率是男孩，$\mu(G\lor B)$ 的概率是女孩或者男孩。

那么现在我们定义男孩态 $\ket{B}$ 和女孩态 $\ket{G}$。另外我们还需要一个算符来表示我，定义成 $\hat I_D$ (身份 ID 的意思)。当然根据实验，我们有

\begin{align} \bra{B}\hat I_D \ket{B} &= \mu(B) \\ \bra{G}\hat I_D \ket{G} &= \mu(G) \\ \frac{1}{2}(\bra{B} + \bra{G})\hat I_D (\ket{B} + \ket{G}) &= \mu(B\lor G) \end{align}

为了方便计算，我们使用 Boy-Girl 基矢，这样态和算符就可以用矩阵表示，然后就可以计算矩阵元。

\begin{align} \hat I_D & \rightarrow \begin{pmatrix} a & c \\ c^* & b \end{pmatrix} \\ \ket{G} & \rightarrow \begin{pmatrix} 1 \\ 0 \end{pmatrix} \\ \ket{B} & \rightarrow \begin{pmatrix} 0 \\ 1 \end{pmatrix} \end{align}

（这里我们用了算符是 Hermition 的这个条件，目的是保证本征值的实数性，但是这条待深入考虑。）

那么很容易就可以计算出

\begin{align} \mu(G)& := \bra{G}\hat I_D \ket{G} = \cdots (\text{insert identity}) = a \\ \mu(B)& :=\bra{B}\hat I_D \ket{B} = \cdots (\text{insert identity}) = b \\ \mu(G\lor B) &:= \frac{1}{2}(\bra{G} + \bra{B})\hat I_D (\ket{G} + \ket{B}) = \cdots (\text{insert identity}) \\ & \phantom{} = a+b+2\mathrm {Re}(c) \end{align}

需要注意的是，对于不含时的情况，我们计算平均值时，$c$ 中的虚数部分并不会影响我们的平均值结果，因为这篇文章中的计算直接假定 $c$ 为实数。

另外，我们知道 Pauli 矩阵加上单位矩阵是一组完备正交的基矢，可以用来描述任意的两能级体系，所以这个问题可以完全写成 Pauli 矩阵的样子，但是为了更加清楚的说明情况，这里就直接写出矩阵元素了。

## 统计数据的获取和使用

那么，我们上面用到的那些所谓的实验数据如何获取呢？具体可以使用这样的程序： 

1. 让所有的跟我熟悉的人对我评价，每个人都给出认为我是男孩、女孩、男孩或女孩的指数。[^8] 
2. 分别对每个指数求平局，赋值给上面的 $\mu(G)$，$\mu(B)$ 和 $\mu(G\lor B)$。 
3. 通过上面的理论推导出的公式计算我在 Boy-Girl 基矢下面的矩阵元素。

这样我们就可以把“我”在这组基矢下面描述出来了，然后就可以用来做其他的计算，然后把计算结果跟相应的实验的结果比较。

## 描述两个人的爱情

有了上面的方法，我们就可以用来描述爱情了。

为了简化情况，我们只考虑仅由一个男孩和一个女孩组成的体系，其他人对他们的观测不影响体系。

两个人的单身状态（用 S 表示）和恋爱状态（用 L 表示），用角标的 B 和 G 分别表示男孩和女孩。显然现在比较好用的基矢是两组基矢的张量积，即 $\ket{S_B}\otimes \ket{S_G}$, $\ket{S_B}\otimes \ket{L_G}$, $\ket{L_B}\otimes \ket{S_G}$, $\ket{L_B}\otimes \ket{L_G}$。

那么如何建立这个体系的算符呢？一个比较自然的想法是两个人各自的算符的张量积。因此总的步骤是先通过上一节中的实验方法来给出两个人的算符，$\hat B$ 和 $\hat G$，那么代表整个体系的算符应该是 $\hat Z = \hat B \otimes \hat G$。

然后我们可以计算这个算符 $\hat Z$ 的本征态，这个本征态就对应两个人实际的相爱情况。

因为只有两个人，所以态矢矩阵对应的意义如下：

1.  $\ket{L_B}\otimes \ket{L_G}$ ： 两人相爱
2.  $\ket{S_B}\otimes \ket{S_G}$ ： 两人不爱对方
3.  $\ket{S_B}\otimes \ket{L_G}$ ： 女孩爱男孩，男孩不爱女孩
4.  $\ket{L_B}\otimes \ket{S_G}$ ： 男孩哎女孩，但是女孩不爱男孩

找到本征态跟上面的基矢对应的位置，然后把系数模方，就得到相应状态的概率。 然后就根据具体情况做出相应的决策。[^9]

由于我们这里是直接描述心理的，所以对于薛定谔的表白，薛定谔的滚，其实我们给出的心理状态，而不是口中说的什么决策。例如，结果会给出薛定谔的滚对应 70% 的概率是要滚，30% 的概率是不滚。一般不会直接给出 100% 的滚或者 100% 的不滚。这涉及到认知模型的问题。人做决策并不是完全确定的，而是概率的。

## 几点讨论

上面就是完整的建模过程。但是这个方法有几个问题需要注意。

1.  我们暂时不能处理含时问题。[^10]
2.  对于态矢的意义，我们还需要更加深入的理解。
3.  本征值对应的意义尚不明确。

另外，需要提到的是，这套方法自然可以用在认知模型上。[^6]

## 相关资料

**一个量子心理学的 GitHub repo：[intelligence](https://github.com/emptymalei/intelligence/tree/master/quantumPsychology)**

## 参考文献及尾注




1.  Hampton, J. A. "Overextension of conjunctive concepts: Evidence for a unitary model for concept typicality and class inclusion". Journal of Experimental Psychology: Learning, Memory, and Cognition, 14, 12-32. 

2.  Diederik Aerts. ["Quantum Interference and Superposition in Cognition: Development of a Theory for the Disjunction of Concepts"](http://arxiv.org/abs/0705.0975). In D. Aerts, J. Broekaert, B. D'Hooghe and N. Note (Eds.), Worldviews, Science and Us: Bridging Knowledge and Its Implications for Our Perspectives of the World. Singapore: World Scientific (2011). 

3.  Diederik Aerts. ["General Quantum Modeling of Combining Concepts: A Quantum Field Model in Fock Space"](http://arxiv.org/abs/0705.1740). 

4.  Aerts, D. (2007). ["Quantum interference and superposition in cognition: Development of a theory for the disjunction of concepts."](http://arxiv.org/abs/0705.0975) 

5.  Aerts, D. (2007). ["General quantum modeling of combining concepts: A quantum field model in Fock space"](http://arxiv.org/abs/0705.1740). 

6.  Diederik Aerts. ["Quantum Structure in Cognition"](http://arxiv.org/abs/0805.3850). Journal of Mathematical Psychology, 53, 314-348, 2009. 

7.  其实也不全是玩笑。男孩女孩这个事情，只是生来如此，但是如果技术进步，可能实现想换异性的身体就换异性的身体呢？我并不觉得这些所谓的生来的东西会是一个障碍，现在所谓的性别认同相关的疾病将来也不会是疾病。

8.  按照 Hampton 的使用，男孩或女孩的指数是不能单纯的由是男孩的指数和是女孩的指数推导出来的。

9.  当然这里还是沿用量子力学的假设，即测量一次会使得体系坍缩到测量量的一个本征态上。 

10.  含时的问题困扰我一段时间了。现在有一些想法（例如借助 propogator ）但是都有缺陷。 

