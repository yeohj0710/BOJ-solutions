# [Gold I] Fibo - 11238 

[문제 링크](https://www.acmicpc.net/problem/11238) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

분할 정복을 이용한 거듭제곱(exponentiation_by_squaring), 수학(math)

### 문제 설명

<p>Fibonacci sequence is a well-known integer sequence that has many beautiful properties. Fibonacci sequence is something looks like this 0, 1, 1, 2, 3, 5, 8, 13, 21, … To make it formal, the mathematical term of Fibonacci sequence is define by recurrence relation.</p>

<p>\[F_n = F_{n-1} + F_{n-2} \text{where } n = 2, 3, \dots \text{and } F_0 = 0, F_1 = 1\]</p>

<p>If you know the technique to solve recurrence relation it will look like</p>

<p>\[F_n = \frac{1}{\sqrt{5}} \left\{ \left( \frac{1+\sqrt{5}}{2} \right)^n - \left( \frac{1-\sqrt{5}}{2} \right)^n  \right\}\]</p>

<p>And these are some of its beautiful properties (there are a lot more!)</p>

<p>\[\sum_{i=1}^{n}{F_i} = F_{n+2}-1 \\ F_n | F_{kn} \text{where } k = 0, 1, 2, \dots\]</p>

<p>Enough for an introduction, let’s get to the main point. This problem is about finding greatest common divisor (GCD) between Fibonacci numbers. Given two Fibonacci number, your task is to find their GCD! Simple right?</p>

### 입력 

 <p>The first line contains a single integer T indicate the number of test cases (1 ≤ T ≤ 1 000)</p>

<p>Each of next T lines contains two integer N, M separated by a space (0 < N, M ≤ 1 000 000 000)</p>

### 출력 

 <p>For each test case, print a line contains value of gcd(F<sub>n</sub>,F<sub>m</sub>) modulo by 1000000 007</p>

