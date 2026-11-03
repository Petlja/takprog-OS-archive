---
timelimit: 0.6
memlimit: 64
---
Takmičari su dobili `N` kartica, obeleženih brojevima od 1 do `N` koje moraju obojiti do kraja takmičarskog dana.  
Poznato je da među njima postoji `M` parova karti koje moraju biti obojene istom bojom. Napisati program koji pronalazi najveći broj broja manjih od `N` koje se mogu upotrebiti za bojenje svih karti.

## Ulaz

U prvom redu standardnog ulaza dati su celi brojevi `N` i `M` ($1 \leq N \leq 10^9, 1 \leq M \leq 10^5$). U narednih `M` redova su data po dva cela broja – obeležja dve karte, koje moraju da budu iste boje. Među datim parovima, neki parovi se mogu ponoviti.

## Izlaz

Na standarni izlaz ispisati jedan ceo broj, najveći broj boja koje se mogu upotrebiti za bojenje svih karti.

## Primer

### Ulaz

```
12 5
2 1
2 3
1 2
1 3
1 4
```

### Izlaz

```
9
```

Karte 1,2,3,4 se boje istom bojom. Zato je najveći ukupan broj boja 9.
