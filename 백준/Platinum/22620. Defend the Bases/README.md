# [Platinum IV] Defend the Bases - 22620 

[문제 링크](https://www.acmicpc.net/problem/22620) 

### 성능 요약

메모리: 2172 KB, 시간: 68 ms

### 분류

이분 탐색(binary_search), 이분 매칭(bipartite_matching), 매개 변수 탐색(parametric_search)

### 문제 설명

<p>A country Gizevom is being under a sneak and fierce attack by their foe. They have to deploy one or more troops to every base immediately in order to defend their country. Otherwise their foe would take all the bases and declare "All your base are belong to us."</p>

<p>You are asked to write a program that calculates the minimum time required for deployment, given the present positions and marching speeds of troops and the positions of the bases.</p>

### 입력 

 <p>The input consists of multiple datasets. Each dataset has the following format:</p>

<pre><i>N M</i>
<i>x</i><sub>1</sub> <i>y</i><sub>1</sub> <i>v</i><sub>1</sub>
<i>x</i><sub>2</sub> <i>y</i><sub>2</sub> <i>v</i><sub>2</sub>
...
<i>x</i><sub><i>N</i></sub> <i>y</i><sub><i>N</i></sub> <i>v</i><sub><i>N</i></sub>
<i>x'</i><sub>1</sub> <i>y'</i><sub>1</sub>
<i>x'</i><sub>2</sub> <i>y'</i><sub>2</sub>
...
<i>x'</i><sub><i>M</i></sub> <i>y'</i><sub><i>M</i></sub></pre>

<p><i>N</i> is the number of troops (1 ≤ <i>N</i> ≤ 100); <i>M</i> is the number of bases (1 ≤ <i>M</i> ≤ 100); (<i>x<sub>i</sub></i>, <i>y<sub>i</sub></i> ) denotes the present position of <i>i</i>-th troop; <i>v<sub>i</sub></i> is the speed of the <i>i</i>-th troop (1 ≤ <i>v<sub>i</sub></i> ≤ 100); (<i>x'<sub>j</sub></i>, <i>y'<sub>j</sub></i>) is the position of the <i>j</i>-th base.</p>

<p>All the coordinates are integers between 0 and 10000 inclusive.</p>

<p>The last dataset is followed by a line containing two zeros. This line is not a part of any dataset and should not be processed.</p>

### 출력 

 <p>For each dataset, print the minimum required time in a line.</p>

