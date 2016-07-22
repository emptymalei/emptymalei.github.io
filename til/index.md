---
layout: archive
title: Today I Learned
---


## Reading

I always love to read interesting papers in physics. Here are some notes I wrote. Think of this as a lab notebook.

<div class="tiles">
{% for til in site.papers reversed %}
	   {% include til-list.html %}
{% endfor %}
</div><!-- /.tiles -->




-----


## TILs

<div class="tiles">
{% for til in site.til reversed %}
	   {% include til-list.html %}
{% endfor %}
</div><!-- /.tiles -->
