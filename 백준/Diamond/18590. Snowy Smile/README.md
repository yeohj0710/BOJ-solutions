# [Diamond V] Snowy Smile - 18590 

[문제 링크](https://www.acmicpc.net/problem/18590) 

### 성능 요약

메모리: 33944 KB, 시간: 1908 ms

### 분류

자료 구조(data_structures), 세그먼트 트리(segtree), 스위핑(sweeping)

### 문제 설명

<p>There are n pirate chests buried in Byteland, labeled by 1, 2, . . . , n. The i-th chest is located at point (x<sub>i</sub>, y<sub>i</sub>) on the plane, and its value is w<sub>i</sub>. Note that w<sub>i</sub> can be negative since the pirate can put some poisonous gases into the chest. When you open the i-th pirate chest, you will get wi value.</p>

<p>You want to make money from these pirate chests. You can select a rectangle such that its sides are all parallel to the coordinate axes, and then open all the chests inside this rectangle or on its border. Note that you must open all the chests within that range regardless of whether their values are positive or negative. But you can choose a rectangle with nothing in it to get a zero sum.</p>

<p>Please write a program to find the maximum total value of a rectangle.</p>

### 입력 

 <p>The first line of the input contains an integer T (1 ≤ T ≤ 100), denoting the number of test cases.</p>

<p>Each test case starts with a line containing an integer n (1 ≤ n ≤ 2000), denoting the number of pirate chests.</p>

<p>Each of the next n lines contains three integers, x<sub>i</sub>, y<sub>i</sub>, and w<sub>i</sub> (−10<sup>9</sup> ≤ x<sub>i</sub>, y<sub>i</sub>, w<sub>i</sub> ≤ 10<sup>9</sup>), describing the i-th pirate chest.</p>

<p>It is guaranteed that the sum of n in all test cases is at most 10 000.</p>

### 출력 

 <p>For each test case, print a single line containing a single integer: the maximum total value.</p>

