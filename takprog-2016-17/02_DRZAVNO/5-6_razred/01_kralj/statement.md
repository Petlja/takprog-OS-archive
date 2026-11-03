---
timelimit: 0.5
memlimit: 64
---
Na šahovskoj tabli 8×8 nalazi se samo kralj. Kralj se u svakom potezu može pomeriti jedno polje i to na bilo koje susedno polje onom polju na kojem stoji, u bilo kom od 8 pravaca (pravo, ali i dijagonalno). Treba da napišeš program koji izračunava na koliko se polja kralj može pomeriti ako kreće sa nekog datog polja? Program treba da ispiše broj poteza kralja za svako od tri učitana polazna polja (ta tri slučaja su nezavisna).

## Ulaz

Na standardnom ulazu su u tri reda date tri polazne pozicije kralja. Pozicije su date pomoću dva karaktera, u formatu `kv` gde `k` je obeležje kolone (malo slovo engleske abecede od `a` do `h`), `v` je obeležje vrste (cifra od `1` do `8`).

## Ulaz

Na standarni izlaz ispisati tri cela broja, svaki u posebnom redu koji predstavljaju broj poteza kralja sa svake od tri učitane pozicije.

## Primer

### Ulaz

```
a8
b2
h3
```

### Izlaz

```
3
8
5
```

Sa polja `a8`, kralj može da se pomeri na polja `a7`, `b8` i `b7`, sa polja `b2` na polja `a1`, `a2`, `a3`, `b1`, `b3`, `c1`, `c2` i `c3`, dok sa polja `h3` može da se pomeri na polja `h2`, `h4`, `g2`, `g3` i `g4`.
