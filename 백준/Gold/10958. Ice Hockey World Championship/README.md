# [Gold I] Ice Hockey World Championship - 10958 

[문제 링크](https://www.acmicpc.net/problem/10958) 

### 성능 요약

메모리: 26728 KB, 시간: 216 ms

### 분류

이분 탐색(binary_search), 중간에서 만나기(mitm)

### 문제 설명

<p>This year the Ice Hockey World Championship took place in the Czech Republic. Bobek has arrived in Prague and he would like to visit some of the matches. He does not have any team preferences and he does not have any time restrictions. If he had enough money, he would be able to visit all of the matches. Unfortunately, he has only a limited number of Czech crowns, all of which can be spent on tickets. Knowing how much a ticket costs for each match, calculate the number of ways he can attend a set of matches without exceeding his budget. Two ways are considered different if there exists a match which is visited in one of the ways, but not visited in the other.</p>

### 입력 

 <p>A description of Bobek’s situation is read from the standard input. The first line of input contains two positive integers N and M (1 ≤ N ≤ 40, 1 ≤ M ≤ 10<sup>18</sup>), denoting the number of matches and the number of Czech crowns Bobek can spend. The second line contains N space-separated positive integers, none of them exceeding 10<sup>16</sup>, representing costs of the matches in Czech crowns.</p>

### 출력 

 <p>Output a single line with the number of ways Bobek can visit the matches. Please note that due to the limit on N, this number will be at most 2<sup>40</sup>.</p>

