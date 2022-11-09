# [Silver IV] Chinese Remainder Theorem - 23604 

[문제 링크](https://www.acmicpc.net/problem/23604) 

### 성능 요약

메모리: 4372 KB, 시간: 52 ms

### 분류

유클리드 호제법(euclidean), 수학(math), 정수론(number_theory)

### 문제 설명

<p>Johnny is a computer science student. This semester he became well versed with the Chinese Remainder Theorem. While waiting  for a next lecture he heard that Maggie complained that she cannot solve her homework; as he heard the familiar words "modulo" and "system of equations" he immediately offered his help to the damsel in distress. It turns out that Maggie's task is much different than those that Johnny is accustomed to solve, it is of the following  form:</p>

<p>$$ \left\{\begin{array}{ccc} a_1 & \equiv & b_1 \pmod{m} \\ a_2 & \equiv & b_2 \pmod{m} \\ \vdots & \vdots & \vdots \\ a_n & \equiv & b_n \pmod{m} \end{array}\right. $$</p>

<p>(where $\equiv$ means equivalence modulo) and for the given $a_1, b_1,\ldots, a_n, b_n$ Maggie should compute the largest $m$ such that all of the equations hold. Maggie already started processing the equations and she ensured that $a_i \geq b_i$ for each $i$. Johhny cannot fail and lose his face -- help him to solve the task.</p>

### 입력 

 <p>The first line of the input contains a single integer $n$ ($1 \leq n \leq 10^5$), denoting the number of equations.</p>

<p>The second line contains $n$ integers $a_1 , a_2 , \dots , a_n$, each separated by a single space, these are the numbers on the left-hand sides of consecutive equations.</p>

<p>The third and last line contains $n$ integers $b_1 , b_2 , \dots , b_n$, each separated by a single space, these are the numbers on the right-hand sides of consecutive equations.</p>

<p>The inequality $0 \leq b_i \leq a_i \leq 10^{18}$ holds for each $i$ $(1 \leq i \leq n)$. The system of equations is nontrivial: $a_i \neq b_i$ holds for some $i$  $(1 \leq i \leq n)$.</p>

### 출력 

 <p>You should write a single integer in the first and only line of the output -- the largest $m$ for which the given system of equations is satisfied.</p>

