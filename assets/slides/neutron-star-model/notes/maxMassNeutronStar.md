# Max mass of neutron stars


## Most General

**Method 1**: 

\begin{align}
R & \gt \frac{2GM}{c^2} \\
M& \gt \frac{4\pi}{3} R^3 \rho \\
& \gt \frac{4\pi}{3} \rho \left(\text{put R here}\right)^3
\end{align}

\begin{equation}
M\lt\frac{c^3}{G} \sqrt{\frac{3}{32\pi}\frac{1}{G\rho}} 
\end{equation}

is about $7M_\odot$


**Method 2**:

From GR,

\begin{equation}
R\gt \frac{9}{4} GM/c^2
\end{equation}

$M\lt 6M_\odto$

## Rigorous Considerations

The upper limit of neutron star mass can be determined generally.



3. causality condition
   Once pressure and density are determined, we can find out the sound speed. The physics is that the sound speed can not be greater then speed of light $c$. So this sets an upper bound for $dP/d\rho$.
2. stability. Another point is that if we increase the density, the pressure should also increase. Otherwise,
4. some EoS
1. GR/OV equation



Rhoades & Ruffini found the condition that maximizes the mass is 

\begin{equation}
P = P_0 + (\rho -\rho_0)c^2 .
\end{equation}


### Nauenberg & Chapline

This method is basically a stability analysis.

The idea of stability analysis is that we find out the total energy which can change when we add or remove a baryon. Then we choose some parameter and make the first derivitive of total energy 0 and second derivative no less then 0.

Here we use the gravitational mass as the total energy.

1. To find the mass, we just integrate density over radius. (Eucleadian way)
2. Because we are differentiating with a fix baryon number, we need to find out the total baryon number. Here $\chi$ is defined in this way. **The reason we can do this is that this $2M/r$ can only be less than 1 for objects without horizon.**
3. From fluid dynamics, we know the first law.



So we have 5 eqns but 6 variables. We can find out the relation between them. Here is the equation of state. Now we find out a very general equatioin of state allowed for equilibrium. 

**Does this make sense? We can plot out $\xi(\chi)$. This function can have values from 0 to infinity. Sure. That means all kinds of $P/\rho$ values can be reached.**

##### Max M/R

Max $\xi$ -> Max $\chi$ -> Max $M/R$

##### Max Mass

**That the upper bound for $M/R$**, how do we find out the upper bound of mass?

Define an upper limit for sound speed $v$ for $\rho\gt\rho_0$. That makes

$$P - P_0 \leq v^2(\rho-\rho_0)$$

By definition, at critical point

\begin{equation}
\frac{\xi_c+1}{\xi_c}v^2=\Gamma_c
\end{equation}

The stiffer the higher mass so 

\begin{align}
\rho_c & \geq \rho_0-P_0/v^2+P_c/v^2 \\
P_c & = \xi \rho_c
\end{align}

Then 

\begin{equation}
\rho_c\geq \frac{\rho_0-P_0/v^2}{1-(\xi_c+1)/\Gamma_c}
\end{equation}

We have

\begin{align}
M & = 4\pi/3\times\rho_c R^3 \\
\sin^2\chi_c & = 2M/R
\end{align}

$\rho_c$, $\chi_c$ (derived from $\xi_c$) are known, then we have only $M$ and $R$. Two equations two variables.




### Comments

    Stiff equation of states predict $M_{\text{max}} \in [1.5,2.7]M_\odot $





> Read on [StackEdit](https://stackedit.io/viewer#!url=https://raw.githubusercontent.com/emptymalei/compactobjects/master/neutronStarModel/maxMassNeutronStar.md).