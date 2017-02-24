---
layout: article
title: Research Tools
comments: true
published: true
---

{% include zero-md/zero-md-scripts.html %}


I started a collection of research tools on GitHub, which is currently a part of the awesome-awesome collection.

You can

<p style="text-align:center;">
<a href="https://github.com/emptymalei/awesome-research" style="margin: 1em 1em 1em 1em;" class="btn--light" target="_blank">Star on GitHub</a>

<a href="#comment-lazy" style="margin: 1em 1em 1em 1em;" class="btn--light">Comment</a>
</p>


The following content is live rendered using <a href="https://zerodevx.github.io/zero-md/" target="_blank">zero-md</a>. If anything goes wrong, please read it on GitHub repo: <a href="http://github.com/emptymalei/awesome-research" target="_blank">emptymalei/awesome-research</a>.



  <div unresolved>
    <!-- Edit your Markdown URL file location here -->
    <zero-md file="https://raw.githubusercontent.com/emptymalei/awesome-research/master/README.md"><div class="md-html"></div></zero-md>

</div>

<div>
<h3>Top 10 Contributors: <a href="https://github.com/emptymalei/awesome-research/graphs/contributors" target="_blank">Contributors@GitHub Graph</a>; <a href="https://github.com/emptymalei/awesome-research/pulls?q=is%3Aclosed" target="_blank">Pull Requests</a></h3>
<ul id="gh-contributors" style="list-style-type:none;">
</ul>
</div>


<script>
$(document).ready(function () {
    var api = "https://api.github.com/repos/emptymalei/awesome-research/contributors";
    $.get(api, function (data) {
        $.each(data, function (idx, obj) {
            $("#gh-contributors").append("<li style='display:inline-block;margin:1em;'><a href='" + obj.html_url+ "' target='_blank'>@" + obj.login + "</a></li>");
        });
    });
});
</script>
