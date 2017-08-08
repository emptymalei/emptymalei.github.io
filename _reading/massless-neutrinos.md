---
layout: reading
title: "Massless Neutrino Model"
date: 2016-11-11
modified: 2016-11-11 #2014-08-27T11:57:41-04:00
author: OctoMiao
comments: true
categories: physics
filter: science # can be science or misc for now
summary: An idea about massless neutrino model
ref:
---




I recently came up with an idea that we can still preserve neutrino oscillations without neutrino mass.

The first thing to explain it the direct neutrino mass experiments. Review papers showed that the direct neutrino mass experiments only put upper limit not lower limit on it, [arXiv:1307.0101](https://arxiv.org/abs/1307.0101). So I think this idea generally is corret.

I can also explain solar neutrino data. Since DM particles are more concentrated in the Sun, since solar neutrinos doesn't oscillate out of the Sun. And inside the sun we can still have all kinds of resonances such as we had before.



So the oscillation frequency depends linearly on the number density of the DM particles. More DM particles inside the Sun will give us smaller oscillation wavelength and also bring the MSW region closer to the solar core. However, as long as it is adiabatic MSW transition, we won't have any problem because we always go to the eigenstates of interactions with DM.

## The Idea


### Assumptions

The idea is to assume that there are three different interactions with dark matter, so that the three different states of neutrinos experience different potentials as they are going through medium filled with dark matter particles.

We assume the three states are $\ket{\nu^a}$, $\ket{\nu^b}$, and $\ket{\nu^c}$. We can form a basis using these eigenstates of interactions with the dark sector, which we call dark basis. In this dark basis, the forward scattering with DM will generate a potential which is diagonalized,

$$
\begin{equation}
V = \begin{pmatrix}
v_1 & 0 & 0\\
0 & v_2 & 0\\
0 & 0 & v_3
\end{pmatrix}.
\end{equation}
$$

For simplicity we work in a two flavor scenario, so that the potential in dark basis is

$$
\begin{equation}
V = \begin{pmatrix}
v_1 & 0 \\
0 & v_2
\end{pmatrix}.
\end{equation}
$$

In vacuum, this potential is the Hamiltonian itself since we have assumed that neutrinos all have zero mass. Since the dark eigenstates are not necessarily the same as flavor eigenstates, we observe the flavor oscillations as long as $v_1\neq v_2$.

I can provide a mechanism that leads to $v_1\neq v_2$. The idea is that we might have three different kinds of dark matter, so that we have three different coupling strengths.

In the two flavor scenario we have the two couplings

$$
\begin{align}
v_1 =& g_{D_1} n_{D_1} \\
v_2 =& g_{D_2} n_{D_2} ,
\end{align}
$$

where we could have $g_{D_1}\neq g_{D_2}$ or $n_{D_1}\neq n_{D_2}$ or both of them. However, we would like to believe that $g_{D_1}=g_{D_2}\equiv g_{D}$.

### Solar Neutrinos and Atmospheric Neutrinos

Naively we could imagine that this doesn't break any of the theories about oscillations since dark matter is everywhere. Atmospheric neutrinos experience oscillations because the eigenstates of interactions with dark matter is different from flavor states. Even though the Sun accumulates dark matter but since solar neutrinos only oscillate inside the Sun then travel in the dark eigenstates. So the solar neutrino oscillations data would be perfectly fine with this new idea.


### Coupling Constant and Other Effects

How large is the coupling constant $g_{D}$? We basically need to match the so called mass squared difference with the new coupling.

$$
\begin{equation}
g_{D}\begin{pmatrix}
n_{D_1} & 0 \\
0 & n_{D_2}
\end{pmatrix} = \frac{1}{2E}\begin{pmatrix}
\Delta m_1^2 & 0 \\
0 & \Delta m_2^2
\end{pmatrix},
\end{equation}
$$

where $E$ is the energy of neutrinos.

We might have some ideas for $n_{D_1}$ and $n_{D_2}$, thus we could estimate $g_{D}$. But the interesting thing is, $g_{D}$ has to be a function of neutrino energy, i.e., $g_{D}(E)$. Can it work? If we do not have a natural mechanism for this energy dependence $\propto \frac{1}{E}$, this new idea won't work.


What's more, will it have any other effects? For example on solar neutrino signals?







## Update 2016-12-02

A paper that use a similar idea: http://journals.aps.org/prl/abstract/10.1103/PhysRevLett.117.231801
