# [Silver II] Everlasting...? - 13817 

[문제 링크](https://www.acmicpc.net/problem/13817) 

### 성능 요약

메모리: 3808 KB, 시간: 280 ms

### 분류

수학(math), 정수론(number_theory), 소수 판정(primality_test), 에라토스테네스의 체(sieve)

### 문제 설명

<p>Everlasting Sa-Ga, a new, hot and very popular role-playing game, is out on October 19, 2008. Fans have been looking forward to a new title of Everlasting Sa-Ga.</p>

<p>Little Jimmy is in trouble. He is a seven-year-old boy, and he obtained the Everlasting Sa-Ga and is attempting to reach the end of the game before his friends. However, he is facing difficulty solving the riddle of the first maze in this game — Everlasting Sa-Ga is notorious in extremely hard riddles like Neverending Fantasy and Forever Quest.</p>

<p>The riddle is as follows. There are two doors on the last floor of the maze: the door to the treasure repository and the gate to the hell. If he wrongly opens the door to the hell, the game is over and his save data will be deleted. Therefore, he should never open the wrong door.</p>

<p>So now, how can he find the door to the next stage? There is a positive integer given for each door — it is a great hint to this riddle. The door to the treasure repository has the integer that gives the larger key number. The key number of a positive integer n is the largest prime factor minus the total sum of any other prime factors, where the prime factors are the prime numbers that divide into n without leaving a remainder. Note that each prime factor should be counted only once.</p>

<p>As an example, suppose there are doors with integers 30 and 20 respectively. Since 30 has three prime factors 2, 3 and 5, its key number is 5 − (2 + 3) = 0. Similarly, since 20 has two prime factors 2 and 5, its key number 20 is 5 − 2 = 3. Jimmy therefore should open the door with 20.</p>

<p>Your job is to write a program to help Jimmy by solving this riddle.</p>

### 입력 

 <p>The input is a sequence of datasets. Each dataset consists of a line that contains two integers a and b separated by a space (2 ≤ a, b ≤ 10<sup>6</sup> ). It is guaranteed that key numbers of these integers are always different.</p>

<p>The input is terminated by a line with two zeros. This line is not part of any datasets and thus should not be processed.</p>

### 출력 

 <p>For each dataset, print in a line ‘a’ (without quotes) if the door with the integer a is connected to the treasure repository; print ‘b’ otherwise. No extra space or character is allowed.</p>

