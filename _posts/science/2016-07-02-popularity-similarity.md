---
layout: article
title: "Popularity and Similarity"
date: 2016-07-02
modified: 2016-07-02 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: science
tag:
- en
- jupyter
- complex-systems
summary: Notes of several papers
---


* ToC
{:toc}


## Hyperbolic Space




A 2D hyperbolic plane can be described in 3D by the algebra

$$
z^2 - y^2 - x^2 = 1,
$$

with normalized coordinates.


On the other hand, a (2+1)D Minkowski space is a space where the line element is written as

$$
ds^2 = t^2 - x_1^2 - x_2^2.
$$

What connects the two geometry is that a hyperbolic plane is simply a plane of a constant distance in a 3D Minkowski space, where $z$ corresponds to time $t$.

To spot deeper relation between Minkowski space and hyperbolic space, we reduce the dimension to (1+1)D. A hyperbola is 

$$
x^2 - y^2 = 1.
$$



<figure markdown="1">
<figcaption>
Hyperbola described by $x^2 - y^2 = 1$
</figcaption>
![]({{site.url}}/images/posts/popularity-similarity/Hyperbolic_functions-2.svg)
</figure>


If we substitute $x$ with time $t$, and $y$ with $x_1$, what we have is

$$
t^2 - x_1^2 = 1,
$$

which are points who have a constant distance 1 from center, in Minkowski space. In the previous figure, the dashed lines are basically the same as light cone, where the right side is future and left side is past. Now what we expect is that in a real world, where we have (3+1)D space, events that have the same distance to me at this moment is distributed on hyperbolic planes.


Some interesting properties are [^2]

1. No rectangles are possible;
2. Triangles have angle sum smaller than 180 degrees;
3. Any two triangles that are similar should be identitcal, which means that we can NOT enlarge or shrink a triangle here;
4. Area of the triangles are determined by the angle sum.


One last point, distance on a hyperbolic surface is defined as

$$
ds^2 = \cosh^2 y dx^2 + dy^2,
$$

given a [Cartesian-like coordinate system](https://en.wikipedia.org/wiki/Hyperbolic_geometry#Distance). Thus distance between any two points in such a Cartesian-like coordinate system is given by

$$
R = \mathrm{arccosh}\left( \cosh y_1 \cosh (x_2-x_1) \cosh y_2 - \sinh y_1 \sinh y_2  \right).
$$



To visualize such a space, we can use Poincare disk and three other models.



## The Paper


[Papadopoulos, F., Kitsak, M., Ngeles Serrano, M., Boguñá, M., & Krioukov, D. (2012). Popularity versus similarity in growing networks. ](http://doi:10.1038/nature11459)


## Questions

1. How about a degenerating network? As the nodes are destroyed one by one, the most connected nodes will be more important. We could also define a measure of importance. Another point of view is about the effect of removing a node. As a node is removed, which nodes are the most affected?
2. Why a polar coordinate system? What if I just use horizontal axis as similarity and vertial axis as popularity? (As in [^1] popularity is the emerging time.)



1. In real neuronal networks, evolution is done by removing nodes thus achieving some functional regions. How does removing nodes work, from the view of complex systems? Remove some people from the social network can also be interesting.


## MISC

Just some interesting points.

1. "If new connections are made pref-erentially to more popular nodes, then the resulting distribution ofthe number of connections possessed by nodes follows powerlaws" -- From *Popularity versus similarity in growing networks*
2. homophily: "Nodes that are similar have a higher chance of getting connected,even if they are not popular" -- From *Popularity versus similarity in growing networks*



## References



[^1]: Popularity versus similarity in growing networks
[^2]: [Hyperbolic Geometry By Mihai](http://www.math.cornell.edu/~mec/Winter2009/Mihai/section5.html)