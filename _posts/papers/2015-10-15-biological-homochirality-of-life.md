---
layout: article
title: "Biological Homochirality of Earth Life"
date: 2015-10-15
modified: 2015-10-15 #2014-08-27T11:57:41-04:00
author: OctoMiao
toc: ture
comments: true
categories: papers
tag:
- en
- papers
- biology
summary: Explain why life prefer homochirality
---

Notations

* S: sinister
* R: rectus





## [Colloquium: Homochirality: Symmetry breaking in systems driven far from equilibrium](http://journals.aps.org/rmp/abstract/10.1103/RevModPhys.85.603)




Frank model is discussed in this paper.

The idea is to write down the master equation for the concentrations of left and right for the reactions at rate $k_1$

$$
\begin{align}
A + S&\to 2S,\\
A + R&\to 2R.
\end{align}
$$

and most importantly the right and left will inhibite each other through

$$
R+S \to 0,
$$

at a rate $\mu$.

Thus we can write down the master equations for the reactions

$$
\begin{align}
\frac{dr}{dt} & = k_1 r a - \mu r s,\\
\frac{ds}{dt} & = k_1 s a - \mu s r.
\end{align}
$$

This system is unstable at the equilibrium point, which means a small deviation from the equilibrium would result in a complete run away behavior to the homochirality result.

Define a chiral order parameter $\omega$

$$
\omega = \frac{r-s}{r+s},
$$

which will become $1$ or $-1$ under small perturbations to equilibrium.


## [Noise-Induced Mechanism for Biological Homochirality of Early Life Self-Replicators](http://journals.aps.org/prl/abstract/10.1103/PhysRevLett.115.158101)

> The figures in this paper is inspiring. Think about neutrinos. Neutrino and antineutrino decouple through interaction with each other. But if we all interact with the same particle, could they form a situation like the chirality in this biological context? Maybe they can also go to two extremes? This depends on the phase space structure. Please review Fig 1 in this paper since a similar figure can be applied to neutrino calculations.


In this paper they do not assume inhibition. Instead they use a completely decoupled reaction scheme

$$
\begin{align}
A + S {\stackrel{k_a}\to} 2S , & A \underset{k_n}{\stackrel{k_d}{\rightleftharpoons}} S \\
A + R {\stackrel{k_a}\to} 2R , & A \underset{k_n}{\stackrel{k_d}{\rightleftharpoons}} R.
\end{align}
$$
