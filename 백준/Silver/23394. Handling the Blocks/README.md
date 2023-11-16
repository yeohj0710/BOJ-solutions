# [Silver III] Handling the Blocks - 23394 

[문제 링크](https://www.acmicpc.net/problem/23394) 

### 성능 요약

메모리: 9656 KB, 시간: 48 ms

### 분류

정렬

### 제출 일자

2023년 11월 16일 13:37:35

### 문제 설명

<p>A friend of yours invented a game and wants to know if you can solve it or if it’s impossible.</p>

<p>He assembled a sequence of N blocks. Each block has a number engraved on it and some color. All numbers are distinct and between 1 and N, and different blocks can be of the same color.</p>

<p>The game works as follows: you can play as many turns as you want. In one turn, you choose two different blocks that share the same color and swap them.</p>

<p>You have to tell whether it is possible to get the entire sequence to be sorted into ascending order by numbers engraved on the blocks.</p>

### 입력 

 <p>The first line contains two integers N and K (1 ≤ N ≤ 10<sup>5</sup>, 1 ≤ K ≤ N), representing the number of blocks in the sequence and the number of different colors, respectively.</p>

<p>Each of the next N lines contains two integers n<sub>i</sub> and c<sub>i</sub> (1 ≤ n<sub>i</sub> ≤ N, 1 ≤ c<sub>i</sub> ≤ K), representing the number and color of the i-th block, respectively.</p>

### 출력 

 <p>Output one line containing one character. If the sequence can be arranged in ascending order, write the upper case letter ‘<code>Y</code>’; otherwise write the uppercase letter ‘<code>N</code>’.</p>

