---
layout: til
title: "Dimension Analysis and Pythagorean Theorem"
date: 2016-10-10
author: OctoMiao
comments: true
categories: physics
filter: physics
summary: Derive Pythagorean theorem using dimension analysis
---

We can derive Pythagorean theorem using simple dimension analysis.

<figure markdown="1">
![](../assets/physics/pythagorean-theorem.png)
<figcaption>
Triangles
</figcaption>
</figure>

The first step is to construct the formula for areas. By dimension, we know that area should be length squared. On the other hand, we also know that the area of a triangle is determined given the hypotenuse and an angle. Here we use the example of triangle ABC, whose area should be written as

$$
\begin{equation}
S_{\text{ABC}} = C \times \mathrm{AC}^2 \times f(\angle \mathrm{BAC}),
\end{equation}
$$

where $f(\cdot)$ is a dimensionless function and $C$ is a contant.

Then we write down the area for triangle ABC, triangle ABD, triangle BCD.

$$
\begin{align}
S_{\text{ABC}} &= C \times \mathrm{AC}^2 \times f(\angle \mathrm{BAC}), \\
S_{\text{ABD}} &= C \times \mathrm{AB}^2 \times f(\angle \mathrm{BAC}), \\
S_{\text{BCD}} &= C \times \mathrm{BC}^2 \times f(\angle \mathrm{CBD}) \\
&=C \times \mathrm{BC}^2 \times f(\angle \mathrm{BAC}).
\end{align}
$$

We also know that

$$
\begin{equation}
S_{\text{ABC}} =  S_{\text{ABD}} + S_{\text{BCD}},
\end{equation}
$$

which becomes

$$
\begin{equation}
\mathrm{AC}^2 = \mathrm{AB}^2  + \mathrm{BC}^2.
\end{equation}
$$
