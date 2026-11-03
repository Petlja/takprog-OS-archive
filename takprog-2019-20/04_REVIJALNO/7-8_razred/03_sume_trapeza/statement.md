---
timelimit: 0.2
memlimit: 64
---
*Аутор: Милан Вугделија*

На основу квадратне матрице $A_{nxn}$ формирати матрицу $B_{nxn}$
такву да је $b_{i,j}$ једнак суми оних $a_{p,q}$ за које је $p
\leq i$, а $p+q \leq i+j$. Ти елементи су смештени у правоугаоном
трапезу, како је приказано на слици.

$
\begin{array}{|l|l|l|l|l|l|l|l|}
\hline
\mathbf{a_{0,0}} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{a_{0, i+j}} &  \hspace{8mm} \\ \hline
\mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{a_{1, i+j-1}} &  & \\ \hline
\mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} &  &  &  \\ \hline
\mathbf{\ldots} & \mathbf{\ldots} & \mathbf{\ldots} & \mathbf{a_{i-1,j+1}} & \  & \  & \  & \  \\ \hline
\mathbf{a_{i, 0}} & \mathbf{\ldots} & \mathbf{a_{i, j}} & \  & \  & \  & \  & \  \\ \hline
\  & \  & \  & \  & \  & \  & \  & \  \\ \hline
\  & \  & \  & \  & \  & \  & \  & \  \\ \hline
\end{array}
$

## Улаз

Са стандaрдног улаза се учитава број $n$ ($3 \leq n \leq 750$), а
затим и квадратна матрица димензије $n 	\times n$ која садржи бројеве између 0 и 9.

## Излаз

На стандардни излаз исписује се матрица сума трапезних области.

## Пример

### Улаз

~~~
4
1 0 5 1
3 1 2 1
4 1 0 2
0 1 3 4
~~~

### Излаз

~~~
1 1 6 7
4 10 13 14
14 18 19 21
18 20 25 29
~~~
