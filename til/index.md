---
layout: archive
title: Today I Learned
---


<h2 class="til-subsection">READING</h2>

I always love to read interesting papers in physics. Here are some notes I wrote. Think of this as a lab notebook.

<div class="tiles">
{% for til in site.papers reversed %}
	   {% include til-list.html %}
{% endfor %}
</div><!-- /.tiles -->




-----


<div class="tiles">
{% assign tilProgramming = site.til | where: 'filter', 'programming' %}
{% assign tilPhysics = site.til | where: 'filter', 'physics' %}
{% assign tilMISC = site.til | where: 'filter', 'misc' %}
{% assign tilMath = site.til | where: 'filter', 'math' %}
{% assign tilAstro = site.til | where: 'filter', 'astro' %}

<h2 class="til-subsection">#Programming#</h2>

{% for til in tilProgramming %}
	   {% include til-list.html %}
{% endfor %}

<h2 class="til-subsection">#Physics#</h2>

{% for til in tilPhysics %}
	   {% include til-list.html %}
{% endfor %}

<h2 class="til-subsection">#MISC#</h2>

{% for til in tilMISC %}
	   {% include til-list.html %}
{% endfor %}

<h2 class="til-subsection">#Math#</h2>

{% for til in tilMath %}
	   {% include til-list.html %}
{% endfor %}

<h2 class="til-subsection">#Astro#</h2>

{% for til in tilAstro %}
	   {% include til-list.html %}
{% endfor %}



</div><!-- /.tiles -->

<hr>


<div class="tiles">

{% assign tilNull = site.til | where: 'filter', '' %}

{% for til in tilNull reversed %}
	   {% include til-list.html %}
{% endfor %}

</div><!-- /.tiles -->
