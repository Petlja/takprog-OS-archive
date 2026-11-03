---
timelimit: 1
memlimit: 64
---
Broj $C$ je podbroj broja $B$, ako se broj $C$ može dobiti brisanjem nekih cifara broja $B$. Na primer, $C=538$ jeste podbroj broja $B=65713681$, dok 117 nije podbroj broja $B$. Neka je dat $N$-cifreni broj $X$. Označimo sa $X_K$ najveći $K$-cifreni podbroj broja $X$. Napišite program koji odgovara na $M$ upita, gde svaki od upita sadrži dva broja $K$ i $L$. Svaki upit zahteva odgovor na sledeće pitanje „Koja je $L$-ta cifra sleva broja $X_K$ ?“.

## Ulaz

U prvom redu standardnog ulaza se nalazi $N$-cifren ceo pozitivni broj $X$. U drugom redu standardnog ulaza se nalazi ceo pozitivan broj $M$ – broj upita. U svakom od sledećih $M$ redova se nalazi po jedan upit – sa po dva cela pozitivna broja $K$ i $L$, razdvojenih razmakom.

## Izlaz

U jedinom redu standardnog izlaza, program treba da ispiše svih $M$ cifara (bez blanko karaktera i drugih razmaka između njih): $i$-ta cifra tog ispisa predstavlja odgovor na $i$-ti upit. Ograničenja: $1 \le N \le 10^5, 1 \le M \le 10^5, 1 \le K \le N, 1 \le L \le K$.

## Primer

### Ulaz

```
12375926
7
2 2
2 1
3 1
1 1
4 2
5 2
7 4
```

### Izlaz

```
6999955
```
