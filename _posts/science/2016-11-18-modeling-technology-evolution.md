---
layout: article
title: "Modeling Technology Evolution"
date: 2016-11-18
modified: 2016-11-18
author: OctoMiao
comments: true
categories: science
tag:
- en
summary: Here I propose a model of the evolution of technology
---


* ToC
{:toc}


## The Exponential Development of Technology

Ray Kurzweil has [an idea](http://www.kurzweilai.net/the-law-of-accelerating-returns) that technology itself is driving technology itself forward. That being said, more technology leads to even more of that. And he named this idea **The Law of Accelerating Returns** [^1].

In some sense, this idea is not that surprising. Here is the reason. To build a very very simple toy model of the amount of technology invented at time $t$, we assume that the rate of new technology is proportional to the amount of technology we have now, i.e.,

$$
\begin{equation}
\frac{\mathrm d N(t)}{\mathrm dt} = C\cdot N(t),
\end{equation}
$$

where $N(t)$ is the amount of technology human has at time $t$. Any trained student could simply write down the solution in one second, which is

$$
N(t) = \exp\left( C t \right) + \text{Constant}.
$$

We have added this constant for the convenience of translation of data. Yes, the amount of technology is popping out **exponentially**.

How do we verify this? The first idea came to me is through the number of patents. The best environment for technology, I assume , is the United States. The data can be found at [WIPO](http://ipstats.wipo.int/ipstatv2/editIpsSearchForm.htm?tab=patent)


<figure markdown="1">
![]({{site.url}}/assets/posts/modeling-technology-evolution/patentUSAPlt.png)
<figcaption markdown="1">
Granted patent for USA during 1980-2013. The fitting formula is $e^{0.36 t}+1.13\times 10^5$. Data source: [WIPO IP Statistics Data Center](http://ipstats.wipo.int/ipstatv2/editIpsSearchForm.htm?tab=patent)
</figcaption>
</figure>

Just for comparison, we also fit the data for China.

<figure markdown="1">
![]({{site.url}}/assets/posts/modeling-technology-evolution/patentChinaPlt.png)
<figcaption markdown="1">
Granted patent for China during 1985-2013. The fitting formula is $e^{0.43 t}+2.53\times 10^4$. Data source: [WIPO IP Statistics Data Center](http://ipstats.wipo.int/ipstatv2/editIpsSearchForm.htm?tab=patent)
</figcaption>
</figure>

Unfortunately I did not bother to find patent data earlier than 1980.


## Modeling Destruction and Everything Else

Well, you could say the model doesn't fit the data well very. This is pretty much expected. What we have been talking about is an ideal society for technology. None of these two countries provided the best society for technology growth. How is the destruction of technology modeled?

Master equation for sure! In statistical mechanics, master equation provides a tool to describe the state transfer from one to another. In principle we could also apply a similar method to the growth of technology. However, I have found it very tedious and not providing simple pictures for the understanding of the technology growth.

What else could one do? I got this intuition that the appearance of a new technology might depend on any technology we have created before. That is, the appearance probability of a new technology depends on some technologies of the past. This reminds me of the population activity in neuroscience [^2].

Suppose we denote the amount of technology that appeared at time $t$ as $N(t)$, again. In general, the equation we should have is

$$
\begin{equation}
N(t) = \int_{-\infty}^t K(t\vert t') N(t') dt',
\end{equation}
$$

where $K(t\vert t')$ is the kernel of the convolution.

This new model really covers what we have before as a simple exponential growth model. The reason is the following.

For $K(t\vert t')\sim C\delta(t-t')$, which means the new technology depends only on the most current appearance rate of technology, the model falls back to the exponential growth case.

We could also imagine that for a very narrow kernel, the amount of technology grows **almost** exponential. On the other hand, a broad kernel leads to a very wide depend on the past growth. This actually includes the effects of the economy history, as well as other possible factors. The reason is that we expect the number of technology depends on economy and we have already set the amount of technology at time $t$ to depend on the past $t'$. Destruction effect is also packed and loaded.

To find out what kind of kernel fits the data well, we probably have to guess. Meanwhile, I am starving and need some food.


[^1]: [The Law of Accelerating Returns](http://www.kurzweilai.net/the-law-of-accelerating-returns) by Ray Kurzweil.
[^2]: [Population Equations](http://icwww.epfl.ch/~gerstner/SPNM/node44.html) of the book *Spiking Neuron Models. Single Neurons, Populations, Plasticity* by Gerstner and Kistler.
