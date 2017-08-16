---
layout: til
title: "Passing Function Arguments Through Lists"
date: 2017-02-20
author: OctoMiao
comments: true
categories: programming
filter: programming
summary: We can pass a list of arguments using Sequence
tags:
- Mathematica
---


In Mathematica, passing a long list of arguments to a function might be tedious enough.

The function `Sequence` simplifies this procedure. Here is an example.

```
f[ Sequence @@ argumentlist1, argument0 , Sequence @@ argumentlist2 ]/.{argumentlist1 -> {a1,b1,c1,d1,e1,f1}, argumentlist2-> {a2,b2,c2,d2}}
```

The result of it would be

```
f[a1,b1,c1,d1,e1,f1, argument0, a2,b2,c2,d2]
```
