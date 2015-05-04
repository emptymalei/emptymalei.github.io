---
layout: article
title: "Rocket And Orbit Basics | Physics of Kerbal Space Program"
comments: true
---

This section will illustrate the physics behind the ascent stage of launching your rocket.


## How Does a Rocket Work

The basic idea behind most rockets is Newton's second law, which shows that force is the rate of momentum change. Now consider a rocket which is composed of fuel and payload, to have a simple model, we consider the case in vacuum no gravity environment.

The equation for a rocket is called the rocket equation.

$$m\frac{dv}{dt}=-v_e\frac{dm}{dt},$$

where $v_e$ is the exhaust velocity of the desposed gas in center of mass frame, while $m$ is the mass of the rocket at time $t$. This equation does make sense because more mass dropped with a higher velocity, the rocket itself gains more velocity which is a trivial idea.

The solution of the equation becomes

$$v(t)-v(t_0)=-v_e \ln{\frac{m(t)}{m(t_0)} }.$$

This equation is the key to find out many things for a flight. One of them is the propellant needed to achieve an orbit.



> **Derivation of rocket equation**
> 
> To derive the equation, we start from Newton's second law, which is
> 
> $$\vec F_{ext} = \frac{d\vec p}{dt}.$$
> 
> As a definition for momentum in non-relativistic classical mechanics,
> 
> $$\vec p = m \vec v.$$
> 
> Plug in this expression, we have
> 
> $$\vec F_{ext} =  m\frac{dv}{dt} + v \frac{dm}{dt}.$$
> 
> What happens next? We have to stop the math and think about the meanings of the equation. As you can recognize, the first term on the RHS is the $m \vec a$, here m should be the mass of the rocket at time $t$ and this $\vec a$ is the acceleration of the rocket itself. 
> 
> 
> What is the second term? It is the effective force produced by propellant, thus the velocity is actually the exhaust velocity of the propellant in center of mass frame, in other words, the relative velocity between the rocket and the propellant.


### Orbit

Orbit around a planet or moon is in general elliptical. The key of this orbit is conservation of energy. Two kinds of energy is in use in the dynamics, which are the kinetic energy of the ship and the gravitational energy.

The kinetic energy is

$$E_k = \frac{1}{2}mv^2.$$

Gravitational potential energy is

$$E_g = - \frac{G M m}{r},$$

where $M$ is the mass of the central object like Kerbin.



#### Circular Orbit

The good thing about circular orbit is that it preserves a rotational symmetry, which means the magnitude of its velocity is all the same on the orbit. Throught this simple symmetry argument, we could see that the magnitude of the velocity is given by the circumference divided by the period,

$$v = \frac{2\pi r}{T} = \omega r,$$

where $\omega = \frac{2\pi}{T} $ is the angular velocity.

By conservation of energy, we should have the total energy

$$E = E_k+E_g.$$

What's more, the dynamics is given by Newton's second law, in the language of math,

$$\frac{GMm}{r^2} = m \frac{v^2}{r}.$$

Manipulating this equation, one find that

$$E_g = -2 E_k ,$$

for circular orbits only.

This is a magnificent relation. It's related to **virial theorem** which is the key to many phyiscs in general.


> **Virial Theorem**
> 
> For those who is interested in physics, virial theorem is very important in almost every field of physics research. It is important is quantum mechanics, astrophyiscs, astronomy, cosmology, etc.


#### Parameters

An orbit in vacuum and all above the ground is characterised by the following parameters.

1. Semimajor axis,
2. Inclination,
3. Argument,
4. ...
