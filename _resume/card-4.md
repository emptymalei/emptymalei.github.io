---
type: "Selected Projects"
---



{% for item in site.data.resume.organizations limit: 2 %}
* [**{{ item.displayname }}**]({{ item.link }}): {{ item.description }}
{% endfor %}