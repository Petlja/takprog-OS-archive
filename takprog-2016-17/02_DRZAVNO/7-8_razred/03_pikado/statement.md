---
timelimit: 1.3
memlimit: 64
---
Kružna meta koju koristimo u specijalnom pikadu izdeljena je u koncentrične kružne prstenove. Širina prstenova može biti međusobno različita. Napiši program koji za datu tačku određuje zonu kojoj pripada.

## Ulaz

Sa standardnog ulaza unosi se broj $n$ ($1 \leq n \leq 50000$), a zatim i $n$ realnih brojeva zaokruženih na dve decimale, svaki u posebnom redu, koji predstavljaju širine svih kružnih prstenova. Nakon toga se unosi broj $m$ ($1 \leq m \leq 50000$) i zatim $m$ parova koordinata tačaka (u svakom redu se nalaze dva realna broja zaokružena na dve decimale, razdvojena sa po jednim razmakom).

## Izlaz

Na standardni izlaz ispisati $m$ linija. U svakoj liniji ispisati ili indeks zone (broje se od nule) kojoj tačka pripada ili tekst `izvan` ako je tačka izvan poslednje zone. Ako je tačka na granici dve zone, smatrati da pripada unutrašnjoj.

## Primer

### Ulaz

```
3
3.0
1.0
6.0
3
2.0 0.0
18.0 20.0
4.0 4.0
```

### Izlaz

```
0
izvan
2
```
