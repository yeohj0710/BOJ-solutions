# [Platinum V] Collisions - 7493 

[문제 링크](https://www.acmicpc.net/problem/7493) 

### 성능 요약

메모리: 14536 KB, 시간: 164 ms

### 분류

애드 혹(ad_hoc), 자료 구조(data_structures), 세그먼트 트리(segtree)

### 문제 설명

<p>Identical small balls are located on a straight line and can move along this line only. Each ball moves with a constant velocity, but velocities of different balls may be different. When two balls meet, a perfectly elastic collision occurs. It’s a common-known physical fact, that when two equal-mass physical bodies <strong>A</strong> and <strong>B</strong> collide perfectly elastically, they swap their velocities, i. e. new <strong>A</strong>’s velocity is old <strong>B</strong>’s one, and new <strong>B</strong>’s is old <strong>A</strong>’s.</p>

<p>Your task is to write a program to find the total number of collisions.</p>

### 입력 

 <p>The first line at input contains the number of balls <strong>N</strong> (<strong>3</strong> ≤ <strong>N</strong> ≤ <strong>200000</strong>). Each of the following <strong>N</strong> lines contains <strong>2</strong> space-separated integers — the starting coordinate and the velocity of corresponding ball. All start coordinates are in range –10<strong><sup>11</sup></strong>< <strong>x</strong>< <strong>10<sup>11</sup></strong>, all velocities are in range <strong>–10<sup>8</sup></strong>< <strong>v</strong>< <strong>10<sup>8</sup></strong>. All start coordinates are different. It’s guaranteed that each collision involves exactly two balls (none involves three or more balls together).</p>

### 출력 

 <p>Your program should output exactly one integer number in a single line – the total number of collisions (or <strong>987654321987654321</strong> if the number is infinite).</p>

