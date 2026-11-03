---
timelimit: 1
memlimit: 64
---
Takmičar Šlemiel je odlučio da osveži boju na delovima školske ograde napravljene od dasaka. Daske se nalaze na rastojanju 1 centimetar jedna od druge. Ogromna nepokretna cisterna sa bojom smeštena je 1 centimetar ispred prve daske. U cisterni se nalazi dovoljno boje za farbanje cele ograde. Šlemiel koristi četku i kofu koja sadrži dovoljnu količinu boje da se ofarba `K` dasaka. Na početku, Šlemiel kreće od lokacije gde se nalazi cisterna. Na kraju farbanja, Šlemiel ostavlja kofu i četku do cisterne. Napišite program koji nalazi minimalni put, koji će preći Šlemiel od početka farbanja pa sve dok ne završi farbanje na opisani način.

## Ulaz

U prvom redu standardnog ulaza dati su celi brojevi `M` i `K` ($0 < M,K ≤ 10^5$). Ceo broj `M` predstavlja broj delova ograde koji će se bojiti. U narednih `M` redova su data po dva cela broja $a_i$ i $b_i$ – rastojanja u centimetrima od cisterne do prve i do poslednje daske u svakom zadatom delu ograde. ($b_{i-1} \le a_i \leq b_i, 
0 \le a_i,b_i \leq 10^10$).

## Izlaz

Na standarni izlaz ispisati jedan ceo broj, najkraći put (u centimetrima).

## Primer 1

### Ulaz

```
1 3
1 1
```

### Izlaz

```
2
```

## Primer 2

### Ulaz

```
1 3
1 2
```

### Izlaz

```
4
```

## Primer 3

### Ulaz

```
1 3
1 4
```

### Izlaz

```
10
```

## Primer 4

### Ulaz

```
1 3
1 5
```

### Izlaz

```
14
```

## Primer 5

### Ulaz

```
4 3
1 4
6 6
8 10
12 14
```

### Izlaz

```
64
```
