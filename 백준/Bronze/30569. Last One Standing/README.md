# [Bronze III] Last One Standing - 30569 

[문제 링크](https://www.acmicpc.net/problem/30569) 

### 성능 요약

메모리: 2020 KB, 시간: 20 ms

### 분류

사칙연산, 구현, 수학, 시뮬레이션

### 제출 일자

2023년 11월 8일 16:28:45

### 문제 설명

<p>In a computer game units are described by their health $h$, damage $d$, and time to reload $t$.</p>

<p>When such a unit fires a missile at an opposing one --- the opponent's health is decreased by $d$ $0.5$ seconds after the missile is fired. The time between consecutive missile launches for the same unit should be at least $t$ seconds. </p>

<p>For simplicity, we assume the missile supply to be infinite for all units in the game.</p>

<p>Two players --- one controlling a unit with health $h_1$, damage $d_1$ and time to reload $t_1$, and the second with a unit described by $h_2$, $d_2$ and $t_2$ --- have engaged in a fight in this computer game. Both units are fully reloaded at the beginning of the fight and can fire missiles immediately.</p>

<p>The unit is destroyed when its health becomes zero or negative. A player wins if there is a moment in time such that the opponent's unit is destroyed, while theirs is not.</p>

<p>Since it takes 0.5 seconds for a missile to reach its target, it is possible for both units to fire missiles at the same time and ultimately destroy each other.</p>

<p>You are to determine who wins in case both players act optimally.</p>

### 입력 

 <ul>
	<li>One line containing the integer numbers $h_1$, $d_1$ and $t_1$ ($1 \le h_1, d_1, t_1 \le 1000$).</li>
	<li>One line containing the integer numbers $h_2$, $d_2$ and $t_2$ ($1 \le h_2, d_2, t_2 \le 1000$).</li>
</ul>

### 출력 

 <p>Output the phrase <code>player one</code> if the first player wins, <code>player two</code> if the second player wins, or <code>draw</code> if neither player wins.</p>

