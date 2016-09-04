---
type: "Selected Honors and Awards"
---



{% for item in site.data.resume.awards limit: 4 %}
* {{ item.title }} ({{ item.type }}), {{ item.year }}
{% endfor %}