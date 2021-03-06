---
layout: article
title: "Gradient, Divergence and Curl"
date: 2015-02-17
modified: 2015-02-17 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: science
tag:
- enlist
summary: Geometric impression of gradient, divergence and curl.
---




Gradient, divergence and curl are frequently used in physics. The geometries, however, are not always well explained, for which reason I expect these meanings would become clear as long as I finish through this post.



## Curl

Curl means curl, which is explicitly shown by this word.


The curl of a singular point doesn't always show the singularity. One of the examples is the magnetic field generated by dipoles, say, magnetic dipoles, which should be

$$
\vec B_D = \nabla \times \vec A = \frac{3(\vec \mu \cdot vec x) \vec x - \mu r^2}{r^5} +\frac{8\pi \mu}{3} \delta^3(\vec x) ,
$$

where the vector potential is

$$
\vec A = \frac{\vec \mu \times \vec x}{r^3} .
$$

The reason for the extra Dirac delta is that vector is singular at point 0 meanwhile the curl of such a function does't really show the singularities of the field. We need to calculate the integral without calculating the curl directly, i.e.,

$$
\int d^3x' \vec B_D = \int d^3x'\nabla \times \vec A(\vec x') = \oint dS' \hat n' \times \vec A (\vec x'),
$$

in which we used the trick similar to divergence theorem.
