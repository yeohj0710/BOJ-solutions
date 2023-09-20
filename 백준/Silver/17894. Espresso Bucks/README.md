# [Silver IV] Espresso Bucks - 17894 

[문제 링크](https://www.acmicpc.net/problem/17894) 

### 성능 요약

메모리: 2152 KB, 시간: 0 ms

### 분류

해 구성하기, 구현

### 문제 설명

<p>The big café chain Espresso Bucks is expanding to the country of Gridland. Since you are an expert on Gridland culture and geography, Espresso Bucks have hired you to decide where to put their coffee shops for maximum profit. Gridland consists of an n by m grid, where some cells are land, and some are water. At most one coffee shop can be built on each land cell. Nothing can be built on the water cells, but on the other hand, no one lives in the water. After a lot of long meetings with the Espresso Bucks people, you have come to the conclusion that there are only two constraints the placement of coffee shops has to satisfy:</p>

<ol>
	<li>Each land cell must have a coffee shop directly on it, or adjacent to it.</li>
	<li>No two coffee shops can be adjacent to each other.</li>
</ol>

<p>Two cells are adjacent if one is immediately to the west, north, east, or south of the other. Find any placement of coffee shops that satisfies these constraints.</p>

### 입력 

 <p>The first line of input consists of two integers n and m (1 ≤ n, m ≤ 100). The following n lines each contain a string of length m consisting only of the characters ‘.’ (land) and ‘#’ (water). This is the map of gridland. It is guaranteed that the map contains at least one land cell.</p>

### 출력 

 <p>Output a copy of the map of gridland, where some of the land cells have been replaced with the letter ‘E’, meaning that a coffee shop was placed on the corresponding land cell. This placement should satisfy the constraints above. If there are many solutions, any one will be accepted.</p>

