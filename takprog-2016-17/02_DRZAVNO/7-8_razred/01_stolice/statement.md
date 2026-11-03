---
timelimit: 0.5
memlimit: 64
---
Na jednom kvadratnom metru svečane sale možemo da postavimo ili jedan sto kvadratnog oblika ili jednu stolicu. Oko svakog stola može da se postavi najviše 8 stolica (po jedna uz svaku stranu i po jedna uz svako teme kvadrata). Napiši program koji će izračunati najveći broj stolica u sali, ako nijednu stolicu nije moguće postaviti bez pripadajućeg stola.

## Ulaz

U jedinom redu standardnog ulaza dati su dužina svečane sale $R$ i širina svečane sale $K$ razdvojeni razmakom. Obe dimenzije $R$ i $K$ su izražene u celom broju metara i važi $0 < R, K < 1000$.

## Izlaz

Na standardni izlaz ispiši jedan ceo broj koji predstavlja najveći mogući broj stolica.

## Primer 1

### Ulaz

```
3 4
```

### Izlaz

```
10
```

Jedan mogući raspored stolica i stolova je sledeći (stolice su obeležene znakom `+`, a stolovi znakom `o`).

```
++++
+o+o
++++
```

Raspored

```
++++
+o++
++++
```

nije ispravan jer stolice u poslednjem redu nemaju pridružen sto.

## Primer 2

### Ulaz

```
5 5
```

### Izlaz

```
21
```

## Primer 3

### Ulaz

```
100 101
```

### Izlaz

```
8944
```
