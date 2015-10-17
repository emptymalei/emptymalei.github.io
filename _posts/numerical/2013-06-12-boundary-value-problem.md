---
layout: article
title: "Boundary Value Problem"
date: 2013-06-12 # not necessarily the date created but to ensure the sorting of posts
modified: 2013-06-12 # 2015-02-03 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: false
comments: true
categories: numericalcn
summary: 边值问题
---


这部分主要讲 Shooting Method

Shooting method 顾名思义，类似于打鸟的时候，随便开一枪，然后根据效果来校准后面的射击的方法。


## 3.1 Boundary Value Problems

$\frac{\mathrm d^2 y}{\mathrm d t^2} = f(t,y,\frac{\mathrm d y}{\mathrm dt})$

需要两个条件，例如我们给：


$\alpha_1 y(a) + \beta_1 \frac{\mathrm dy(a)}{\mathrm dt}=\gamma_1$
$\alpha_2 y(a) + \beta_2 \frac{\mathrm dy(a)}{\mathrm dt}=\gamma_2$


例如：

$y(a)=\alpha$
$y(b)=\beta$

真实的路径可能是这样的：





<figure markdown="1">
<figcaption>
Path
</figcaption>
![]({{site.url}}/images/posts/numerical/boundaryValueProblemBoundary.png)
</figure>



## 3.2 Shooting Method & Bisection


在我们把问题解决之前，并不能知道两个固定的起点和终点之间的情况。

Shooting Method 是说，我们可以假设一个初始的斜率

$$\frac{\mathrm d y(a)}{\mathrm dt} = A$$

先猜一个 A=A1，然后加上已知的 y(a)=a 这个条件，去尝试，算到 b 点的时候得到一个结果 y(b)=b1，假定 $b1>\beta$；
然后再换一个 A=A2 值做一遍，得到 y(b)=b2<\beta。这样我们要求的 $y(b)=\beta$ 在 b1 和 b2 之间。
那么我们知道正确的 A 应该在 A1 和 A2 之间。

所以我们取 A=(A1+A2)/2=A3，再重复上面的过程，得到的结果y(b)=b3：
如果 b3>b 则取 A=(A1+A3)/2，再重复上述过程；
如果 b3<b 则取 A=(A2+A3)/2，重复上述过程。

用图像表示就是

<figure markdown="1">
<figcaption>
Path
</figcaption>
![]({{site.url}}/images/posts/numerical/boundaryValueProblemRandom.png)
</figure>

类似于我们要用枪命中圆圈的点，现在我们随便开了一枪，发现太高了，然后我们把枪放低些再射击，发现太低了。那么我们下一次就调整为第一次和第二次射击的角度的中间值，再试。第三次可能还没有命中，再根据第三次的具体情况跟第一次或第二次的射击角度取平均值。

这是为什么叫做 shooting method.



## 3.3 Reduction of Infinite Domain

有一类常见的本征值问题：
$\frac{\mathrm d^2\phi_n}{\mathrm dx^2}+[n(x)-\beta_n]\phi_n =0$

这类问题有个很大的问题。我们考虑当 $x\rightarrow \pm \infty $ 时，$\phi_n \rightarrow 0$ 。要知道我们的计算机可不喜欢无穷，就这个问题而言，我们需要进行无穷步，才能获得 $x\rightarrow \pm \infty $  的情况，无穷在数值计算中式不存在的的东西。

那么实际中我们应该如何操作呢？
实际上我们只能考虑
$x\in [-L,L]$
的情况，当然要求 L  很大。（很大什么意思还需要讨论。）
这时候，
$\phi_n\rightarrow 0$


## 3.4 Formation of Practical Example


对于上一节，可以举一个例子：
$n(x)=\begin{cases} 1-|x|^2 & \mbox{x<1} \\ 0 & \mbox{x\geq1} \end{cases}$

这样当 $x\rightarrow 0$ 时，方程就变成了
$\frac{\mathrm d^2\phi_n}{\mathrm dx^2}-\beta_n\phi_n =0$


这是简单的常系数的方程，可以猜出通解：
$\phi_n = C_1 e^{\sqrt{\beta_n} x}+C_2 e^{-\sqrt{\beta_n} x}$

在 x->L>0 时第一项是很坏的一项，因为这一项会随着 x 的增大很迅速的变到无穷。所以我们就第一项扔掉。这样我们就有了一阶方程：
$\frac{\mathrm d\phi_n}{\mathrm dx}+\sqrt{\beta_n}\phi_n =0$


这是斜率的情况。（<span style='color:red;">然后这样有什么好处呢？</a>）

同样的方法，可以得到  x->-L<0 时候的情况：
$\frac{\mathrm d\phi_n}{\mathrm dx}-\sqrt{\beta_n}\phi_n =0$
