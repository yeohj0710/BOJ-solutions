# [Silver II] Unique Values - 25851 

[문제 링크](https://www.acmicpc.net/problem/25851) 

### 성능 요약

메모리: 7560 KB, 시간: 72 ms

### 분류

자료 구조, 그리디 알고리즘, 해시를 사용한 집합과 맵, 큐, 트리를 사용한 집합과 맵, 두 포인터

### 문제 설명

<p>Arup has to make many practice questions for his Computer Science 1 students. Since many of the questions deal with arrays, he has to generate arrays for his students. Since he doesn’t want to give them difficult practice problems, he always guarantees that the arrays (given to the students) have unique values. Namely, no value will appear twice in any of his arrays.</p>

<p>Unfortunately, Arup is too lazy to generate arrays! About 20 years ago when he started teaching Computer Science 1, he made one really long array to reuse but this long array may have duplicate values. When he makes problems, he simply grabs a contiguous subsequence of this long array to be the array to be used for a problem but he needs to make sure the contiguous subsequence does not contain duplicates. If the long array has terms a[0], a[1], …, a[n-1], a contiguous subsequence of the long array is any sequence of j – i + 1 terms a[i], a[i+1], …, a[j] where 0 ≤ i ≤ j ≤ n – 1.</p>

<p>Given an array of n integers, determine how many contiguous subsequences of the array do not contain any repeated values. Note that two subsequences with the same contents are considered different (i.e., both counted in the total) if they start at different locations of the original long array.</p>

### 입력 

 <p>The first input line contains a single positive integer, n (1 ≤ n ≤ 10<sup>5</sup>), representing the size of the input array. The following line contains n space separated integers, representing the values of the input array, in the order they appear in the array. Each of the array values will be an integer between 1 and 10<sup>9</sup>, inclusive.</p>

### 출력 

 <p>On a line by itself, output the total number of contiguous subsequences of the input array that do not contain any repeated values.</p>

