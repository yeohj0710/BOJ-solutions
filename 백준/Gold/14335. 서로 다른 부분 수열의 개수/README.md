# [Gold V] 서로 다른 부분 수열의 개수 - 14335 

[문제 링크](https://www.acmicpc.net/problem/14335) 

### 성능 요약

메모리: 2024 KB, 시간: 8 ms

### 분류

조합론(combinatorics), 다이나믹 프로그래밍(dp), 수학(math)

### 문제 설명

<p>어떤 문자열 S = S<sub>1</sub>S<sub>2</sub>...S<sub>N</sub>이 있을때, S<sub>i<sub>1</sub></sub>S<sub>i<sub>2</sub></sub>...S<sub>i<sub>k</sub></sub> (0 ≤ k ≤ N, 1 ≤ i<sub>1</sub> < i<sub>2</sub> < ... < i<sub>k</sub> ≤ N)을 만족하는 모든 문자열을 S의 부분 수열이라한다. 길이가 0인 빈 문자열도 S의 부분 수열이다. 문자열 <code>ioi</code>의 서로 다른 부분 수열은 빈 문자열, <code>i</code>, <code>o</code>, <code>ii</code>, <code>io</code>, <code>oi</code>, <code>ioi</code>로 총 7개가 있다.</p>

<p>문자열 S가 주어진다. 이 문자열의 서로 다른 부분 수열의 개수를 구해보자.</p>

### 입력 

 <p>첫째 줄에 테스트 케이스의 개수 T (1 ≤ T ≤ 10,000)가 주어진다. 둘째 줄부터 한 줄에 하나씩 문자열 S가 주어진다. S는 영어 알파벳 대문자와 소문자로, 0부터 9까지의 숫자만 이루어져 있고, 길이는 1,000 이하이다.</p>

### 출력 

 <p>각각의 테스트 케이스마다 입력으로 주어진 문자열 S의 서로 다른 부분 수열의 개수를 출력한다. 항상 개수가 10<sup>18</sup> 이하인 문자열만 입력으로 주어진다.</p>

