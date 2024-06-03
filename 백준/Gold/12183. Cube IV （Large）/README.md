# [Gold IV] Cube IV (Large) - 12183 

[문제 링크](https://www.acmicpc.net/problem/12183) 

### 성능 요약

메모리: 3084 KB, 시간: 4 ms

### 분류

다이나믹 프로그래밍

### 제출 일자

2024년 6월 3일 18:29:36

### 문제 설명

<p>Vincenzo decides to make cube IV but only has the budget to make a square maze. Its a perfect maze, every room is in the form of a square and there are 4 doors (1 on each side of the room). There is a big number written in the room. A person can only move from one room to another if the number in the next room is larger than the number in his current room by 1. Now, Vincenzo assigns unique numbers to all the rooms (1, 2, 3, .... S<sup>2</sup>) and then places S<sup>2</sup> people in the maze, 1 in each room where S is the side length of the maze. The person who can move maximum number of times will win. Figure out who will emerge as the winner and the number of rooms he will be able to move.</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <strong>T</strong>.  <strong>T</strong> test cases follow. Each test case consists of <strong>S</strong> which is the side length of the square maze. Then S<sup>2</sup> numbers follow like a maze to give the numbers that have been assigned to the rooms.</p>

<pre>1 2 9
5 3 8
4 6 7
</pre>

### 출력 

 <p>For each test case, output one line containing "Case #x: r d", where x is the test case number (starting from 1), r is the room number of the person who will win and d is the number of rooms he could move. In case there are multiple such people, the person who is in the smallest room will win.</p>

