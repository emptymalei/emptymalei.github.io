---
layout: til
title: "Interesting Facts on Eigenstates"
modified: 2015-09-02
author: OctoMiao
comments: true
categories: physics
filter: physics
summary: Interesting Facts on Eigenstates
---


The eigenstates of a matrix

$$
\begin{pmatrix}
E_1 & 0 \\
0 & E_1
\end{pmatrix}
$$

are

$$
\begin{pmatrix}
1 \\ 0
\end{pmatrix}, \qquad \begin{pmatrix}
1 \\ 0
\end{pmatrix}.
$$

However if we put in two real off-diagonal elements

$$
\begin{pmatrix}
E_1 & \epsilon \\
\epsilon & E_1
\end{pmatrix},
$$

the eigenstates becomes

$$
\begin{pmatrix}
1 \\ -1
\end{pmatrix}, \qquad \begin{pmatrix}
1 \\ 1
\end{pmatrix}.
$$


If we are talking about real matrix,

$$
\begin{pmatrix}
E_1 & 0 \\
0 & E_2
\end{pmatrix}
$$

even though it is true that the eigenstates are

$$
\begin{pmatrix}
1 \\ 0
\end{pmatrix}, \qquad \begin{pmatrix}
1 \\ 0
\end{pmatrix},
$$

the eigenstates are not that simple if we add in off-diagonal elements that make sure the matrix is still Hermitian.

In fact the eigenstates for the eigenequation

$$
\begin{pmatrix}
E_1 & \epsilon \\
\epsilon^* & E_2
\end{pmatrix} \begin{pmatrix}
a \\ b
\end{pmatrix} = \lambda \begin{pmatrix} a \\ b  \end{pmatrix},
$$

is given by

$$
(E_1-E_2) a b + \epsilon b^2 - \epsilon^* a^2 = 0,
$$

where $b^2 = b \cdot b$ is not the modulus squared.
