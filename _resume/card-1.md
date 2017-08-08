---
type: "Non-Social"
---

{{ site.data.resume.social.notes }}

{% for item in site.data.resume.social.ids limit: 4 %}
* {{ item.name }}: [@{{ item.id }}]({{ item.link }})
{% endfor %}