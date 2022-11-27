# [Platinum V] Landscaping - 5892 

[문제 링크](https://www.acmicpc.net/problem/5892) 

### 성능 요약

메모리: 2956 KB, 시간: 12 ms

### 분류

다이나믹 프로그래밍(dp), 최대 유량(flow), 최소 비용 최대 유량(mcmf)

### 문제 설명

<p>Farmer John is building a nicely-landscaped garden, and needs to move a large amount of dirt in the process.</p>

<p>The garden consists of a sequence of N flowerbeds (1 <= N <= 100), where flowerbed i initially contains A_i units of dirt. Farmer John would like to re-landscape the garden so that each flowerbed i instead contains B_i units of dirt. The A_i's and B_i's are all integers in the range 0..10.</p>

<p>To landscape the garden, Farmer John has several options: he can purchase one unit of dirt and place it in a flowerbed of his choice for <span>$</span>X. He can remove one unit of dirt from a flowerbed of his choice and have it shipped away for <span>$</span>Y. He can also transport one unit of dirt from flowerbed i to flowerbed j at a cost of <span>$</span>Z times |i-j|. Please compute the minimum total cost for Farmer John to complete his landscaping project.</p>

### 입력 

 <ul>
	<li>Line 1: Space-separated integers N, X, Y, and Z (0 <= X, Y, Z <= 1000).</li>
	<li>Lines 2..1+N: Line i+1 contains the space-separated integers A_i and B_i.</li>
</ul>

### 출력 

 <ul>
	<li>Line 1: A single integer giving the minimum cost for Farmer John's landscaping project.</li>
</ul>

