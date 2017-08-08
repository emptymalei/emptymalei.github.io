---
layout: article
title: "豆瓣九点和博客访问量"
date: 2012-12-11
modified: 2012-12-11 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: sciencecn
summary: 到现在为止，我的博文两次上了豆瓣九点科技，所以我有两份豆瓣九点带来访客的数据。既然有了数据，那自然要利用一下。
---





到现在为止，我的博文两次上了豆瓣九点科技，所以我有两份豆瓣九点带来访客的数据。既然有了数据，那自然要利用一下。

两次分别是 2011 年 8 月 4 日到 8 月 8 日和 2012 年 12 月 8 日到 12 月 11 日（尚未完全完成）。

数据分别是

* [multiverse-20110804-20110808.csv：2011 年 8 月]({{site.url}}/images/posts/douban-9dian-blog-vistors/multiverse-20110804-20110808.csv)
* [multiverse-20121208-20121211.csv：2012 年 12 月]({{site.url}}/images/posts/douban-9dian-blog-vistors/multiverse-20121208-20121211.csv)

利用 Mathematica，把数据按照时间绘制出来。不过比较忙，所以只处理 Total Visitors 和 Unique Visitors 的数据。

<figure markdown="1">
<figcaption>
2011 年 8 月
</figcaption>
![]({{site.url}}/images/posts/douban-9dian-blog-vistors/WebsiteVistors.jpg)
</figure>


<figure markdown="1">
<figcaption>
2012 年 12 月
</figcaption>
![]({{site.url}}/images/posts/douban-9dian-blog-vistors/WebsiteVistors2.jpg)
</figure>

<figure markdown="1">
<figcaption>
BrightBands 色带，向左指数据大，向右指数据小。
</figcaption>
![]({{site.url}}/images/posts/douban-9dian-blog-vistors/bar.jpg)
</figure>




上图是去年的数据，下图是今年的数据。

为了更加直观，添加了 Hue 的背景，用不同的颜色来区分一天中不同的小时。同时为了能够更好地提取出具有差不多访问者的小时时刻，使用 BrightBands 色带来填满数据点和时间轴（对于大量数据更有效些）。

首先说明的是，我用的是 Pacific Time，但是从 GA 得知绝大多数用户（由于高达 85% 以上）来自国内，因此要把时间换算成北京时间，即 +16 小时，而对于去年那次，由于夏令时缘故，需 +15 小时。由于图表我另有用途，所以并不切换到北京时间，但是下文所讲的白天黑夜是北京时间。

这样的话，可以用一幅图来展示代表小时的颜色的意义：

<figure markdown="1">
<figcaption>
NightDay
</figcaption>
![]({{site.url}}/images/posts/douban-9dian-blog-vistors/NightDay.jpg)
</figure>



上图中的连续色带用来表示白天黑夜，可见绿线附近是白天，而紫色粉色附近是黑夜。

有了这些铺垫之后，可以很快发现，两张图的流量低谷恰在凌晨。哎，没有为我们提供新观点的可视化是没意义的。

需要提到，我两次都是凌晨写的文章。但两次数据表明

* 大规模的爆发皆为下午 14:00，15:00 左右。大约 9 小时（即深夜 12 点）后进入低谷，因为大家都睡觉去了。
* 上面提到国内访客大约 85%，也就是说国内/国外近似为 5.5，到了夜间，数据主要是紫色和红色。从上面的 BrightBands 色带可以看到橙色大约是红色的六倍，与定量数据是吻合的。
* 每天中可以看到 filling 的色带的间隔出现，比如绿色和浅蓝色的间隔出现，这是一天中访客波动造成的。这里颜色所代表的和曲线的走势相同，少量数据没有优势，但是对于大量数据的话，颜色的重复出现就更容易观察到。
* 完整的一天大约有五次峰值。大致为早上一次，午饭前一次，午饭后一次，下午一次，晚上两次。
* 作为上述五峰值现象的一个特殊情况，爆发第一天的时候，两次是惊人的相似。

我这种绘图方法需要一定的了解之后才可以从中看到比较多的信息，所以不算是一种好的可视化。不过如果加上 interactive 的功能，那就好多了。



在绘图过程中，我还发现一个很奇怪的现象。我把 Total Visitors 和 Unique Visitors 都导出来，然后通过设置 filling 规则为：如果 Total Visitors 数量上多于 Unique Visitors，那么使用蓝色来 fill 两者之间的差异，反之，使用桔色。
原则上来说，应该只有蓝色出现，但是实际情况却并非如此。看下图。

<figure markdown="1">
<figcaption>
WebsiteVistors
</figcaption>
![]({{site.url}}/images/posts/douban-9dian-blog-vistors/WebsiteVistors3.jpg)
</figure>


<figure markdown="1">
<figcaption>
WebsiteVistors
</figcaption>
![]({{site.url}}/images/posts/douban-9dian-blog-vistors/WebsiteVistors4.jpg)
</figure>


上图是去年的情况，下图是今年的情况。两者都有桔色出现。很好奇这是如何造成的。是统计不准确？还是我对两个概念理解有错？


当然了，上面提到了两次的相似性，那么我们就把两次的情况放在一起对照吧。

<figure markdown="1">
<figcaption>
WebsiteVistorsCompare
</figcaption>
![]({{site.url}}/images/posts/douban-9dian-blog-vistors/WebsiteVistorsCompare.jpg)
</figure>



特别是第一天爆发的时候，两次很相似。为什么？是因为豆瓣本身的扩散方式的特点么？还是由于大家都是差不多在相同的时间工作累了让后开始豆瓣呢？抑或是统计次数太少，两次都是特殊情况？



最后，来两张传统的图记录一下吧。

<figure markdown="1">
<figcaption>
Last Year
</figcaption>
![]({{site.url}}/images/posts/douban-9dian-blog-vistors/LastYear.jpg)
</figure>


<figure markdown="1">
<figcaption>
This Year
</figcaption>
![]({{site.url}}/images/posts/douban-9dian-blog-vistors/ThisYear1.jpg)
</figure>





-----

代码以及本文所用图片和数据文件在此：

[Visualization: 数据、Mathematica及图片]({{site.url}}/images/posts/douban-9dian-blog-vistors/Visualization.zip)


-----

关于作图的 post 都写完了，赶紧干正事吧~ 还要处理 BAO 的数据呢~
