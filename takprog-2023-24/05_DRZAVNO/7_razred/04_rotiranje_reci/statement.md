---
timelimit: 0.5
memlimit: 64
---
*Аутор: Филип Марић*

Када се притисне тастер на тастатури, прво слово сваке речи у тексту
се премести на последње место те речи. Колико је пута потребно
притиснути тастер да би се реченица вратила у почетно стање?

## Улаз

Са стандардног улаза се учитава једна линија текста која је састављена
од малих слова енглеске абецеде и размака и има највише $10^6$
карактера. Сви примери су такви да се реченица враћа у првобитно стање
након највише $10^{18}$ притисака тастера.

## Излаз

На стандардни излаз исписати најмањи број притисака тастера (већи од 0) потребних да се реченица врати у првобитно стање.

## Пример 1

### Улаз

~~~
mala sirena zivi na dnu mora
~~~

### Излаз

~~~
12
~~~

### Објашњење 

Притисцима тастера добијају се наредне реченице

~~~
mala sirena zivi na dnu mora
alam irenas iviz an nud oram
lama renasi vizi na udn ramo
amal enasir iziv an dnu amor
mala nasire zivi na nud mora
alam asiren iviz an udn oram
lama sirena vizi na dnu ramo
amal irenas iziv an nud amor
mala renasi zivi na udn mora
alam enasir iviz an dnu oram
lama nasire vizi na nud ramo
amal asiren iziv an udn amor
mala sirena zivi na dnu mora
~~~

## Пример 2

### Улаз

~~~
sestaci sedmaci i osmaci vole informatiku
~~~

### Излаз

~~~
924
~~~

## Пример 3

### Улаз

~~~
dada tata i mama
~~~

### Излаз

~~~
2
~~~

**Напомена:** У 50% тест-примера речи нису периодичне. У 60% тест-примера све речи су краће од 100 карактера. 
