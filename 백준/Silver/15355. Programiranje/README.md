# [Silver III] Programiranje - 15355 

[문제 링크](https://www.acmicpc.net/problem/15355) 

### 성능 요약

메모리: 14296 KB, 시간: 48 ms

### 분류

누적 합(prefix_sum)

### 문제 설명

<p>Little Leticija is preparing for a programming exam. Even though she has solved a lot of tasks, there’s one still left unsolved, so she is asking you for help. You are given the word S and Q queries. In each query, you are given positive integers A, B, C and D. Let’s say that word X consists of letters between positions A and B in word S, and word Y from letters between positions C and D in word S. For each query, you must answer if it is possible to somehow rearrange the letters in word Y and obtain word X.</p>

### 입력 

 <p>The first line of input contains the word S (1 ≤ |S| ≤ 50 000). |S| denotes the number of characters in word S, which consists of lowercase letters of the English alphabet. The second line of input contains the positive integer Q (1 ≤ Q ≤ 50 000).</p>

<p>Each of the following Q lines contains four integers A, B, C i D (1 ≤ A ≤ B ≤ |S| and 1 ≤ C ≤ D ≤ |S|) from the task.</p>

### 출력 

 <p>For each query, output “DA” (Croatian for yes) if it is possible, and “NE” (Croatian for no) if it is not.</p>

