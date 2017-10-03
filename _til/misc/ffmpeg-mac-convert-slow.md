---
layout: til
title: "Using ffmpeg to Convert and Slow Down Video"
date: 2017-10-03
modified: 2017-10-03
author: OctoMiao
comments: true
categories: misc
filter: misc
summary: On Mac
---


To convert from mov to mp4

```
ffmpeg -i matter-gyro-pendulum-20-alpha-1-lambda-0.mov -c copy matter-gyro-pendulum-20-alpha-1-lambda-0.mp4
```

To slow down video

```
ffmpeg -i matter-gyro-pendulum-20-alpha-1-lambda-0.mp4 -filter:v "setpts=4.0*PTS" matter-gyro-pendulum-20-alpha-1-lambda-0-slow.mp4
```
