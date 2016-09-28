---
layout: til
title: "The Great Chrome Dev Tool"
date: 2016-09-28
modified: 2016-09-28
author: OctoMiao
comments: true
categories: programming
filter: programming
summary: How to use the chrome dev tool wisely
---

Chrome dev tool is not only super useful for front-end dev but also helpful to users.

## contentEditable

By setting

```
document.body.contentEditable = true
```

one can just start edit the content of the whole web page.

## Display Data in a Table

Reading nested lists can be painful. Suppose we have an array

```
var arraydata = [{a:1,b:2},{a:2,c:5},{b:4,e:1}]
```

the function

```
console.table(arraydata)
```

give us a table that is associated with the array.



<figure markdown="1">
<figcaption>
console.table()
</figcaption>
![](../assets/programming/chrome-dev-tools-console.table.png)
</figure>


## Clear the Output

Simple and easy

```
clear()
```


## inspect()

```
inspect($('.sidebar'))
```

will list all the element that has class `sidebar`.

<figure markdown="1">
<figcaption>
inspect($('.sidebar'))
</figcaption>
![](../assets/programming/chrome-dev-tools-inspect.png)
</figure>
