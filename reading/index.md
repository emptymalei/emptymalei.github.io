---
layout: archive
---

<h1 style="text-align:center;margin-bottom:2em;"><a href="/reading">Today I Read</a></h1>

I always love reading interesting papers in physics. Here are some notes I wrote. Think of this as a casual lab notebook.

{% assign readingScience = site.reading | where: 'filter', 'science' %}

<div class="tiles">
{% for post in readingScience reversed %}
	   {% include reading-list.html %}
{% endfor %}
</div><!-- /.tiles -->
