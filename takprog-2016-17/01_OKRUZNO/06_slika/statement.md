---
timelimit: 1
memlimit: 64
---
U programu za obradu slika, moguće je vršiti pravougaonu selekciju delova slike (pri čemu su stranice selekcije uvek paralelne ivicama slike). Istovremeno je moguće selektovati više pravougaonih oblasti. Pera je selektovao dve pravougaone oblasti i zanima ga broj piksela koji se nalaze u njihovom preseku.

## Ulaz

Sa standardnog ulaza iz prve linije se učitavaju koordinate donjeg levog temena prve oblasti (broj piksela od leve ivice slike do leve ivice oblasti i broj piksela od donje ivice slike do donje ivice oblasti), njenu širinu i visinu (zadate brojevima piksela), a zatim se iz druge linije učitavaju isti podaci za drugu oblast.

## Izlaz

Na standardni izlaz se ispisuje broj piksela koji se nalaze preseku oblasti.

## Primer 1

### Ulaz

```
100 100 50 50
125 75 75 100
```

### Izlaz

```
1250
```

## Primer 2

### Ulaz

```
0 0 100 100
100 100 50 50
```

### Izlaz

```
0
```

## Primer 3

### Ulaz

```
0 0 100 100
20 20 30 30
```

### Izlaz

```
900
```
