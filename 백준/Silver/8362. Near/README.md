# [Silver IV] Near - 8362 

[문제 링크](https://www.acmicpc.net/problem/8362) 

### 성능 요약

메모리: 3592 KB, 시간: 36 ms

### 분류

정렬(sorting), 두 포인터(two_pointer)

### 문제 설명

<p>A known Polish proverb is: 'The apple always falls near the apple tree'<sup>1</sup>. Your task is to check this proverb experimentally. For simplicity let us assume that both apple trees and apples stand in one line, so their positions can be described by a single coordinate. Let us also assume that every apple has fallen from the apple tree closest to it.</p>

<p>Write a program that:</p>

<ul>
	<li>reads from the standard input a description of positions of apple trees and apples,</li>
	<li>computes the smallest distance between an apple and its apple tree,</li>
	<li>writes the result to the standard output.</li>
</ul>

<p><sup>1</sup>An English equivalent of this proverb is: 'Like father, like son' or 'Like mother, like daughter'.</p>

### 입력 

 <p>The first line of input contains two integers <em>n</em> and <em>m</em> (1 ≤ <em>n</em>, <em>m</em> ≤ 100 000), separated with a single space and denoting the number of apple trees and the number of apples. The second line of input contains <em>n</em> integers from the range [0,10<sup>8</sup>], separated with single spaces and denoting the coordinates of apple trees. The third line of input contains <em>m</em> integers from the range [0,10<sup>8</sup>], separated with single spaces and denoting the coordinates of apples. We treat both apple trees and apples as points on a line; there can be multiple apple trees and multiple apples in one point.</p>

### 출력 

 <p>The first and only line of output should contain the smallest distance between an apple and its apple tree.</p>

