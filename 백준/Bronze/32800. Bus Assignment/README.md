# [Bronze III] Bus Assignment - 32800 

[문제 링크](https://www.acmicpc.net/problem/32800) 

### 성능 요약

메모리: 2020 KB, 시간: 32 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2024년 12월 23일 01:54:12

### 문제 설명

<p>The Institution for Carrying People Carefully is responsible for managing the famous Line Bus in Line Town. The Line Bus goes through $n$ stops conveniently numbered from $1$ to $n$. At stop $i$, $a_i$ people first get off the bus. Then, $b_i$ people get on the bus. The bus starts out empty at stop $1$ and then goes through the stops in numerically increasing order, eventually stopping at stop $n$ where the bus empties.</p>

<p>When someone rides the Line Bus, they must be seated. A bus with capacity $c$ has exactly $c$ seats for passengers. Each rider of the Line Bus occupies exactly one seat. The driver of the Line Bus is not counted. The Institution for Carrying People Carefully wants to know what is the minimum capacity bus needed to run the Line Bus. </p>

### 입력 

 <p>The first line contains a single integer, $n$ $(2 \le n \le 2 \cdot 10^5)$.</p>

<p>Each of the next $n$ lines contains two integers, $a_i$ and $b_i$ $(0 \le a_i, b_i \le 10^9)$. It is guaranteed that at least one person boards the bus, at most $10^9$ people board the bus over all stops, and that the bus will empty at stop $n$.</p>

### 출력 

 <p>Output a single integer, the minimum capacity bus needed to run the Line Bus.</p>

