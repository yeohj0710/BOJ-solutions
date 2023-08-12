# [Gold III] Cards Game - 24010 

[문제 링크](https://www.acmicpc.net/problem/24010) 

### 성능 요약

메모리: 2540 KB, 시간: 76 ms

### 분류

그래프 이론, 최소 스패닝 트리

### 문제 설명

<p>Professor Shekhu was a famous scientist working in the field of game theory in the early days of computer science. Right now, he's working on a game which involves a box containing <b>N</b> distinct cards. The i-th of these cards has a red number written on one side, and a blue number written on the other side. Both of these numbers are positive integers. The game proceeds as follows:</p>

<ul>
	<li>The player starts with a total of 0 points. The objective of the game is to finish with the <i>lowest</i> possible total.</li>
	<li>As long as there are at least two cards remaining in the box, the player must repeat the following move:
	<ul>
		<li>Remove two cards of their choice from the box. Choose a red number <b>R</b> from one card and a blue number <b>B</b> from the other card.</li>
		<li>Add the value <b>R ^ B</b> to the total, where <b>^</b> denotes bitwise XOR operation.</li>
		<li>Return one of the two cards to the box, and remove the other from the game.</li>
	</ul>
	</li>
	<li>The game ends when there is only one card remaining in the box (and so it is impossible to make another move).</li>
</ul>

<p>Professor Shekhu has summoned his best student, Akki, to play this game. Can you help Akki find the minimum possible total, considering all possible ways in which he can play the game?</p>

### 입력 

 <p>The first line of the input contains an integer <b>T</b>, the number of test cases. <b>T</b> test cases follow; each test case consists of three lines: First line of the each test case will contain an integer <b>N</b>.</p>

<ol>
	<li>The first line contains a positive integer <b>N</b>: the number of cards in the box.</li>
	<li>The second line contains a list of <b>N</b> positive integers <b>R<sub>i</sub></b>; the i-th of these represents the red number on the i-th card.</li>
	<li>The third line contains a list of <b>N</b> positive integers <b>B<sub>i</sub></b>; the i-th of these represents the blue number on the i-th card.</li>
</ol>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where <code>x</code> is the test case number (starting from 1) and <code>y</code> is the minimum possible total that Akki can attain, if he plays optimally.</p>

