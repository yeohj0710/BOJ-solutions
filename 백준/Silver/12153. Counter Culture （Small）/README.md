# [Silver I] Counter Culture (Small) - 12153 

[문제 링크](https://www.acmicpc.net/problem/12153) 

### 성능 요약

메모리: 9960 KB, 시간: 1040 ms

### 분류

너비 우선 탐색(bfs), 그래프 이론(graphs), 그래프 탐색(graph_traversal), 수학(math)

### 문제 설명

<p>In the Counting Poetry Slam, a performer takes the microphone, chooses a number <strong>N</strong>, and counts aloud from 1 to <strong>N</strong>. That is, she starts by saying 1, and then repeatedly says the number that is 1 greater than the previous number she said, stopping after she has said <strong>N</strong>.<br>
<br>
It's your turn to perform, but you find this process tedious, and you want to add a twist to speed it up: sometimes, instead of adding 1 to the previous number, you might reverse the digits of the number (removing any leading zeroes that this creates). For example, after saying "16", you could next say either "17" or "61"; after saying "2300", you could next say either "2301" or "32". You may reverse as many times as you want (or not at all) within a performance.<br>
<br>
The first number you say must be 1; what is the fewest number of numbers you will need to say in order to reach the number <strong>N</strong>? 1 and <strong>N</strong> count toward this total. If you say the same number multiple times, each of those times counts separately.</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <strong>T</strong>. <strong>T</strong> lines follow. Each has one integer <strong>N</strong>, the number you must reach.</p>

<h3>Limits</h3>

<ul>
	<li>1 ≤ <strong>T</strong> ≤ 100.</li>
	<li>1 ≤ <strong>N</strong> ≤ 10<sup>6</sup>.</li>
</ul>

### 출력 

 <p>For each test case, output one line containing "Case #x: y", where x is the test case number (starting from 1) and y is the minimum number of numbers you need to say.</p>

