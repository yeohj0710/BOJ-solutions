# [Platinum IV] Reverse Roads - 22508 

[문제 링크](https://www.acmicpc.net/problem/22508) 

### 성능 요약

메모리: 3620 KB, 시간: 0 ms

### 분류

최대 유량(flow)

### 문제 설명

<p>ICP city has an express company whose trucks run from the crossing <var><i>S</i></var> to the crossing <var><i>T</i></var>. The president of the company is feeling upset because all the roads in the city are one-way, and are severely congested. So, he planned to improve the maximum flow (edge disjoint paths) from the crossing <var><i>S</i></var> to the crossing <var><i>T</i></var> by reversing the traffic direction on some of the roads.</p>

<p>Your task is writing a program to calculate the maximized flow from <var><i>S</i></var> to <var><i>T</i></var> by reversing some roads, and the list of the reversed roads.</p>

### 입력 

 <p>The first line of a data set contains two integers <var><i>N</i></var> (<var>2≤<i>N</i>≤300</var>) and <var><i>M</i></var> (<var>0≤<i>M</i>≤min(1 000, <i>N</i>(<i>N</i>−1)⁄2)</var>). <var><i>N</i></var> is the number of crossings in the city and <var><i>M</i></var> is the number of roads.</p>

<p>The following <var><i>M</i></var> lines describe one-way roads in the city. The <var><i>i</i></var>-th line (<var>1</var>-based) contains two integers <var><i>X</i><sub><i>i</i></sub></var> and <var><i>Y</i><sub><i>i</i></sub></var> (<var>1≤<i>X</i><sub><i>i</i></sub>,<i>Y</i><sub><i>i</i></sub>≤<i>N</i></var>, <var><i>X</i><sub><i>i</i></sub>≠<i>Y</i><sub><i>i</i></sub></var>). <var><i>X</i><sub><i>i</i></sub></var> is the ID number (<var>1</var>-based) of the starting point of the <var><i>i</i></var>-th road and <var><i>Y</i><sub><i>i</i></sub></var> is that of the terminal point. The last line contains two integers <var><i>S</i></var> and <var><i>T</i></var> (<var>1≤<i>S</i>,<i>T</i>≤<i>N</i></var>, <var><i>S</i>≠<i>T</i></var>, <var>1</var>-based).</p>

<p>The capacity of each road is <var>1</var>. You can assume that <var><i>i</i>≠<i>j</i></var> implies either <var><i>X</i><sub><i>i</i></sub>≠<i>X</i><sub><i>j</i></sub></var> or <var><i>Y</i><sub><i>i</i></sub>≠<i>Y</i><sub><i>j</i></sub></var>, and either <var><i>X</i><sub><i>i</i></sub>≠<i>Y</i><sub><i>j</i></sub></var> or <var><i>X</i><sub><i>j</i></sub>≠<i>Y</i><sub><i>i</i></sub></var>.</p>

### 출력 

 <p>In the first line, print the maximized flow by reversing some roads. In the second line, print the number <var><i>R</i></var> of the reversed roads. In each of the following <var><i>R</i></var> lines, print the ID number (<var>1</var>-based) of a reversed road. You may not print the same ID number more than once.</p>

<p>If there are multiple answers which would give us the same flow capacity, you can print any of them.</p>

