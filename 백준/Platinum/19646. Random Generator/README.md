# [Platinum V] Random Generator - 19646 

[문제 링크](https://www.acmicpc.net/problem/19646) 

### 성능 요약

메모리: 8276 KB, 시간: 144 ms

### 분류

이분 탐색(binary_search), 자료 구조(data_structures), 세그먼트 트리(segtree)

### 문제 설명

<p>국렬이는 1부터 <em>N</em>까지의 양의 정수로 이루어진 순열을 주어진 양의 정수 <em>w</em><sub>1</sub> ... , <em>w<sub>N</sub></em>를 이용해서 무작위로 만들 것이다. 다음은 무작위로 순열을 만드는 방법이다.</p>

<ol>
	<li>1부터 <em>N</em>까지의 양의 정수 <em>i </em>(1 ≤ <em>i </em>≤ <em>N</em>)를 연속적으로 <em>w<sub>i</sub></em>개씩 배치한다.</li>
	<li>현재 배치된 양의 정수의 총 개수를 <em>W</em>라고 하자. 1부터 <em>W</em>까지의 양의 정수들 중에서 균등하게 숫자 하나 <em>p<sub>i</sub></em>를 선택한다.</li>
	<li><em>p<sub>i</sub></em>번째 수를 순열에 추가한다.</li>
	<li>순열에 추가한 수들을 전부 지우고, 남은 수가 없을 때까지 2부터 4의 과정을 거친다.</li>
</ol>

<p><em>w</em><sub>1</sub>부터 <i>w<sub>N</sub></i>까지, <em>p</em><sub>1</sub>부터 <i>p<sub>N</sub></i>까지의 수가 주어졌을 때, 나오는 순열을 구해 보자.</p>

### 입력 

 <p>첫 번째 줄에는 <em>N </em>(1 ≤ <em>N </em>≤ 200,000)이 주어진다.</p>

<p>두 번째 줄에는 1,000 이하의 양의 정수 <em>w</em><sub>1</sub>부터 <em>w<sub>N</sub></em>까지가 주어진다.</p>

<p>세 번째 줄에는 양의 정수 <em>p<sub>1</sub></em>부터 <em>p<sub>N</sub></em>까지가 주어진다. <em>p</em><sub>1</sub>부터 <em>p<sub>N</sub></em>까지로 수열을 만들 수 있는 경우만 주어진다.</p>

### 출력 

 <p>최종적으로 나오는 1부터 <em>N</em>까지 양의 정수들로 이루어진 수열을 구하자.</p>

