---
layout: archive
title: Science
---


* ToC
{:toc}

<!-- <img src="{{ site.url }}/images/field_eq-easer.jpg" style="margin-left: auto;margin-right: auto;"/> -->



## READING

I always love to read interesting papers in physics. Here are some notes I wrote. Think of this as a lab notebook.

<div class="tiles">
{% for til in site.papers reversed %}
	   {% include til-list.html %}
{% endfor %}
</div><!-- /.tiles -->



## Science Posts in English

{% if site.categories.science.size %}
{{ site.categories.science.size }} posts on science
		{% else %}
No Science Posts.
		{% endif %}

<div class="tiles">
{% for post in site.categories.science %}
	{% include post-list.html %}
{% endfor %}
</div><!-- /.tiles -->


-----

## 中文科普 + 科学

{% if site.categories.sciencecn.size %}
共有 {{ site.categories.sciencecn.size }} 篇中文科学文章。
		{% else %}
暂无中文科学类文章。
		{% endif %}

<div class="tiles">
{% for post in site.categories.sciencecn %}
	{% include post-list-cn.html %}
{% endfor %}
</div><!-- /.tiles -->

---

## 数值计算（中文）

Resources

* https://class.coursera.org/scientificcomp-004/class
* http://spark-public.s3.amazonaws.com/scientificcomp/Lecture%20Note%20Packet/LectureNotePacketSciComputing.pdf

中文笔记草稿：

* [Initial Value Problem](../numerical/initial-value-problem)
	* [Euler, Runge-Kutta and Adams Methods](../numerical/euler-runge-kutta-adams-methods)
	* [Error Analysis for Time-Stepping Routines ](../numerical/error-analysis-for-time-stepping-routines)
* [Boundary Value Problems: the Shooting Method](../numerical/boundary-value-problem)
* [Implementation of Shooting and Convergence Studies](../numerical/implementation-of-shooting-and-convergence-studies)
* [Boundary Value Problems: Direct Solve and Relaxation](../numerical/boundary-value problems-direct-solve-and-relaxation)
* [Finite Difference Discretization](../numerical/finite-difference-discretization)
* [Implementing MATLAB's Boundary Value Solver](../numerical/implementation-of-matlab)
* [Iterative Solution Methods for Ax=b](../numerical/iterative-solution-methods)
* [The Advection-diffusion Equations](../numerical/the-advection-diffusion-equations)
* [The Advection-diffusion Equations](../numerical/Jacobi-iteration)
