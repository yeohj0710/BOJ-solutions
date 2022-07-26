# [Silver I] Knight Moves - 6601 

[문제 링크](https://www.acmicpc.net/problem/6601) 

### 성능 요약

메모리: 2024 KB, 시간: 8 ms

### 분류

너비 우선 탐색(bfs), 그래프 이론(graphs), 그래프 탐색(graph_traversal)

### 문제 설명

<p>A friend of you is doing research on the <em>Traveling Knight Problem (TKP)</em> where you are to find the shortest closed tour of knight moves that visits each square of a given set of <em>n</em> squares on a chessboard exactly once. He thinks that the most difficult part of the problem is determining the smallest number of knight moves between two given squares and that, once you have accomplished this, finding the tour would be easy.</p>

<p>Of course you know that it is vice versa. So you offer him to write a program that solves the "difficult" part.</p>

<p>Your job is to write a program that takes two squares <em>a</em> and <em>b</em> as input and then determines the number of knight moves on a shortest route from <em>a</em> to <em>b</em>.</p>

### 입력 

 <p>The input file will contain one or more test cases. Each test case consists of one line containing two squares separated by one space. A square is a string consisting of a letter (a-h) representing the column and a digit (1-8) representing the row on the chessboard.</p>

### 출력 

 <p>For each test case, print one line saying "To get from <em>xx</em> to <em>yy</em> takes <em>n</em> knight moves.".</p>

