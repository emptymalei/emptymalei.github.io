---
layout: archive
title: MISC
---

<ul id="markdown-toc">
  <li><a href="#misc-reading-notes" id="markdown-toc-misc-reading-notes">MISC Reading Notes</a></li>
  <li><a href="#misc-posts" id="markdown-toc-misc-posts">MISC Posts</a></li>
  <li><a href="#all-other-posts" id="markdown-toc-all-other-posts">全部其它文章</a></li>
</ul>


## MISC Reading Notes

{% assign readingMISC = site.reading | where: 'filter', 'misc' %}

<div class="tiles">
{% for post in readingMISC reversed %}
	   {% include post-list.html %}
{% endfor %}
</div><!-- /.tiles -->


## MISC Posts




{% assign enPost = site.categories.misc | where: 'tag', 'en' %}


{% if enPost %}
{{ enPost.size }} English MISC Posts
		{% else %}
No English MISC Post for Now.
		{% endif %}

<div class="tiles">
{% for post in enPost %}
	   {% include post-list.html %}
{% endfor %}
</div><!-- /.tiles -->



<hr class="paragraph">

<h2 style="text-align:center;margin-bottom:2em;" id="all-other-posts">全部其它文章</h2>


{% if site.categories.misc.size %}
共有 {{ site.categories.misc.size }} 篇文章
		{% else %}
暂无文章
		{% endif %}

<div class="tiles">
{% for post in site.categories.misc %}
	{% include post-list-cn.html %}
{% endfor %}
</div><!-- /.tiles -->
