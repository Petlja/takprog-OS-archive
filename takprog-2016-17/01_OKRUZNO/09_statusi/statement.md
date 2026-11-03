---
timelimit: 1
memlimit: 64
---
Marija je objavila puno statusa na novoj društvenoj mreži, koju su isprogramirali njeni školski drugari, ali nikada nije objavila više od jednog statusa u toku jednog dana. Ispostavilo se, međutim, da je algoritam sortiranja koji su njeni drugari implementirali pogrešan i statusi se ne prikazuju u redosledu njihovog objavljivanja. Mariju zanima koliko je najviše statusa koji su prikazani jedan neposredno nakon drugog, a koji su objavljeni jedan nakon drugog (ne obavezno neposredno).

## Ulaz

Program sa standardnog ulaza učitava broj prikazanih statusa $n$ (prirodan broj manji od sto), a zatim $n$ linija koje sadrže (ispravne) datume objavljivanja statusa (dan, mesec i godinu), razdvojene sa po jednim razmakom, date u redosledu njihovog prikazivanja (od prvog do poslednjeg).

## Izlaz

Program na standardni izlaz ispisuje broj koji predstavlja dužinu najduže rastuće serije učitanih datuma.

## Primer 1

### Ulaz

```
5
1 3 2016
1 5 2016
17 4 2016
18 12 2016
4 1 2017
```

### Izlaz

```
3
```

## Primer 2

### Ulaz

```
6
11 4 2015
20 5 2015
11 7 2015
17 3 2015
11 2 2016
13 4 2015
```

### Izlaz

```
3
```

## Primer 3

### Ulaz

```
4
1 1 2016
7 2 2016
3 5 2016
4 2 2017
```

### Izlaz

```
4
```
