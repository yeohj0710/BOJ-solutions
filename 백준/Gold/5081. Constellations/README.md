# [Gold V] Constellations - 5081 

[문제 링크](https://www.acmicpc.net/problem/5081) 

### 성능 요약

메모리: 2156 KB, 시간: 0 ms

### 분류

너비 우선 탐색(bfs), 브루트포스 알고리즘(bruteforcing), 자료 구조(data_structures), 깊이 우선 탐색(dfs), 분리 집합(disjoint_set), 그래프 이론(graphs), 그래프 탐색(graph_traversal)

### 문제 설명

<p>One night, while camping out in the wide open spaces, Big Ed was looking at the stars. Now Ed never bothered to learn his constellations, but decided that grouping the stars was a reasonable thing to do after all. But Big Ed was going to do it in a sensible manner. He decided on the following simple rules:</p>

<ul>
	<li>Every star is in the same constellation as its closest neighbor.</li>
	<li>If the closest neighbour is not unique, then the star and all its closest neighbours are in the same constellation.</li>
	<li>If A is in the same constellation as B, then B is in the same constellation as A.</li>
	<li>If A is in the same constellation as B, and B is in the same constellation as C, then A is in the same constellation as C.</li>
</ul>

<p>For example, if the picture of the sky looked like the following:</p>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/5081/1.png" style="height:225px; width:502px"></p>

<p>Then there are 3 constellations: {1, 2, 3, 4, 5}, {6, 7, 8}, {9, 10}.</p>

### 입력 

 <p>Input will consist of a sequence of sky descriptions. Each begins with a single integer n: 0 < n ≤ 500 on a line, indicating the number of stars in the universe. The coordinates for the n stars follow as a pair x,y: 0 ≤ x ≤ 1000. A value of n = 0 indicates end of input.</p>

### 출력 

 <p>For each sky description, print a single line of the form</p>

<pre>Sky s contains c constellations.</pre>

<p>where s is the number of the sky description (starting at 1) and c is the number of constellations.</p>

