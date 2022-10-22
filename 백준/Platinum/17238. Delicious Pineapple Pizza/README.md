# [Platinum III] Delicious Pineapple Pizza - 17238 

[문제 링크](https://www.acmicpc.net/problem/17238) 

### 성능 요약

메모리: 2156 KB, 시간: 12 ms

### 분류

이분 탐색(binary_search), 이분 매칭(bipartite_matching), 매개 변수 탐색(parametric_search)

### 문제 설명

<p>병찬이가 운영하는 “Pineapple Pizza is A Pizza”, 줄여서 “PPAP” 회사는 매우 맛있는 파인애플 피자를 만든다. 하지만 PPAP 회사의 파인애플 피자에 의문을 품은 라이벌 회사가 PPAP 회사를 고발하였다! 회사를 지키기 위하여, 병찬이는 최대한 품질 좋은 파인애플 피자를 만들어야 한다.</p>

<p>파인애플 피자는 얼마나 맛있는 파인애플과 도우를 쓰느냐에 따라 결정된다. 파인애플의 품질이 <em>C</em>, 도우의 품질이 <em>D</em>라면, 그 피자는 <em>C XOR D</em> 의 맛을 가진다. 병찬이는 총 <em>N </em>개의 파인애플과 도우를 가지고 있고, 이를 이용하여 <em>N </em>개의 파인애플 피자를 만들어야 한다. 항상 최고급의 파인애플 피자를 만든다는 것을 증명하기 위하여, 병찬이는 <em>N </em>개의 특별한 파인애플 피자의 맛의 최소값을 최대화하고자 한다.</p>

### 입력 

 <p>첫 줄에 <em>N </em>(1 ≤ <em>N</em> ≤ 100)이 주어진다.</p>

<p>두 번째 줄에 정수 <em>C</em><sub>1</sub>, <em>C</em><sub>2</sub>, ... , <em>C</em><sub>N </sub>(1 ≤ <em>C</em><sub>i</sub> ≤ 10<sup>9</sup>)이 주어진다. 세 번째 줄에 정수 <em>D</em><sub>1</sub>, <em>D</em><sub>2</sub>, ... , <em>D</em><sub>N </sub>(1 ≤ <em>D</em><sub>i</sub> ≤ 10<sup>9</sup>)이 주어진다.</p>

### 출력 

 <p><em>N </em>개의 파인애플 피자의 맛의 최소값의 최대값을 구하여라.</p>

