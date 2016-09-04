---
type: "Education"
---


{% if site.data.resume.education.phd != null %}
<div style="border-bottom: 1px solid #e4e0e0;">
<h4>{{ site.data.resume.education.phd.university }}</h4>
<p class="resume-subheading">{{ site.data.resume.education.phd.major }} ; {{ site.data.resume.education.phd.date }} ; {{ site.data.resume.education.phd.location }} </p>
<p>{{ site.data.resume.education.phd.notes }}</p>
</div>
{% endif %}

{% if site.data.resume.education.msc != null %}
<div style="border-bottom: 1px solid #e4e0e0;margin-top:0.5em;">
<h4>{{ site.data.resume.education.msc.university }}</h4>
<p class="resume-subheading">{{ site.data.resume.education.msc.major }} ; {{ site.data.resume.education.msc.date }} ; {{ site.data.resume.education.msc.location }} </p><p>{{ site.data.resume.education.msc.notes }}</p>
</div>
{% endif %}

{% if site.data.resume.education.bsc != null %}
<div style="border-bottom: 1px solid #e4e0e0;margin-top:0.5em;">
<h4>{{ site.data.resume.education.bsc.university }}</h4>
<p class="resume-subheading">{{ site.data.resume.education.bsc.major }} ; {{ site.data.resume.education.bsc.date }} ; {{ site.data.resume.education.bsc.location }} </p><p>{{ site.data.resume.education.bsc.notes }}</p>
</div>{% endif %}