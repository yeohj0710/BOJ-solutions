# [Gold III] Cherries Mesh - 23941 

[문제 링크](https://www.acmicpc.net/problem/23941) 

### 성능 요약

메모리: 8364 KB, 시간: 204 ms

### 분류

그래프 이론(graphs), 최소 스패닝 트리(mst)

### 문제 설명

<p>Your friend is recently done with cooking class and now he wants to boast in front of his school friends by making a nice dessert. He has come up with an amazing dessert called Cherries Mesh. To make the dish, he has already collected cherries numbered 1 to <b>N</b>. He has also decided to connect each distinct and unordered pair of cherries with a sweet strand, made of sugar. Sweet strands are either red or black, depending on the sugar content in them. Each black strand contains one units of sugar, and each red strand contains two units of sugar.</p>

<p>But it turns out that the dessert is now too sweet, and these days his school friends are dieting and they usually like dishes with less sugar. He is really confused now and comes to your rescue. Can you help him find out which all sweet strands he should remove such that each pair of cherries is connected directly or indirectly via a sugar strand, and the dish has the minimum possible sugar content?</p>

### 입력 

 <p>The first line of input gives the number of test cases, <b>T</b>.</p>

<p>Each test case begins with a line containing two integers <b>N</b> and <b>M</b>, the number of cherries and the number of <i>black</i> sweet strands, respectively.</p>

<p>Then <b>M</b> lines follow, each describing a pair of cherries connected to a black strand. The i-th line contains cherries numbered <b>C<sub>i</sub></b> and <b>D<sub>i</sub></b>, it indicates that <b>C<sub>i</sub></b> and <b>D<sub>i</sub></b> cherry are connected with a black strand of sugar.</p>

<p>Note: Any other pair of cherries not present in the input means that they are connected by a red strand.</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where <code>x</code> is the test case number (starting from 1) and <code>y</code> is minimum possible sugar content.</p>

