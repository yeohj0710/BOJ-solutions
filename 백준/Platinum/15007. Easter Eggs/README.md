# [Platinum II] Easter Eggs - 15007 

[문제 링크](https://www.acmicpc.net/problem/15007) 

### 성능 요약

메모리: 2572 KB, 시간: 256 ms

### 분류

이분 탐색(binary_search), 이분 매칭(bipartite_matching)

### 문제 설명

<p>Easter is coming and the Easter Bunny decided to organise a chocolate egg hunt for the children. He will hide two types of eggs: blue milk chocolate and red dark chocolate. In the field there are some redberry and some blueberry plants where the Easter Bunny could hide the eggs. Red eggs should be hidden in a redberry plant and blue eggs in a blueberry plant.</p>

<p>The local government has issued a permit for the event, under the condition that exactly N eggs are hidden. As they do not pay for the dental care plans of the local children, the Easter Bunny gets to decide himself how many eggs to hide of each colour.</p>

<p>According to the yearly tradition, there is a big reward for the first child to find both a red and a blue egg. In order to make the hunt as challenging as possible, the Easter Bunny wants to maximise the minimum distance between a red and a blue egg. To keep things fair, he will hide at most one egg in each plant. Your task is to write a program to help him accomplish his goal.</p>

### 입력 

 <p>The input consists of the following:</p>

<ul>
	<li>one line containing three integers N, B, R, the number of eggs to hide N ≤ 250, the number of blueberry plants B < N and the number of redberry plants R < N;</li>
	<li>B lines, each containing two integers −10<sup>4</sup> ≤ x, y ≤ 10<sup>4</sup>, indicating the coordinates (x, y) of a blueberry plant;</li>
	<li>R lines, each containing two integers −10<sup>4</sup> ≤ x, y ≤ 10<sup>4</sup> , indicating the coordinates (x, y) of a redberry plant.</li>
</ul>

<p>The B + R plants are guaranteed to have distinct coordinates. Moreover, N is guaranteed to satisfy N ≤ B + R.</p>

### 출력 

 <p>Output a single line containing a floating point number, D, the largest minimum distance between a red and a blue egg that can be achieved. You are required to output D with absolute precision 10<sup>−6</sup>, i.e. with at least 6 decimal places.</p>

