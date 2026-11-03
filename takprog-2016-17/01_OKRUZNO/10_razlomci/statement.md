---
timelimit: 1
memlimit: 64
---
Data su dva razlomka $\frac{a}{b}$ i $\frac{c}{d}$. Njihov zbir je takođe razlomak $\frac{e}{f}$ (neskrativ oblik razlomka tj. brojevi $e$ i $f$ su uzajamno prosti). Zbir zbira svih delioca za brojilac $e$ i zbira svih delioca za imenilac $f$ označimo sa $S$. Na primer, zbir razlomaka $1/5$ i $4/6$ je $13/15$, delioci broja $13$ su $1$ i $13$, a broja $15$ su $1$, $3$, $5$ i $15$, pa je $S = (1 + 13) + (1 + 3 + 5 + 15) = 38$. Napiši program koji za data dva razlomka nalazi traženi zbir S.

## Ulaz

U prvom redu standardnog ulaza dat je broj test primera $T$ ($1
\leq T \leq 10$), a zatim $T$ linija tako da svaka linija sadrži po dva ispravna razlomka (opisana redom sa 4 prirodna broja $a$, $b$, $c$, $d$, manja od 1000, razdvojena sa po jednim razmakom).

## Izlaz

Za svaki test, program na standardni izlaz ispisuje traženi zbir $S$, svaki u posebnom redu.

## Primer 1

### Ulaz

```
1
1 2 3 4
```

### Izlaz

```
13
```

## Primer 2

### Ulaz

```
3
2 5 3 6
3 7 10 3
12 123 56 567
```

### Izlaz

```
31
112
6230
```

## Primer 3

### Ulaz

```
1
1 10 1 4
```

### Izlaz

```
50
```
