# [Gold V] Build Your Home - 3749 

[문제 링크](https://www.acmicpc.net/problem/3749) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

기하학(geometry), 다각형의 넓이(polygon_area)

### 문제 설명

<p>Mr. Tenant is going to buy a new house. In fact, he is going to buy a piece of land and build his new house on it. In order to decide which piece of land to buy, Mr. Tenant needs a program which will give a score to each piece. Each candidate piece of land is a polygonal shape (not necessarily convex), and Mr. Tenant wonders what the best score is. Among possible scores, he considered the number of vertices, sum of angles, minimum number of required guards, and so forth. Finally, Mr. Tenant decided that the best score for a piece of land would simply be its area. Your task is to write the desired scoring program. </p>

### 입력 

 <p>The input file consists of multiple pieces of land. Each piece is a simple polygon (that is, a polygon which does not intersect itself). A polygon description starts with a positive integer number k, followed by k vertices, where each vertex consists of two coordinates (floating-point numbers): x and y. Naturally, the last vertex is connected by an edge to the first vertex. Note that each polygon can be ordered either clockwise or counterclockwise. The input ends with a “0” (the number zero).</p>

### 출력 

 <p>For each piece of land, the output should consist of exactly one line containing the score of that piece, rounded to the nearest integer number. (Halves should be rounded up, but Mr. Tenant never faced such cases.) Hint: The scoring program has to handle well degenerate cases, such as, polygons with only one or two vertices. </p>

