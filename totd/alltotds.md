---
layout: archive
---


<h1 style="text-align:center;margin-bottom:2em;"><a href="/totd">Thought of the Day</a>: Full List</h1>


<div class="tiles">
{% assign tilProgramming = site.totd | where: 'filter', 'programming' %}
{% assign tilPhysics = site.totd | where: 'filter', 'physics' %}
{% assign tilMISC = site.totd | where: 'filter', 'misc' %}
{% assign tilMath = site.totd | where: 'filter', 'math' %}
{% assign tilAstro = site.totd | where: 'filter', 'astro' %}
{% assign tilSCIFI = site.totd | where: 'filter', 'scifi' %}

<h2 class="totd-subsection">#Programming#</h2>

{% for totd in tilProgramming reversed %}
	   {% include totd-list.html %}
{% endfor %}

<h2 class="totd-subsection">#Physics#</h2>

{% for totd in tilPhysics reversed %}
	   {% include totd-list.html %}
{% endfor %}

<h2 class="totd-subsection">#MISC#</h2>

{% for totd in tilMISC reversed %}
	   {% include totd-list.html %}
{% endfor %}

<h2 class="totd-subsection">#Math#</h2>

{% for totd in tilMath reversed %}
	   {% include totd-list.html %}
{% endfor %}

<h2 class="totd-subsection">#Astro#</h2>

{% for totd in tilAstro reversed %}
	   {% include totd-list.html %}
{% endfor %}

<h2 class="totd-subsection">#SCIFI#</h2>

{% for totd in tilSCIFI reversed %}
	   {% include totd-list.html %}
{% endfor %}


</div><!-- /.totdes -->

<hr>


<div class="tiles">

{% assign tilNull = site.totd | where: 'filter', '' %}

{% for totd in tilNull reversed %}
	   {% include totd-list.html %}
{% endfor %}

</div><!-- /.totdes -->
