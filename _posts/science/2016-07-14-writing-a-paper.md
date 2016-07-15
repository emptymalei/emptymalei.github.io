---
layout: article
title: "Writing a Paper"
date: 2016-07-15
modified: 2016-07-15 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: science
tag:
- en
summary: Notes for Whitesides' Group: Writing a Paper
---


* ToC
{:toc}


## Reference

* [Whitesides' Group: Writing a Paper](http://dx.doi.org/10.1002/adma.200400767)
* [The Element of Style](https://en.wikipedia.org/wiki/The_Elements_of_Style)

## Questions to Self

* Why this research?
* What hypothesis if any?
* What methods?
* What results?
* How good are the results?


## Procedure

**Start writing during the research, as soon as the basic structure is clear.**


### Outlines

The first step is to formulate outlines.

1. List all hypothesis, points, data, results, and many more, on a piece of paper.
2. Organized them into some storyline.
3. For each part of the story, try to put in some simple details. (No need to write abstract at this point.)
4. Hand them to advisor and get feedback. Repeat untill everyone agree on the outline.



I love this part of the paper:

>  Do not, under any circumstances, wait until the collectionof data is "complete" before starting to write an outline. Noproject is ever complete, and it saves enormous effort andmuch time to propose a plausible paper and outline as soon asyou see the basic structure of a project. 


<figure markdown="1">
<figcaption>
Outline Template
</figcaption>
![]({{site.url}}/images/posts/how-to-outline/how-to-outline.png)
</figure>



The TeX code for this template is shown below.

{% highlight tex %}

\documentclass[%
 reprint,
 amsmath,amssymb,
 aps,
]{revtex4-1}

\usepackage{graphicx}% Include figure files
\usepackage{dcolumn}% Align table columns on decimal point
\usepackage{bm}% bold math

\begin{document}


\title{How to Write an Outline}% Force line breaks with \\
\thanks{Notes of \em{Whitesides' Group: Writing a Paper} }%

\author{Determine the authors}



\begin{abstract}
Do not write abstract until the end.

\end{abstract}

\maketitle



\section{\label{introduction}Introduction}

Introduction should be written down during the outline phase.


\begin{enumerate}
    \item Objectives
    \item Motivation
    \item Background
    \item Highlight: What should the reader pay attention to?
    \item Summary: What should the reader expect as a conclusion?
\end{enumerate}


\section{\label{background}Background}

\section{\label{results}Results and Discussions}


\begin{itemize}
\item Collect the key points and results.
\item Place figures and plots in the right order.
\item Show important results first.
\end{itemize}


George Whitesides addressed some writing styles.\cite{Whitesides2004}

\begin{enumerate}
    \item Put a noun right after the word \em{this}.
    \item Experimental results always past tense.
    \item When comparing, put the two objects being compared explicitly in one sentence. 
\end{enumerate}



\section{\label{conclusion}Conclusion}

\begin{itemize}
    \item Do not repeat what is in the results section.
    \item Higher level discussions.
    \item Show significance of this paper.
\end{itemize}



\medskip
 
\begin{thebibliography}{9}
\bibitem{Whitesides2004}
Whitesides, G. M.
\textit{Whitesides' Group: Writing a Paper}. 
Advanced Materials, 16(8):1375--1377, 2004.
\end{thebibliography}




\end{document}

{% endhighlight %}




