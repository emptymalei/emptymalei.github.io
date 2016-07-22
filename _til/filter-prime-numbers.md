---
layout: til
title: "Python Onliner: Filter Prime Numbers"
date: 2015-12-04
author: OctoMiao
comments: true
categories: programming
summary: Python Onliner Filter Prime Numbers
---

Here is some one-liner from [Linghao:一行 Python 能实现什么丧心病狂的功能？](http://www.zhihu.com/question/37046157/answer/70629342)，

* Find out prime numbers using
  `filter(lambda x: all(map(lambda p: x % p != 0, range(2, x))), range(2, n))`
* Read csw file:
  `with open('t.csv', 'r') as f: rows = [line.strip().split(',') for line in f.readlines()]`
* Transpose a matrix
  `m = [ [1,2],[3,4]]`
  `zip(*m)`
