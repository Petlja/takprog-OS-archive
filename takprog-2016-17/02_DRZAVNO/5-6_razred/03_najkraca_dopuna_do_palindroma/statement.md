---
timelimit: 0.1
memlimit: 64
---
Niska `abaca` nije palindrom (ne čita se isto sleva i sdesna), ali ako joj na početak dopišemo karaktere `ac`, dobijamo nisku `acabaca` koja jeste palindrom (čita se isto i sleva i sdesna). Napiši program koji za datu nisku određuje dužinu najkraćeg palindroma koji se može dobiti dopisivanjem karaktera s leve strane date niske.

## Ulaz

Sa standardnog ulaza se unosi niska sastavljena samo od $N$ ($1 \leq N
\leq 50\,000$) malih slova engleske abecede.

## Izlaz

Na standardni izlaz se ispisuje tražena dužina najkraće proširene niske koja je palindrom.

## Primer 1

### Ulaz

```
abaca
```

### Izlaz

```
7
```

## Primer 2

### Ulaz

```
abcdefg
```

### Izlaz

```
13
```

Rešenje je `gfedcbabcdefg`.

## Primer 3

### Ulaz

```
anavolimilovana
```

### Izlaz

```
15
```

Reč je već palindrom, pa se ne dopisuje ni jedan karakter i rešenje je `anavolimilovana`.

## Primer 4

### Ulaz

```
anavolimilovanakapak
```

### Izlaz

```
25
```

Rešenje je `kapakanavolimilovanakapak`.
