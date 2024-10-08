# [Bronze I] Fractions are better when continued - 32437 

[문제 링크](https://www.acmicpc.net/problem/32437) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

다이나믹 프로그래밍, 수학, 정수론

### 제출 일자

2024년 10월 8일 16:24:07

### 문제 설명

<p>Little Charles was one of the best competitive programmers in the world. However, he never really liked programming. Now that he is retired, he can dedicate his studies to what he really loves: continued fractions.</p>

<p>To prepare for the upcoming Imensa Competição de Phrações Contínuas (ICPC), he needs to solve the following problem:</p>

<p>Define $p_0 = 1$ as the level $0$ fraction. Then define: $$p_1 = \frac{1}{1+1}$$ as the level $1$ fraction, $p_1$. And also, $$p_2 = \frac{1}{1 + \frac{1}{1+1}}$$ as the level $2$ fraction, $p_2$, and so on.</p>

<p>Given an integer value $N$, help Charles determine the value of the numerator of the fraction $p_N$.</p>

### 입력 

 <p>The first and only line contains an integer $N$ ($1 ≤ N ≤ 40$).</p>

### 출력 

 <p>The value $p_N$ can be written as a fraction of the form $\frac{a}{b}$, where $a$ and $b$ are coprime. Print a line containing the value of a.</p>

