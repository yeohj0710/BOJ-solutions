# [Silver III] Center of symmetry - 1768 

[문제 링크](https://www.acmicpc.net/problem/1768) 

### 성능 요약

메모리: 2300 KB, 시간: 16 ms

### 분류

기하학(geometry), 정렬(sorting)

### 문제 설명

<p>Given is a set of <em>n</em> points with integer coordinates. Your task is to decide whether the set has a center of symmetry.</p>

<p>A set of points <em>S</em> has the center of symmetry if there exists a point <em>s</em> (not necessarily in <em>S</em>) such that for every point <em>p</em> in <em>S</em> there exists a point <em>q</em> in <em>S</em> such that <em>p-s</em> = <em>s-q</em>.</p>

### 입력 

 <p>The first line of input contains a number <em>c</em> giving the number of cases that follow. The first line of data for a single case contains number 1 ≤ <em>n</em> ≤ <em>10000</em>. The subsequent <em>n</em> lines contain two integer numbers each which are the <em>x</em> and <em>y</em> coordinates of a point. Every point is unique and we have that -10000000 ≤ <em>x</em>, <em>y</em> ≤ 10000000.</p>

### 출력 

 <p>For each set of input data print <tt>yes</tt> if the set of points has a center of symmetry and <tt>no</tt> otherwise.</p>

