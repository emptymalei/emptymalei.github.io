## A Comment on Gravitational Energy in Neutron Stars

In TOV equations, we have this quantity defined as mass of the star

\begin{equation}
m(R) := 4\pi\int_0^{R} \rho(r) r^2 dr .
\end{equation}


This might seems a little bit like the definition of mass in Newtonian physics however it is becoming complicated in GR.

Volume element in GR is given by

\begin{equation}
\mathbf\epsilon = \sqrt{h}\mathrm dr \wedge \mathrm d\theta \wedge \mathrm d \phi ,
\end{equation}

where $h$ is the determinant of induced metric of surface of equal time.

In the case of Schwarzschild space time like a static star, the volume element becomes

\begin{equation}
\mathbf \epsilon = \left( 1 - \frac{2m(r)}{r} \right)^{-1/2} r^2\sin\theta \mathrm dr \wedge \mathrm d\theta \wedge \mathrm d\phi .
\end{equation}

So the actual mass of matter is

\begin{equation}
M_0(R) = 4\pi \int_0^R \rho(r) \left( 1 - \frac{2m(r)}{r} \right)^{-1/2} r^2\mathrm dr .
\end{equation}

Notice that the definition of mass function for a star is

\begin{equation}
M(R)= 4\pi \int_0^R \rho(r)  r^2\mathrm dr .
\end{equation}

For a asymptotically flat space time, total energy of the system including gravitational energy is well defined like the total mass function. So we can subtract the energy of matter to find out how do gravitation contribute to the total energy, which is exactly

\begin{equation}
M_G(R) := M(R)- M_0(R) = 4\pi \int_0^R \rho(r) \left[1 - \left( 1 - \frac{2m(r)}{r} \right)^{-1/2} \right] r^2\mathrm dr .
\end{equation}

Obviously this is negative! And as $m(r)$ gets larger, the contribution of gravitational energy becomes larger, which makes the total mass of the neutron star smaller eventually.

### About maximum mass of a star

In the simple model of homogeneous energy density stars, pressure at the center is

\begin{equation}
p_0 = \frac{\rho(1-Y)}{3Y-1}
\end{equation}

in which $Y=(1-2M/R)^{1/2}$. So we have a sigularity in the center pressure

\begin{equation}
Y=\frac{1}{3} .
\end{equation}

This means that in this simple model, there is a point that there is a maximum mass which make the pressure at the center infinite. If the mass goes a little bit higher, the star will collapse.


> View this file [here on StackEdit](https://stackedit.io/viewer#!url=https://raw.githubusercontent.com/emptymalei/compactobjects/master/neutronStarModel/gravitationalEnergy.md).
