---
layout: projects
title: My Projects
comments: true
published: true
---

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


	