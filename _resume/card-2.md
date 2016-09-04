---
type: "Work, Intership, and Teaching"
---


{% for item in site.data.resume.work limit: 4 %}
<h4><a href="{{ item.link }}">{{ item.company }}</a> </h4>
<p>{{ item.description }}</p>
{% endfor %}