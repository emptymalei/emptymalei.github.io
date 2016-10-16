---
layout: article
title: Physics Porn
comments: true
published: true
---


## Estimations


1. Given the energy and mass of the particle, estimate the velocity in relativistic case. (Hint: Use the relation $E = \gamma m c^2$.)




## Curriculum



* Classical Mechanics
  1. Newtonian Mechanics
  2. Lagrangian Method
  3. Hamiltonian Method
* Quantum Mechanics
  1. Plane Wave
  2. Harmonic Oscillator
  3. Picture
  4. Perturbation Theory
  5. Scattering Theory
* Statistical Mechnaics
  1. Equilibrium
  2. Stochastic Process
  3. Non-equilibrium
     a. Boltzmann H Theorem
     b. Master Equation
* Electrodynamics






## Fermi Problems


A collection of fermi problems


All Fermi problems and solutions are here in the [Issues](https://github.com/emptymalei/physicsporn/issues?labels=FermiProblems&page=1&state=open) page. Feel free to add more Fermi problems and solutions as issues and tag them with proper labels.



* What are Fermi problems？

[Fermi Problem on Wikipedia](https://en.wikipedia.org/wiki/Fermi_problem)：

> In Physics or engineering education, a Fermi problem, Fermi question, or Fermi estimate is an estimation problem designed to teach dimensional analysis, approximation, and the importance of clearly identifying one's assumptions. Named after physicist Enrico Fermi, such problems typically involve making justified guesses about quantities that seem impossible to compute given limited available information.

* How to find Fermi problems？

Try Google.

1. A chinese collection: [译言的费米问题](http://article.yeeyan.org/view/91267/121841)
2. [University of Maryland Fermi Problems Site](http://www.physics.umd.edu/perg/fermi/fermi.htm)


Here is a list.

1. [Estimate the number of square inches of pizza consumed by all the students at the University of Maryland during one semester](http://www.physics.umd.edu/perg/fermi/fermi.htm)
2. Force needed to pull apart Magdeburg hemispheres
   Q: The effect of air pressure was demonstrated in 1654 in Magdeburg, Germany with an impressive experiment. Two hollow metal hemispheres with a flat metal rim (flange) were placed together and the air removed from the interior with a primitive vacuum pump. The external pressure of the air pushed them together. When they tried to pull the hemispheres apart using two rings welded to the hemispheres, they could not be pulled apart even by a number of people pulling together. The sphere produced by putting the two hemispheres together is about the size of a basketball. Estimate the force needed to pull them apart.

   (From [UND Fermi Problems](http://www.physics.umd.edu/perg/fermi/fermi.htm) )
3. Estimate the lifetime of a free particle

   Q：

   Wave function of a free particle is：

   ![image](https://f.cloud.github.com/assets/663798/1960739/2dd5fa3c-8259-11e3-81b0-093a99399c29.png)

   Estimate the lifetime of the particle.

   A

   Method 1

   Estimate the uncertainty of energy $\Delta $E (for only the case  $\lvert \langle p \rangle = p_0 \rvert >> \Delta p$). Use $\Delta E \Delta t ~ \hbar /2$ to estimate lifetime. (This is true because the wave is Gaussian.)

   Method 2

   If we are not sure about the Energy-Time uncertainty, we should not use it.

   1. Estimate $\Delta E$.
   2. The wave function after lifetime $T$  becomes $\psi(T,x)$, which has no overlap with the original wave function $\psi(0,x)$. That is we can apply $\Delta x \Delta p ~ \hbar/2$ to get the lifetime, which is

   ![image](https://f.cloud.github.com/assets/663798/1960792/fabff7a4-825a-11e3-91ff-31f707cf4d26.png)
4. How many popcorns do we need to fill up a room?
   Q: How many popcorns do we need to fill up a room?

   A: We can find out a upper bound and lower bound for an ideal situation.

   To find out upper bound, we assume the total volume of popcorns with each one V_0 will be identical to the volume of the room (V).

   N_u * V_0 = V

   V_0 = 4\pi r^3 /3

   so the number of popcorns

   N_u = V/(V_0)

   The lower bound in this model is obtained by filling the room with cubes of length $2 r$.

   N_l * (2r)^2 = V

   then we have

   N_l = V / ( (2r)^2 ) .
5. Estimate the total number of hairs on your head
   **Q: Estimate the total number of hairs on your head.**

   A:

   (No bald allowed to answer this question.)

   [Interpretation]
   Total # of hairs (N) ~ Area of head covered with hairs (A) * Number density of hairs (n)

   [Hypothesis]
   1. A: My head is round; Hair covered a hemisphere;



   [Estimation of Values]
   Radius of head: R = 20cm.
   Number density: 100/cm^2
   pi ≈ 3

   [Results]
   N ~ 2 pi R^2 * n ~ 2 * 3 * (20)^2 * 100 ~ 240,000








## Math


### Dirac Delta

Dirac delta function is defined in the following way,

$$
\delta(x) = \begin{cases} + \infty, &\qquad x=0 \\ 0, &\qquad x\neq 0 \end{cases}
$$

$$
\int_{-\infty}^{+\infty} \delta(x) dx =1
$$

* [DiracDelta[x]](http://functions.wolfram.com/GeneralizedFunctions/DiracDelta/)


## Use two tweets to explain physics concepts.

200 字解释物理概念
