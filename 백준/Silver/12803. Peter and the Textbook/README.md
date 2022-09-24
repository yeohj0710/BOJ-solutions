# [Silver II] Peter and the Textbook - 12803 

[문제 링크](https://www.acmicpc.net/problem/12803) 

### 성능 요약

메모리: 2020 KB, 시간: 4 ms

### 분류

이분 탐색(binary_search), 브루트포스 알고리즘(bruteforcing), 자료 구조(data_structures), 구현(implementation), 세그먼트 트리(segtree), 시뮬레이션(simulation)

### 문제 설명

<p>Peter was cleaning his room today and found his old English Literature textbook. He doesn't like the subject, so he decided to break it down, tearing pages from it one after another.</p>

<p>The textbook has <em>n</em> pages, numbered from 1 to <em>n</em>. The book is bound in such way that the page number <em>i</em> is actually on the same sheet as the page number <em>n</em> - <em>i</em> + 1. So if Peter tears away one of the pages, the other page on the same sheet also gets removed. Peter tears pages one after another, and sometimes wants to know: what is the <em>p</em>-th page among those still in the textbook. Help him to answer such questions.</p>

### 입력 

 <p>Input data contains several test cases. The first line contains the number of test cases <em>t</em> (1 ≤ <em>t</em> ≤ 1000).</p>

<p>Each of the following <em>t</em> test cases is specified as follows. The first line of the test case contains two integers <em>n</em>, <em>q</em> (2 ≤ <em>n</em> ≤ 100, <em>n</em> is even; 1 ≤ <em>q</em> ≤ 100) — the number of pages in the textbook and the number of queries. The following <em>q</em> lines contain queries:</p>

<ul>
	<li>- i — Peter tears away page number <em>i</em> (the page on the same sheet is also removed);</li>
	<li>? p — Peter wants to know what is the number of the <em>p</em>-th among the still remaining pages.</li>
</ul>

<p>It is guaranteed that for the removal query the page is still in the textbook, and for the page number query the textbook contains at least <em>p</em> pages.</p>

### 출력 

 <p>For each query output the number of the corresponding page.</p>

