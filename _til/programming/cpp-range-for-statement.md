---
layout: til
title: "C++ range-for-statement"
date: 2017-09-12
author: OctoMiao
comments: true
categories: programming
filter: programming
summary: In C++ we can use range-for-statement
---


{% highlight cpp %}

#include <iostream>

using namespace std;

main(){
  int v[] = {1,3,5,7};

  for( auto x:v) {
    cout << x << endl;
  }

}

{% endhighlight %}
