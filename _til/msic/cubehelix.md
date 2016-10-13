---
layout: til
title: "Cubehelix, not Rainbow"
date: 2016-9-26
author: OctoMiao
comments: true
categories: misc
filter: misc
summary: Rainbow has got problems, we use cubehelix.
---


Here in a [series of posts by MYCARTA](https://mycarta.wordpress.com/2012/05/29/the-rainbow-is-dead-long-live-the-rainbow-series-outline/), the author [Matteo](https://mycarta.wordpress.com/author/mycarta/) analyzed the drawbacks of rainbow. Problems such as [non-monotonic changing of brightness](https://mycarta.wordpress.com/2012/05/28/the-rainbow-is-dead-long-live-the-rainbow-part-2-a-rainbow-puzzle/) can cause serious problems for figures and plots.

Cubehelix comes to the rescue. Other alternatives can also be very helpful, such as [viridis](https://www.youtube.com/watch?v=xAoljeRJ3lU).


## D3.js

D3.js has a [cubehelix plugin](https://github.com/d3/d3-plugins/tree/master/cubehelix) that contains the cubehelix color palette.


## Python

Many python modules has implemented cubehelix. Such as [jradavenport/cubehelix](https://github.com/jradavenport/cubehelix).


## Mathematica

Here is the [cubehelix code](http://mathematica.stackexchange.com/questions/64513/is-there-an-easy-way-to-use-matteo-niccolis-perceptual-color-maps-for-2d-plots) from [JasonB@stackexchange](http://mathematica.stackexchange.com/users/9490/jasonb). He also made it avaible online through `<<"http://pastebin.com/raw.php?i=sqYFdrkY";`


Download the Mathematica notebook [here](../assets/misc/cubehelix-linearl-color-palette.nb).
