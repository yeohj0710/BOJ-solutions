# [Gold V] Birmingham - 19231 

[문제 링크](https://www.acmicpc.net/problem/19231) 

### 성능 요약

메모리: 12016 KB, 시간: 96 ms

### 분류

너비 우선 탐색(bfs), 그래프 이론(graphs), 그래프 탐색(graph_traversal)

### 문제 설명

<p>It is well known that all horse races in Birmingham are fixed days in advance. It is a little less known that people who fix these races (and thereby know the winner) do that on a secret meeting and start spreading the information around the city the day after that meeting.</p>

<p>The first day after the meeting, all people that know the information about the winner start sharing that information with all people that live at most K steps away from their house.</p>

<p>The second day after the meeting, all people that know the information about the winner start sharing that information with all people that live at most 2 · K steps away from their house.</p>

<p>In general, X-th day after the meeting, all people that know the information about the winner start sharing that information with all people that live at most X · K steps away from their house.</p>

<p>We can represent Birmingham as a graph where vertices represent the houses and edges represent bidirectional roads which connect these houses. Houses are indexed with increasing integers from 1 to N and we say that a person can travel each road in a single step. It is possible to reach each house from each other house by traversing a sequence of roads.</p>

<p>Your task is to determine, for each house, on which day will the information about the race winner reach it.</p>

### 입력 

 <p>The first line contains four integers N, M, Q and K (1 ≤ N, Q, K ≤ 100 000, Q ≤ N, 1 ≤ M ≤ 200 000), the number of houses in Birmingham, the number of roads in Birmingham, the number of people that were present on the secret meeting and the number K from task description.</p>

<p>The next line contains Q integers where the i-th integer represents the index of a house where the i-th person from the secret meeting lives in.</p>

<p>The i-th of the next M lines contains integers A<sub>i</sub> and B<sub>i</sub> (1 ≤ A<sub>i</sub>, B<sub>i</sub> ≤ N, A<sub>i</sub> ≠ B<sub>i</sub>), which denote that the i-th road connects houses with indices A<sub>i</sub> and B<sub>i</sub>.</p>

### 출력 

 <p>Output N numbers where the i-th number represents on which day after the meeting will the person living in house with index i find out who will win the race. If the person living in that house was present on the secret meeting, output 0 instead.</p>

