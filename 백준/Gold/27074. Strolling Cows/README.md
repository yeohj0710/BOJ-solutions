# [Gold I] Strolling Cows - 27074 

[문제 링크](https://www.acmicpc.net/problem/27074) 

### 성능 요약

메모리: 2728 KB, 시간: 4 ms

### 분류

그래프 이론(graphs), 그래프 탐색(graph_traversal), 두 포인터(two_pointer)

### 문제 설명

<p>Before going to the barn for dinner, the cows like to stroll the N (1 ≤ N ≤ 30,000) pastures while watching the sun set.  Each pasture leads to precisely one pasture, though some pastures have more than one pasture emptying into them.  For a valid strolling experience, the cows can start in any pasture and must finish in that same pasture without visiting any other pasture twice.  Given a description of the pasture paths, deduce the longest possible valid stroll the cows can take.</p>

### 입력 

 <ul>
	<li>Line 1: One integer: N</li>
	<li>Lines 2..N+1: Line M tells the pasture number that pasture M-1 connects to (so line 2 tells which pasture is accessible from pasture 1, etc.)</li>
</ul>

### 출력 

 <p>A single line with the integer that is the largest number of pastures that can be visited on a legal stroll.</p>

