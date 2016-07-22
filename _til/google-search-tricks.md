---
layout: til
title: "Google Search Tricks"
date: 2015-04-09
modified: 2015-04-09
author: OctoMiao
comments: true
categories: misc
summary: Google Search Tricks
---


* `AND` and `OR` are two operators that can be used in Google search.
* `AROUND(x)` can be used to refine search results for two words that are close to each other up to a range `x`. For example `ABC AROUND(1) DEF` means that `ABC` and `DEF` are very close to each other in the search results while `ABC AROUND(3) DEF` means they are not so close.
* `-` also works on `site:` parameter. For example we can exclude an url by `-site:http://apple.com`.
* Search only in the title text is defined by `allintitle:KEYWORD`.
* `allinanchor:"google hacks"`.
* Parameters that can be used [^lifehackerGoogle] `inurl`, `intitle`, `filetype`. An example is `-inurl:htm -inurl:html intitle:”index of” apk` which is for something that appears in the html title. Another example is `-inurl:htm -inurl:html intitle:"index of" +("/ebooks"|"/book") +(chm|pdf|zip) +"For Dummies"`. Another one to find music is `-inurl:(htm|html|php) intitle:”index of” +”last modified” +”parent directory” +description +size +(wma|mp3) “Counting Crows”`. Also ti can be used to find ebooks, `-inurl:(htm|html|php) intitle:”index of” +”last modified” +”parent directory” +description +size +(pdf|doc) “george orwell 1984″`.
* Cache can be directly obtained by using `cache:http://openmetric.org` in the url bar.
* Google translate or Google mobilizer can help us bypass paywalls sometimes. This can be done by typing in the address bar directly. Two examples are `http://translate.google.com/translate?sl=ja&tl=en&u=http://example.com/` and `http://www.google.ie/gwt/x?u=http://www.labnol.org`.
* Parameters in image search can help us assign type of images. Use the `Search Tools` provided by Google.
* Search within some time can be done either using `Search Tools` or using url hack `&tbs=qdr:xx` where `xx` can be `h5` (5 hours), `n9` (9 minutes), `s53` (53 seconds).

A list of operators [^7tricks]


* `link:URL` = lists other pages that link to the URL.
* `related:URL` = lists other pages that are related to the URL.
* site:domain.com “search term = restricts search results to the given domain.
* allinurl:WORDS = shows only pages with all search terms in the url.
* inurl:WORD = like allinurl: but filters the URL based on the first term only.
* allintitle:WORD = shows only results with terms in title.
* intitle:WORD = similar to allintitle, but only for the next word.
* cache:URL = will show the Google cached version of the URL.
* info:URL = will show a page containing links to related searches, backlinks, and pages containing the url. This is the same as typing the url into the search box.
* filetype:SOMEFILETYPE = will restrict searches to that filetype
* -filetype:SOMEFILETYPE = will remove that file type from the search.
* site:www.somesite.net “+www.somesite.net” = shows you how many pages of your site are indexed by google
* allintext: = searches only within text of pages, but not in the links or page title
* allinlinks: = searches only within links, not text or title
* WordA OR WordB = search for either the word A or B
* “Word” OR “Phrase” = search exact word or phrase
* WordA -WordB = find word A but filter results that include word B
* WordA +WordB = results much contain both Word A and Word B
* ~WORD = looks up the word and its synonyms
* ~WORD -WORD = looks up only the synonyms to the word


Finally, Google can gives us useful result directly like calculator (`calculator`).

[^lifehackerGoogle]: [Top 10 Clever Google Search Tricks](http://lifehacker.com/top-10-clever-google-search-tricks-1450186165)
[^7tricks]: [7 Clever Google Tricks Worth Knowing](http://www.marcandangel.com/2007/07/25/7-clever-google-tricks-worth-knowing/)
