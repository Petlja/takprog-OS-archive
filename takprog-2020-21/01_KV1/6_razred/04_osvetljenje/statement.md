---
timelimit: 0.1
memlimit: 4
---
There are  $N$ ($1 \leq N \leq 50$) LED disco strobes numbered from 1 to $N$.

For each LED disco strobe it is known whether it's turned on or off.
You can change the state of LED disco strobe $i$ if LED disco strobe $i+1$ is turned on and
LED disco strobes $i+2, i+3, ... N$ are turned off. 
This rule is not targeted toward LED
disco strobe $N$, which can be switched on or off voluntarily.


Write the program that prints the minimum number of switches you need to make in
order to turn off all the LED disco strobes.

## Input

The standard input contains a single string of $N$  binary digits (0 or 1). Each LED disco
strobe is represented by a binary digit.
A LED disco strobe that is switched off is represented by a 0, and one that is switched
on by a 1.


## Example 1

### Input
~~~
1101
~~~
### Output
~~~
9
~~~

## Example 2
### Input 
~~~
1011
~~~
### Output
~~~
13
~~~
## Example 3
### Input
~~~
1001101011
~~~
### Output
946
