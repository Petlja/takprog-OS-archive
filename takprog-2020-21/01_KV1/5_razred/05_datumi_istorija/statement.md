---
timelimit: 1
memlimit: 64
---
As You know, the best tennis player in the world is a famous Serbian sportsman, Mr Novak Djokovic.
Also, the famous Serbian basketball player, Nikola Jokić has been named this year's NBA MVP.
Novak Djokovic and Nikola Jokic are chatting on ViberSport about the approaching Olympiad and dates. 

Novak Djokovic is called a joker. Guess what - Jokic has been also called The Joker.
Novak on the other hand is very fond of informatics and decides to give his friend an interesting numeric joke:
„Nikola, I’m writing to you  2 number sequences (8 digits per each). 
Each of those two sequences represents a valid date – the day is written by 2 digits, the month also by 2 digits and the year is written by 4 digits. The order of the day, the month and the year is unknown. That means both dates may be in one of the following formats DDMMYYYY, MMDDYYYY, DDYYYYMM, MMYYYYDD, YYYYDDMM or YYYYMMDD. Note that the dates may be in different formats each. I’ll also write down the number of the days between the dates. Knowing the number of the days of the period and the fact that both dates are from the same year, you must find both dates. To make your task easier I’ll tell you that there is only one solution to the task.” 

Please, help Nikola Jokic solving the task. Write a program, which given two groups of eight digits representing the scrambled dates and the number of the days between the two dates, determines and prints out both dates in format $DD-MM-YYYY$.


## Input

On the first row of the standard input, a sequence of eight digits is given 
– the first “scrambled” date (it may be the beginning or the ending date of the period). 

On the second row, another eight digits are given
– the second “scrambled” date (again it may represent the beginning or the ending date of the period).

A positive integer is given on the third row – the count of the days between the two dates. 

Both dates are counted in the final result (total number of days).

For each test case there is exactly one solution

   ($1 \le$ number of days in the period  $\le 350; $).
 
## Output

Your program should print two dates in format DD-MM-YYYY:
   on the first row – the beginning date of the period, 
	 and on the second row – the ending date of the period. 

### Example 1

### Input

03282021

20211205

46

### Output

28-03-2021 

12-05-2021

### Example 2

### Input

11111111

11111112

31


### Output

11-11-1111

11-12-1111
