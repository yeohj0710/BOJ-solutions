# [Gold II] Matrix Again - 12987 

[문제 링크](https://www.acmicpc.net/problem/12987) 

### 성능 요약

메모리: 3212 KB, 시간: 216 ms

### 분류

분할 정복을 이용한 거듭제곱(exponentiation_by_squaring), 수학(math)

### 문제 설명

<p>N * N 행렬 A와 정수 K, M이 주어졌습니다. 이때 A<sup>k</sup>한 원소들을 M으로 나눈 나머지 값들을 구하는 것은 너무 쉬운 일입니다.</p>

<p>이제는 조금 다른 문제를 풀어보려 합니다.</p>

<p>S = A + A<sup>2</sup> + A<sup>3</sup> + ... + A<sup>K</sup>인 행렬 S가 있습니다. 행렬 S의 원소들을 M 으로 나눈 나머지 값들을 출력하세요.</p>

### 입력 

 <p>첫 번째 줄에 N, K, M (1 ≤ N ≤ 50, 1 ≤ K ≤ 10<sup>9</sup>, 1 ≤ M ≤ 10<sup>4</sup>) 이 공백을 구분으로 주어집니다.</p>

<p>다음 N개의 줄에 걸쳐 행렬 A가 주어집니다. (-10<sup>4</sup> ≤ A<sub>ij</sub> ≤ 10<sup>4</sup>, 1 ≤ i, j ≤ N)</p>

### 출력 

 <p>수열 S의 각 원소들을 M으로 나눈 나머지 값들을 출력하세요.</p>

