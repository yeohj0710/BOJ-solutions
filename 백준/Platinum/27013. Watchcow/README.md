# [Platinum IV] Watchcow - 27013 

[문제 링크](https://www.acmicpc.net/problem/27013) 

### 성능 요약

메모리: 10400 KB, 시간: 52 ms

### 분류

깊이 우선 탐색(dfs), 오일러 경로(eulerian_path), 그래프 이론(graphs), 그래프 탐색(graph_traversal)

### 문제 설명

<p>Bessie's been appointed the new watch-cow for the farm. Every night, it's her job to walk across the farm and make sure that no evildoers are doing any evil. She begins at the barn, makes her patrol, and then returns to the barn when she's done.</p>

<p>If she were a more observant cow, she might be able to just walk each of M (1 ≤ M ≤ 50,000) bidirectional trails numbered 1..M between N (2 ≤ N ≤ 10,000) fields numbered 1..N on the farm once and be confident that she's seen everything she needs to see. But since she isn't, she wants to make sure she walks down each trail exactly twice. It's also important that her two trips along each trail be in opposite directions, so that she doesn't miss the same thing twice.</p>

<p>A pair of fields might be connected by more than one trail. Find a path that Bessie can follow which will meet her requirements. Such a path is guaranteed to exist.</p>

### 입력 

 <ul>
	<li>Line 1: Two integers, N and M.</li>
	<li>Lines 2..M+1: Two integers denoting a pair of fields connected by a path.</li>
</ul>

### 출력 

 <ul>
	<li>Lines 1..2M+1: A list of fields she passes through, one per line, beginning and ending with the barn at field 1. If more than one solution is possible, output any solution.</li>
</ul>

