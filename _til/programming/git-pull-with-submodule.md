---
layout: til
title: "Git Pull with Submodule"
date: 2017-02-03
author: OctoMiao
comments: true
categories: programming
filter: programming
summary: Pull git repo with submodule
---


For a repo with submodules, we can pull all submodules using

```
git submodule update --init --recursive
```

for the first time. All submodules will be pulled down locally.

To update submodules, we can use

```
git submodule update --recursive --remote
```

or simply

```
git pull --recurse-submodules
```

The first one works for git version `1.8.2` or above while the second one works for git version `1.7.3` or above.


For More git related TIL, checkout this link: [https://datumorphism.leima.is/tags/git/](https://datumorphism.leima.is/tags/git/)

References:

1. [Easy way pull latest of all submodules @ stackoverflow.com](http://stackoverflow.com/questions/1030169/easy-way-pull-latest-of-all-submodules)
