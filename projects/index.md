---
layout: projects
title: My Projects
comments: true
published: true
---

For a list of my work please read
<a href="/about" style="margin: 1em 1em 1em 1em;" class="btn--light">About</a>

Here on this page is a list of my learning projects.

## Research


{% for item in site.data.projects.research-projects %}
<h2 class="kanban__head">{{ item.project }}</h2>
{% include kanban-div.html %}
{% endfor %}


## Developer


{% for item in site.data.projects.dev-projects %}
<h2 class="kanban__head">{{ item.project }}</h2>
{% include kanban-div.html %}
{% endfor %}


## Language

{% for item in site.data.projects.language-projects %}
<h2 class="kanban__head">{{ item.project }}</h2>
{% include kanban-div.html %}
{% endfor %}


## For Fun

1. [Virtual Kitchen Project](/kitchen)

## Academia

1. [Physics](../academia/physics)
2. [Math](../academia/math)
