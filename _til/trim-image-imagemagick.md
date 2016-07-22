---
layout: til
title: "Automatically Trim Image Using ImageMagick"
date: 2015-04-09 # not necessarily the date created but to ensure the sorting of posts
modified: 2015-04-09 # 2015-02-03 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: misc
summary: Automatically Trim Image Using ImageMagick
---


Trim out the white margin of an image using ImageMagick:

```
convert elementary-particles.jpg -trim elementary-particles.jpg
```

Well to install ImageMagic, check out the website, or use Homebrew.
