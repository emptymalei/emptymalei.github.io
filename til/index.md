---
layout: archive
---


{% include mixitup.html %}
<h1 style="text-align:center;margin-bottom:2em;"><a href="/til">Today I Learned</a></h1>

    

---

<div id="random_til" style="border:1px solid grey;padding-bottom:2em;margin-bottom: 2em;">
<h2 class="til-subsection">A Random #TIL# for You</h2>
</div>









<div class="tiles">

{% assign tilProgramming = site.til | where: 'filter', 'programming' | sort: 'post.date' | reverse %}
{% assign tilPhysics = site.til | where: 'filter', 'physics' | sort: 'post.date' | reverse %}
{% assign tilMISC = site.til | where: 'filter', 'misc' | sort: 'post.date' | reverse %}
{% assign tilMath = site.til | where: 'filter', 'math' | sort: 'post.date' | reverse %}
{% assign tilAstro = site.til | where: 'filter', 'astro' | sort: 'post.date' | reverse %}




<div class="controls">

<span style="display: inline-block;margin-right: 1em;margin-bottom: 1em;">
  <label>Filter:</label>
  
  <button class="filter" data-filter="all">All</button>
  <button class="filter mix-btn-programming" data-filter=".mix-programming">Programming</button>
  <button class="filter mix-btn-physics" data-filter=".mix-physics">Physics</button>
  <button class="filter mix-btn-math" data-filter=".mix-math">Math</button>
  <button class="filter mix-btn-astro" data-filter=".mix-astro">Astro</button>
  <button class="filter mix-btn-misc" data-filter=".mix-misc">MISC</button>
</span>

<span style="display: inline-block;">  
  <label>Sort:</label>
  
  <button class="sort" data-sort="myorder:desc">Date Desc</button>
  <button class="sort" data-sort="myorder:random">Date Random</button>
  <button class="sort" data-sort="myorder:asc">Date Asc</button>
</span>
</div>

<div id="Mix-Container" class="mix-container">

{% for til in tilProgramming reversed limit:4 %}

   {% if til.date %}
   <div class="mix mix-programming" data-myorder="{{ til.date | date: "%Y-%m-%d" }}">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   <span class="mix-date">{{ til.date | date: "%Y-%m-%d" }}</span>
   </div>
   {% else %}
   <div class="mix mix-programming">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   </div>
   {% endif %}

{% endfor %}

{% for til in tilPhysics reversed limit:4 %}

   {% if til.date %}
   <div class="mix mix-physics" data-myorder="{{ til.date | date: "%Y-%m-%d" }}">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   <span class="mix-date">{{ til.date | date: "%Y-%m-%d" }}</span>
   </div>
   {% else %}
   <div class="mix mix-physics">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   </div>
   {% endif %}

{% endfor %}


{% for til in tilMISC reversed limit:4 %}
	   {% if til.date %}
   <div class="mix mix-misc" data-myorder="{{ til.date | date: "%Y-%m-%d" }}">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   <span class="mix-date">{{ til.date | date: "%Y-%m-%d" }}</span>
   </div>
   {% else %}
   <div class="mix mix-misc">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   </div>
   {% endif %}
{% endfor %}


{% for til in tilMath reversed limit:4 %}
	   {% if til.date %}
   <div class="mix mix-math" data-myorder="{{ til.date | date: "%Y-%m-%d" }}">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   <span class="mix-date">{{ til.date | date: "%Y-%m-%d" }}</span>
   </div>
   {% else %}
   <div class="mix mix-math">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   </div>
   {% endif %}
{% endfor %}

{% for til in tilAstro reversed limit:4 %}
	   {% if til.date %}
   <div class="mix mix-astro" data-myorder="{{ til.date | date: "%Y-%m-%d" }}">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   <span class="mix-date">{{ til.date | date: "%Y-%m-%d" }}</span>
   </div>
   {% else %}
   <div class="mix mix-astro">
   <span class="mix-categories">#{{ til.categories }}#</span>
   <a class="mix-title" href="{{ site.url }}{{ til.url }}">{{ til.title }}</a>
   </div>
   {% endif %}
{% endfor %}



  
  <div class="gap"></div>
  <div class="gap"></div>
</div>


<div style="text-align: center;"><a class="btn" href="/til/alltils/">All TILs</a></div>



</div><!-- /.tiles -->

<hr>


<div class="tiles">

{% assign tilNull = site.til | where: 'filter', '' %}

{% for til in tilNull reversed %}
	   {% include til-list.html %}
{% endfor %}

</div><!-- /.tiles -->
