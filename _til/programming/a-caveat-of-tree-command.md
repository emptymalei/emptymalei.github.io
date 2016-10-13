---
layout: til
title: "A Caveat of tree Command"
date: 2016-07-21
author: OctoMiao
comments: true
categories: programming
filter: programming
summary: A Caveat of tree Command
---


Using `tree` is very convinient however some problems could arise. One of it is that the list could be very long and it takes a long time to display.

The command that counts the number of files and folders is

```
find DIR_NAME -type f | wc -l
```

where `DIR_NAME` is the directory name one needs to count.

MORE on [stackoverflow](http://stackoverflow.com/questions/9157138/recursively-counting-files-in-a-linux-directory).
