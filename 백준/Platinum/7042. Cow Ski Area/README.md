# [Platinum IV] Cow Ski Area - 7042 

[문제 링크](https://www.acmicpc.net/problem/7042) 

### 성능 요약

메모리: 58760 KB, 시간: 152 ms

### 분류

그래프 이론(graphs), 그래프 탐색(graph_traversal), 강한 연결 요소(scc)

### 문제 설명

<p>Farmer John's cousin, Farmer Ron, who lives in the mountains of Colorado, has recently taught his cows to ski. Unfortunately, his cows are somewhat timid and are afraid to ski among crowds of people at the local resorts, so FR has decided to construct his own private ski area behind his farm. </p>

<p>FR's ski area is a rectangle of width W and length L of 'land squares' (1 <= W <= 500; 1 <= L <= 500). Each land square is an integral height H above sea level (0 <= H <= 9,999). Cows can ski horizontally and vertically between any two adjacent land squares, but never diagonally. Cows can ski from a higher square to a lower square but not the other way and they can ski either direction between two adjacent squares of the same height. </p>

<p>FR wants to build his ski area so that his cows can travel between any two squares by a combination of skiing (as described above) and ski lifts. A ski lift can be built between any two squares of the ski area, regardless of height. Ski lifts are bidirectional. Ski lifts can cross over each other since they can be built at varying heights above the ground, and multiple ski lifts can begin or end at the same square. Since ski lifts are expensive to build, FR wants to minimize the number of ski lifts he has to build to allow his cows to travel between all squares of his ski area. </p>

<p>Find the minimum number of ski lifts required to ensure the cows can travel from any square to any other square via a combination of skiing and lifts.</p>

### 입력 

 <ul>
	<li>Line 1: Two space-separated integers: W and L </li>
	<li>Lines 2..L+1: L lines, each with W space-separated integers corresponding to the height of each square of land.</li>
</ul>

### 출력 

 <ul>
	<li>Line 1: A single integer equal to the minimal number of ski lifts FR needs to build to ensure that his cows can travel from any square to any other square via a combination of skiing and ski lifts</li>
</ul>

