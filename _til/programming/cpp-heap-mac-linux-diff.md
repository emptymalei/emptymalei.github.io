---
layout: til
title: "Heap on Mac and Linux"
date: 2017-09-26
author: OctoMiao
comments: true
categories: programming
filter: programming
tags: [cpp]
summary: Some caveats about heap on mac and linux
---

{% highlight cpp %}
#include <iostream>

int main() {

   double *a = new double[5];
   
   for(auto i = 0; i < 5; i++)
   {
     a[i] = i;
   }

   std::cout << a[-10] << std::endl;

}
{% endhighlight %}

This program runs on Mac without warning or error. However, it gives segmentation fault (core dump) error on ubuntu and cent os.


<script src="//repl.it/embed/Lfne/7.js"></script>
