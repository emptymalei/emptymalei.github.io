---
layout: archive
---



## MISC


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

<h1 style="text-align:center;margin-bottom:2em;">全部其它文章</h1>


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
