# [Platinum I] Maximum Satisfaction - 25780 

[문제 링크](https://www.acmicpc.net/problem/25780) 

### 성능 요약

메모리: 2824 KB, 시간: 16 ms

### 분류

최대 유량(flow), 최소 비용 최대 유량(mcmf)

### 문제 설명

<p>UCF is trying to make its COP 2500 class as accessible as possible, by creating s different sections of the course. Of course, it costs money to add sections of a course and UCF requires that each section have at least k students in it.</p>

<p>On the other hand, UCF wants its students to be satisfied. Each student who is going to take COP 2500 has predicted how satisfied they will be if they are placed in each of the different s sections. We assume the students are infallible and that their predictions are perfect. Each prediction is an integer score from 0 to 1000 (0 means not satisfied, 1000 means very satisfied).</p>

<p>Dr. Heinrich is very busy doing some geo-caching, so he would like you to write a program that determines the maximum sum of student satisfiability possible amongst all possible class assignments where each section has at least k students.</p>

<p>Given the number of sections of COP 2500 UCF is offering, the minimum number of students each section must have, and a list for each student of how satisfied they would be in each of the sections of the course, determine the maximum sum of satisfaction of all the students.</p>

### 입력 

 <p>The first input line contains three integers: n (1 ≤ n ≤ 200), indicating the number of students, s (1 ≤ s ≤ n), indicating the number of sections of COP 2500, and k (1 ≤ sk ≤ n), indicating the minimum number of students required to be assigned to each section. Each of the following n input lines contain s non-negative integers. The j th value on line i is a<sub>i,j</sub>, the satisfaction rating student i will have in section j.</p>

### 출력 

 <p>Print the maximum possible sum of student satisfaction scores within the constraint that each section must have at least k students assigned to it.</p>

