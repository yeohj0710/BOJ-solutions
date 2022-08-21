# [Gold IV] Exams - 6099 

[문제 링크](https://www.acmicpc.net/problem/6099) 

### 성능 요약

메모리: 8296 KB, 시간: 40 ms

### 분류

이분 탐색(binary_search), 중간에서 만나기(mitm), 정렬(sorting)

### 문제 설명

<p>Ivan has finally been accepted in university! After an exhausting year of preparation for the entry exams, he was determined to take a big break. Unfortunately the summer vacation was short and wasn’t enough for him to take a proper rest, but he didn’t get disappointed. Ivan had heard that when you are in university it isn’t compulsory to attend to every single lecture. He decided to lengthen his vacation, even though the academic year had started. And so did he!</p>

<p>But, of course, for every plus there is a minus – as well as in secondary schools in every college or university there are exams. More precisely in Ivan’s curriculum there are exactly N exams. They may vary in difficulty, and therefore two exams may give different amount of points. Ivan is not obliged to take all exams, but the points gathered from the tests are important to him, because they are part of his final grade. He quickly realized that he needs at least T points from all exams, so that eventually he has a good grade. He is sure that he can make at least T points after attending to all the exams, but he suspects that there might be different ways to do this. The more ways there are, the more free time he has - Ivan will be able to choose which exam to take and which not to. In this manner he will decide how to distribute his leisure time – for instance which concerts or football matches to visit. Actually Ivan is completely sure in his abilities, so if he takes an exam, he will get the full score. Don’t let Ivan wonder in how many ways he can manage to gather at least T points for too long, but write a program points that finds out this number for him.</p>

### 입력 

 <p>The first row of the standard input will contain two positive integers N (N≤ 36) and T. On the next row there are going to be N positive integers, split by a single space, which represent the points of each exam. Every number in the second row will not be greater than 10<sup>13</sup>.</p>

### 출력 

 <p>On the standard output print a single integer – the number of ways in which Ivan can choose which exams to take and which not, so that the sum of the gathered points to be at least T.</p>

