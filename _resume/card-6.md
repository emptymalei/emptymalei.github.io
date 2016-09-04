---
type: "Research"
---

{% for item in site.data.resume.research %}
* **{{ item.category }}**: {{ item.topics }}
{% endfor %}