---
layout: article
title: "2D Ising Model (Triangle Lattice)"
date: 2011-01-08
modified: 2011-01-08 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: sciencecn
summary: Using the simplest program to calculate the 2D Ising model upon triangle lattice.
---



<embed src="{{ site.url }}/images/posts/2d-ising-model-triangle/2D_Ising_ModelTriangle.pdf" width="100%" height="800px">

* Hamiltonian:

$$
H=J\sum\limits_{i,j}{ {s_{ i } }{s_{j} } }
$$

* Lattice

<figure markdown="1">
![]({{ site.url }}/images/posts/2d-ising-model-triangle/Fig3-Triangle-2D-Ising.jpg)
<figcaption>
Triangle 2D Ising Model
</figcaption>
</figure>


* Summary image:

<figure markdown="1">
![]({{ site.url }}/images/posts/2d-ising-model-triangle/2D_Triangle_Ising_Model.jpg)
<figcaption>
Results
</figcaption>
</figure>



* Code

{% highlight c %}
/*This program calculates the energy, heat capacity, magnetization, magnetic permitivity.*/
/*Boundary condition: periodic boundary condition.*/
/*In this program, J&k are put into T. To fill it to the expressions, just consider the dimensions.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define L 32
#define NGL   100000            /*Samples Neglected*/
#define N_t 5100000         /*Total samples*/
#define N (N_t-NGL)
#define T_i 0.5
#define T_f 10.5
#define Tstep 0.05
#define SIZE_T 500          /*The size of emcx in T axis. Check this before compiling!*/
#define SIZE_R 60           /*The size of emcx in R axis. Check this before compiling!*/
#define R_i -6                      /*Ration of J2/J1. Initial value.*/
#define R_step 0.1              /*step*/
#define R_f 0                   /*End of R*/

int sum_M;
int s[L][L];                            /*Size of the lattice*/
double sum_E;
double T;

struct Obsv
{
    double C;
    double X;
    double M;
    double E;
};

void Inist();
void Mag();
void Energy(double R);
void MCP(double R);
struct Obsv Cac_obsv(double R);

int main()
{
    int i,j;
    double R;
    struct Obsv emcx[SIZE_T][SIZE_R];
    FILE *ft,*fm,*fx,*fc,*fe,*fr;
    fr=fopen("R.txt","w");
    ft=fopen("T.txt","w");
    fx=fopen("X.txt","w");
    fc=fopen("C.txt","w");
    fm=fopen("M.txt","w");
    fe=fopen("E.txt","w");

    R=R_i;
    srand(time(NULL));
    for(j=0;R<=R_f;j++)
    {
        T=T_i;
        for(i=0;T<=T_f;i++)
        {
            Inist();
            emcx[i][j]=Cac_obsv(R);
            fprintf(fr,"%f\n",R);
            fprintf(ft,"%f\n",T);
            fprintf(fx,"%f\n",emcx[i][j].X);
            fprintf(fc,"%f\n",emcx[i][j].C);
            fprintf(fm,"%f\n",emcx[i][j].M);
            fprintf(fe,"%f\n",emcx[i][j].E);
            printf("-------------\n");
            printf("R=%f\n",R);
            printf("T=%f\n",T);
            printf("X=%f\n",emcx[i][j].X);
            printf("C=%f\n",emcx[i][j].C);
            printf("M=%f\n",emcx[i][j].M);
            printf("E=%f\n",emcx[i][j].E);
            T = T+Tstep;
        }
        R+=R_step;
    }
    fclose(ft);
    fclose(fx);
    fclose(fc);
    fclose(fm);
    fclose(fe);
    printf("The End!\n");
}

void Inist()
{
    int i,j;                                      
    for(i=0;i<L;i++)
    {
        for(j=0;j<L;j++)
        {
            s[i][j]=1;
        }
    }
}


void MCP(double R)
{
    int i,j;
    double sum,dE;
    i=rand()%L;
    j=rand()%L;

    sum=s[i][j]*(s[(L+i-1)%L][j]+s[(i+1)%L][j]+s[i][(j-1+L)%L]+s[i][ (j+1)%L]+R*(s[(i+1)%L][(j-1+L)%L]+s[(i-1+L)%L][(j+1)%L]));
    //printf("chk2.sum=%d\n",sum);
    //switch(sum)
    //{
    //  case 4: dE= 8; break;
    //  case 2: dE= 4; break;
    //  case 0: dE= 0; break;
    //  case -2: dE= -4; break;
    //  case -4: dE= -8; break;
    //  default: printf("sum=%d. Attention!\n",sum); break;
    //}

    dE=2*sum;
    if( dE>0 )
    {
        if(((double)rand()/RAND_MAX)<=exp((-1.0)*dE/T))
        {
            s[i][j]=-s[i][j];
            sum_M+=2*s[i][j];
            sum_E+=dE;
        }
    }
    else
    {
        s[i][j]=-s[i][j];
        sum_M+=2*s[i][j];
        sum_E+=dE;
    }
 }

struct Obsv Cac_obsv(double R)
{
    int i;
    double E_avg=0.0;
    double E_as=0.0;
    double M_avg=0.0;
    double M_as=0.0;
    struct Obsv emcx;
    Mag();
    Energy(R);

    for(i=0; i<N_t; i++)
    {
        MCP(R);
        if(i>=NGL)
        {
            E_avg+=(double)sum_E/N;
            E_as+=(double)sum_E*sum_E/N;
            M_avg+=(double)sum_M/N;
            M_as+=(double)sum_M*sum_M/N;
        }
    }
    emcx.E=E_avg;
    emcx.M=M_avg;
    emcx.C=(E_as - E_avg*E_avg)/T/T;
    emcx.X=(M_as - M_avg*M_avg)/T;

    return emcx;
}


void Mag()
{
    int i,j;
    int dM_tmp=0;
    for(i=0;i<L;i++)
    {
        for(j=0;j<L;j++)
            dM_tmp+=s[i][j];
    }
    sum_M=dM_tmp;
}

void Energy(double R)
{
    double dE_tmp=0.0;
    int i,j;
    for(i=0;i<L;i++)
    {
        for(j=0;j<L;j++)
        {
            dE_tmp+=0.5*(s[i][j]*(s[(i-1+L)%L][j]+s[(i+1)%L][j]+s[i][(j-1+L)%L]+s[i][(j+1)%L])+R*s[i][j]*(s[(i+1)%L][(j-1+L)%L]+s[(i-1+L)%L][(j+1)%L]));
    //      printf("chk1.dE_tmp=%f\n",dE_tmp);
        }
    }
    sum_E=dE_tmp;
}
{% endhighlight %}
