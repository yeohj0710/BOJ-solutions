# [Gold IV] Lunch Concert - 21618 

[문제 링크](https://www.acmicpc.net/problem/21618) 

### 성능 요약

메모리: 11516 KB, 시간: 276 ms

### 분류

삼분 탐색(ternary_search)

### 문제 설명

<p>It’s lunchtime at your school! Your N friends are all standing on a long field, as they usually do. The field can be represented as a number line, with the ith friend initially at position P<sub>i</sub> metres along it. The ith friend is able to walk in either direction along the field at a rate of one metre per W<sub>i</sub> seconds, and their hearing is good enough to be able to hear music up to and including D<sub>i</sub> metres away from their position. Multiple students may occupy the same positions on the field, both initially and after walking.</p>

<p>You’re going to hold a little concert at some position c metres along the field (where c is any integer of your choice), and text all of your friends about it. Once you do, each of them will walk along the field for the minimum amount of time such that they end up being able to hear your concert (in other words, such that each friend i ends up within D<sub>i</sub> units of c).</p>

<p>You’d like to choose c such that you minimize the sum of all N of your friends’ walking times. What is this minimum sum (in seconds)? Please note that the result might not fit within a 32-bit integer.</p>

### 입력 

 <p>The first line of input contains N.</p>

<p>The next N lines contain three space-separated integers, P<sub>i</sub>, W<sub>i</sub>, and D<sub>i</sub> (1 ≤ i ≤ N).</p>

<p>The following table shows how the available 15 marks are distributed.</p>

### 출력 

 <p>Output one integer which is the minimum possible sum of walking times (in seconds) for all N of your friends to be able to hear your concert.</p>

