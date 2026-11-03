---
timelimit: 1
memlimit: 64
---
Agencija angažuje glumce za različite uloge. Za svaku ulogu je dopušten određen raspon težina i određen raspon visina (na primer, za neke uloge se traže niski, deblji glumci, a za neke visoki, mršaviji, a za neke uloge je raspon prilično širok, jer fizički izgled glumca nije značajan). Agencija želi da sazna da li postoji neki raspon visina i težina koji bi kandidatu garantovao da može da konkuriše za sve uloge koje su trenutno u ponudi.

## Ulaz

Program sa standardnog ulaza učitava broj uloga, a zatim za svaku ulogu u posebnom redu minimalnu i maksimalnu težinu i minimalnu i maksimalnu visinu, razdvojene sa po jednim razmakom.

## Izlaz

Program na standardni izlaz ispisuje minimalnu i maksimalnu težinu i minimalnu i maksimalnu visinu traženog preseka raspona, odnosno tekst `nema` ako takav raspon ne postoji.

## Primer 1

### Ulaz

```
2
65 75 160 175
70 80 150 190
```

### Izlaz

```
70 75 160 175
```

## Primer 2

### Ulaz

```
3
55 70 170 190
60 85 150 175
50 65 140 160
```

### Izlaz

```
nema
```
