---
layout: archive
---

<hr class="accessory">

<section style='text-align:center;'>
Check out my data science website.

<a href="https://datumorphism.com" style="margin: 1em 1em 1em 1em; display:block;color:#e95420;" class="btn">datumorphism.com</a>
</section>

<hr class="accessory">

<h1 style="text-align:center;margin-bottom:2em;"><a href="/itsdata">Bilibili</a></h1>


The following projects are minimal and for fun.

{% assign datascience = site.itsdata %}

<div class="tiles">
{% for post in datascience reversed %}
	   {% include datascience-list.html %}
{% endfor %}
</div><!-- /.tiles -->
