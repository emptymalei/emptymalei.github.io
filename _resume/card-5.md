---
type: "Selected Pulications"
---

{% for item in site.data.resume.publications limit: 2 %}
* {{ item.authors }}, *{{ item.title }}*, *{{ item.journal }}* **{{ item.vol }}**, {{ item.page }} ({{ item.year }}).
{% endfor %}