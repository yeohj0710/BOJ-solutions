# [Silver II] Honeycomb Distance - 32048 

[문제 링크](https://www.acmicpc.net/problem/32048) 

### 성능 요약

메모리: 166276 KB, 시간: 1592 ms

### 분류

너비 우선 탐색, 그래프 이론, 그래프 탐색, 수학

### 제출 일자

2024년 8월 10일 02:20:49

### 문제 설명

<p>A plane is tiled completely with regular hexagons. Each hexagon is called a cell. You can move in one step from a cell to one of its adjacent cells that share an edge. You want to know the minimum number of steps to move from the central cell to the specified cell.</p>

<p>Each cell is specified by a pair of integers. The central cell is (0, 0). One of the directions perpendicular to the edges of the regular hexagons is defined to be the rightward direction. For each cell (<i>x, y</i>), its right adjacent cell is (<i>x</i> + 1, <i>y</i>) and its upper-right adjacent cell is (<i>x, y</i> + 1). See the figure below.</p>

<p>Write a program that computes the minimum number of steps required to move from the cell (0, 0) to the cell (<i>x, y</i>) for given integers <i>x</i> and <i>y</i>.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/30873296-3e71-419b-a83c-8a1651f5bbe9/-/preview/" style="width: 400px; height: 326px;"></p>

<p style="text-align: center;">Figure C-1: How to specify the cells</p>

### 입력 

 <p>The first line of the input contains only one positive integer <i>n,</i> which is the number of datasets. <i>n</i> does not exceed 100. Each of the following <i>n</i> lines contains one dataset.</p>

<p>Each dataset consists of two integers <i>x</i> and <i>y</i>, which satisfy −1000 ≤ <i>x</i> ≤ 1000 and −1000 ≤ <i>y</i> ≤ 1000. The destination cell is (<i>x, y</i>).</p>

### 출력 

 <p>For each dataset, output one line containing the minimum number of steps required to move from the cell (0, 0) to the destination cell.</p>

