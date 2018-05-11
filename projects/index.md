---
layout: projects
title: My Kanban Board
comments: true
published: true
---

For a list of my work please read
<a href="/about" style="margin: 1em 1em 1em 1em;" class="btn--light">About</a>

Here on this page is a list of my learning projects.


## Data

I am building tech stack for data science.

{% for item in site.data.projects.data-projects %}
<h2 class="kanban__head">{{ item.project }}</h2>
{% include kanban-div.html %}
{% endfor %}


## Research

My fun little research projects

{% for item in site.data.projects.research-projects %}
<h2 class="kanban__head">{{ item.project }}</h2>
{% include kanban-div.html %}
{% endfor %}



## Language

{% for item in site.data.projects.language-projects %}
<h2 class="kanban__head">{{ item.project }}</h2>
{% include kanban-div.html %}
{% endfor %}
