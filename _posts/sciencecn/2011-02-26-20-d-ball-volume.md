---
layout: article
title: "Volume of 20D Ball"
date: 2011-01-08
modified: 2011-01-08 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: sciencecn
summary: Using the simplest program to calculate the 2D Ising model upon triangle lattice.
---


估算一下高维球体的体积。用c写的。

{% highlight c %}
/*This program trys to calculate the volume of a 20-dim ball with a Monte Carlo method*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define L 2 /*l is the half length of the boxes*/
#define R 1 /*R is the radius of the ball. Should be half of L.*/
#define d 20 /*d is the dimension of the ball*/
#define n 100000.0 /*n is the numbers of total samples*/
#define o 100 /*The box is sliced into o pieces.*/

void main()
{
clock_t start,finish;
//start=clock();
double duration;
int i,j,k,l,m,p,s;
double x1,x2,x[d],a,V[o],V_tot;
start=clock();
srand((unsigned)time(NULL));
j=0;
a=1/sqrt(d)*R;
p=0;
for(p=0;p {
m=0;
i=0;
for(i=0;i<=n;i++)
{
//srand((unsigned)time(NULL));
k=0;
x[k]=(double)rand()/RAND_MAX*L/2/o+(double)p*L/2.0/o;
k=k+1;
while(k<=d-1)
{
//srand((unsigned)time(NULL));
x[k]=(double)rand()/RAND_MAX*L/2.0/o*(p+1);
k++;
}
x2=0;
for(l=0;l<=d-1;l++)
{
x2=x2+x[l]*x[l];
}
x1=sqrt(x2);
if(x1<=R)
{
m=m+1;
}
}
V[p]=(double)m/n*(L/2.0/o)*pow((L/2.0/o*(p+1)),d-1)*d*pow(2,d); /*p is growing from 0*/
printf("%lf\n",V[p]);
}
V_tot=0;
for(s=0;s {
V_tot=V_tot+V[s];
s++;
}
printf("%e\n",2*V_tot);
finish=clock();
duration=(float)(finish-start);
printf("%f",duration);
}
{% endhighlight %}
