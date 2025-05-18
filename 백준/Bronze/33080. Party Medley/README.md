# [Bronze II] Party Medley - 33080 

[문제 링크](https://www.acmicpc.net/problem/33080) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 브루트포스 알고리즘, 수학

### 제출 일자

2025년 5월 18일 21:42:15

### 문제 설명

<p>ICPC University has $N$ students, numbered from $1$ to $N$, in its Competitive Programming club. Student $i$ has a rating of $R_i$ representing their estimated skill in competitive problem-solving.</p>

<p>Contest season is coming and Morgan, the coach of the Competitive Programming club, would like to send at most one good team to a particular contest due to their limited budget. A team consists of exactly $3$ different students. Suppose that a team consists of student $i$, $j$, and $k$. Their <em>team rating</em> is $A_i + A_j + A_k$, and their <em>rating difference</em> is $\max(A_i , A_j , A_k) - \min(A_i , A_j , A_k)$.</p>

<p>Morgan believes that a team is <em>balanced</em> if their rating difference is no more than a threshold of $M$. Additionally, he also would like the team rating to be as large as possible while being a balanced team as well.</p>

<p>Morgan asks you to compute two values. The first value is the number of different balanced team configurations that can be made. The second value is the largest team rating of a balanced team that can be made.</p>

<p>Two team configurations are different if and only if there is at least one different student between those team configurations.</p>

### 입력 

 <p>Input begins with two integers $N$ $M$ ($3 ≤ N ≤ 200$; $0 ≤ M ≤ 4000$) representing the number of students and the threshold for rating difference, respectively. The next line contains $N$ integers $A_i$ ($0 ≤ A_i ≤ 4000$) representing the rating of student $i$.</p>

### 출력 

 <p>If there is at least one balanced team configuration, then output two space-separated integers in a single line representing the number of different balanced team configurations and the largest team rating of any balanced team, respectively.</p>

<p>If there is no balanced team configuration, then output <code>-1</code> in a single line.</p>

