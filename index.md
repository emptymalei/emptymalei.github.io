---
layout: archive
permalink: /
title:
---

<!-- {% include front-hover-expand.html %} -->


{% assign recentpost = site.posts.first %}
{% assign recentreading = site.reading.last %}
{% assign recentdatascience = site.itsdata.last %}
{% assign recenttil = site.til.last %}
{% assign recenttotd = site.totd.last %}

{% if recentpost.date > recentreading.date %}
{% assign post = recentpost %}
{% else %}
{% assign post = recentreading %}
{% endif %}



{% if post.date > recenttil.date %}
{% assign post = post %}
{% else %}
{% assign post = recenttil %}
{% endif %}

{% if post.date > recenttotd.date %}
{% assign post = post %}
{% else %}
{% assign post = recenttotd %}
{% endif %}

{% include front-cover-case-plain.html %}



<hr class="accessory">

<section>
<h1 style="text-align:center;margin-bottom:2em;"><a href="/itsdata">Data Projects</a></h1>


{% assign datascience = site.itsdata %}

<div class="tiles">
{% for post in datascience reversed %}
	   {% include datascience-list.html %}
{% endfor %}
</div><!-- /.tiles -->
</section>

<hr class="accessory">



<section style="margin-top:2em;margin-bottom:2em;text-align:center;">

<a href="/til/" style="margin: 1em 1em 1em 1em;" class="btn">#TIL#'s</a>
<a href="/itsdata/" style="margin: 1em 1em 1em 1em;" class="btn">Data Science</a>
<a href="/science/" style="margin: 1em 1em 1em 1em;" class="btn">Science Posts</a>
<a href="/misc/" style="margin: 1em 1em 1em 1em;" class="btn">MISC Posts</a>
<a href="/about/" style="margin: 1em 1em 1em;" class="btn">About Me</a>

<a href="/reading/" style="margin: 1em 1em 1em;" class="btn">Reading Notes</a>
<a href="/projects/" style="margin: 1em 1em 1em;" class="btn">My Kanban Board</a>
<a href="/stories/" style="margin: 1em 1em 1em;" class="btn">Stories</a>

</section>
