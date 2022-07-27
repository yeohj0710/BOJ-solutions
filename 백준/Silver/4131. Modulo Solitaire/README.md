# [Silver II] Modulo Solitaire - 4131 

[문제 링크](https://www.acmicpc.net/problem/4131) 

### 성능 요약

메모리: 13304 KB, 시간: 80 ms

### 분류

너비 우선 탐색(bfs), 그래프 이론(graphs), 그래프 탐색(graph_traversal)

### 문제 설명

<p>Modulo Solitaire is a game that can be played when you are bored. You can even play it without a phone, just on paper. First, you pick a number <code>m</code>. Then you pick two sequences of numbers <code>a<sub>i</sub></code> and <code>b<sub>i</sub></code>. Finally, you pick a starting number <code>s<sub>0</sub></code>. Now, your goal is to go from <code>s<sub>0</sub></code> to 0 in as few moves as possible. In each move, you choose an <code>i</code>, then multiply your current number by <code>a<sub>i</sub></code>, add <code>b<sub>i</sub></code> to it, and reduce the result modulo <code>m</code>. That is, <code>s<sub>j</sub> = (s<sub>j-1</sub> * a<sub>i<sub>j</sub></sub> + b<sub>i<sub>j</sub></sub>) % m</code>.</p>

### 입력 

 <p>The first line of input contains three integers <code>0 < m ≤ 1000000</code>, <code>0 ≤ n ≤ 10</code>, and <code>0 < s<sub>0</sub> < m</code>. The next <code>n</code> lines each contain two integers, a pair <code>0 ≤ a<sub>i</sub> ≤ 1000000000</code> and <code>0 ≤ b<sub>i</sub> ≤ 1000000000</code>.</p>

### 출력 

 <p>Output a single integer, the shortest number of moves needed to reach 0 starting from <code>s<sub>0</sub></code>. If it is not possible to reach 0 in any number of moves, output <code>-1</code>.</p>

