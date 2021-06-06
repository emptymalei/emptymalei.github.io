---
layout: archive
title: Career
---

My posts related to career development.


{% assign careerPosts = site.posts | where: 'categories', 'career' %}

<div class="tiles">
{% for post in careerPosts reversed %}
	   {% include post-list.html %}
{% endfor %}
</div><!-- /.tiles -->
