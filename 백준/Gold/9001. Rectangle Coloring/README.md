# [Gold V] Rectangle Coloring - 9001 

[문제 링크](https://www.acmicpc.net/problem/9001) 

### 성능 요약

메모리: 2156 KB, 시간: 0 ms

### 분류

너비 우선 탐색(bfs), 자료 구조(data_structures), 깊이 우선 탐색(dfs), 분리 집합(disjoint_set), 기하학(geometry), 그래프 이론(graphs), 그래프 탐색(graph_traversal)

### 문제 설명

<p>You are given n axis-parallel rectangles on a plane. Here, an axis -parallel rectangle is a rectangle whose edges are parallel to either x -axis or y -axis. You are to find the number of colors to paint the given n rectangles according to the following rules:</p>

<ol>
	<li>1. Each rectangle has to be painted with one color.</li>
	<li>2. A pair of intersecting rectangles must have the same color. Two rectangles are intersecting if their intersection is not empty when we regard a rectangle as a set of points including the boundary.</li>
	<li>3. A rectangle R<sub>a</sub> must have the same color as R<sub>b</sub> if there is a sequence of rectangles R<sub>a </sub>= R<sub>i1</sub>, R<sub>i2</sub>, …,R<sub>ik </sub>= R<sub>b </sub>such that R<sub>ij </sub>and R<sub>ij+1 </sub>are intersecting for all 1≤ j < k ; otherwise, they must have different colors. For instance, rectangle R<sub>9</sub> in the following figure must have the same color as R<sub>4, </sub>R<sub>5, </sub>R<sub>8</sub>, and have a different color from R<sub>1, </sub>R<sub>2</sub>, R<sub>3</sub>, R<sub>6</sub>, R<sub>7</sub>.</li>
</ol>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3.amazonaws.com/problem/9001/%EC%8A%A4%ED%81%AC%EB%A6%B0%EC%83%B7%202016-11-15%20%EC%98%A4%ED%9B%84%205.08.12.png" style="height:250px; width:275px"></p>

### 입력 

 <p>The input consists of T test cases. The number of test cases (T) is given in the first line of the input file. Each test case begins with a line containing an integer N , 1≤ N ≤ 200 , that represents the number of rectangles in the test case. Each of the following N lines contains four positive integers x<sub>1</sub> , y<sub>1</sub> , x<sub>2</sub> , and y<sub>2</sub>, 1 ≤ x<sub>1</sub>,y<sub>1</sub>,x<sub>2</sub>,y<sub>2</sub> ≤ 10000 , representing a rectangle. (x<sub>1</sub> ,y<sub>1</sub>) and (x<sub>2</sub> , y<sub>2</sub>) are the (x, y) -coordinates of the lower - left and upper -right corners of the rectangle, respectively. The four integers are delimited by one or more spaces. From the N +3 -th line, the remaining test cases are listed in the same manner as above.</p>

### 출력 

 <p>The output should contain the number of colors, one per line.</p>

