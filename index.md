---
layout: archive
permalink: /
title:
---

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

<div class="front-cover" style="background-size:cover;overflow:hidden;">

    <section>
        <div class="container" style="padding-top:1em;">
            <h1 style="text-align:center;color:#fff;font-weight:600;" id="site-title-front">{{ site.title }}</h1>
            {% if site.description %}<h3 style="text-align:center;color:#fff;font-weight:600;font-size:90%;">{{ site.description }}</h3>{% endif %}
        </div>

<!-- <div class="featured" style="border-top:1px solid grey;margin:0 10% 0 10%;">
<div style="background: rgba(67, 69, 78, 0.3);">

<h3 style="text-align:center;font-size:120%;color:white;">Recent <span style="text-decoration:none;color:black;"><a href="itsdata/">Data Project</a></span>: <a href="{{ site.url }}{{ recentdatascience.url }}" style="text-align:center;color:white;font-weight:600;">{{ recentdatascience.title }}</a></h3>
<p style="text-align:center;color:#fff;font-size:90%;padding-bottom:0.5em;padding-left:2%;padding-right:2%;">{{ recentdatascience.summary }}</p>

</div>
</div> -->

<div class="featured" style="border-top:1px solid grey;margin:0 10% 0 10%;">
<div style="background: rgba(67, 69, 78, 0.3);">

<h3 style="text-align:center;font-size:120%;color:white;">Recent Post: <a href="{{ site.url }}{{ post.url }}" style="text-align:center;color:white;font-weight:600;">{{ post.title }}</a></h3>
<p style="text-align:center;color:#fff;font-size:90%;padding-bottom:0.5em;padding-left:2%;padding-right:2%;">{{ post.summary }}</p>

</div>
</div>
    </section>

</div>



<hr class="accessory">

<h1 style="text-align:center;margin-bottom:2em;"><a href="/itsdata">Data Projects</a></h1>


{% assign datascience = site.itsdata %}

<div class="tiles">
{% for post in datascience reversed %}
	   {% include datascience-list.html %}
{% endfor %}
</div><!-- /.tiles -->


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

