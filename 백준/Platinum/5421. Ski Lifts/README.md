# [Platinum III] Ski Lifts - 5421 

[문제 링크](https://www.acmicpc.net/problem/5421) 

### 성능 요약

메모리: 69588 KB, 시간: 624 ms

### 분류

그래프 이론(graphs), 강한 연결 요소(scc)

### 문제 설명

<p>Climate changes made the rolling mountains of Alaska a perfect place for all-season skiing. To transform this region into a successful area for skiing, however, ski lifts are needed. People skiing do not like walking upwards. They want to ski downhill; when needed they are willing to ski on the same level for some time.</p>

<p>Optimal use of the area requires that, starting from an arbitrary point, a skier should be able to reach any other point just by skiing downhill or staying at the same level, and occasionally taking a ski lift.</p>

<p>A sufficient amount of ski lifts must be planned and constructed such as to fulfill this condition. On the other hand, building more ski lifts than necessary is a waste of money.</p>

<p>What is the minimal number of ski lifts needed?</p>

<p>As ski lifts are built on high poles, we assume that a ski lift can be constructed from any place to any place, regardless of the terrain in between. A ski lift is unidirectional.</p>

<p>It is important to know that in Alaska one is not allowed to ski in any other direction than North, South, East or West.</p>

### 입력 

 <p>The first line of the input file contains a single number: the number of test cases to follow. Each test case has the following format:</p>

<ul>
	<li>A line with two positive numbers w and l with 1 ≤ w, l ≤ 500: the width and length of the area.</li>
	<li>w lines, each line containing l positive numbers h<sub>ij</sub>, with 0 ≤ h<sub>ij</sub> ≤ 10<sup>9</sup>, representing the height in each point of the area.</li>
</ul>

### 출력 

 <p>For every test case in the input file, the output should contain a single number, on a single line: the minimum number of ski lifts to be built.</p>

<p> </p>

