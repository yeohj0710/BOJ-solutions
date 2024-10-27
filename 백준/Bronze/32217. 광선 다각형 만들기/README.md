# [Bronze I] 광선 다각형 만들기 - 32217 

[문제 링크](https://www.acmicpc.net/problem/32217) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

기하학

### 제출 일자

2024년 10월 27일 13:30:04

### 문제 설명

<p>창연이는 평면 위에 $n$개의 거울과, 크기가 매우 작은 레이저 포인터를 잘 배치시켜 광선을 이용한 그림을 그렸다.</p>

<div style="display: flex; flex-direction: column; align-items: center; justify-content: center;"><img alt="" src="https://upload.acmicpc.net/b157c438-14db-471a-b96a-eaef7fcc383f/-/preview/" style="width: 100%; max-width: 343px;">
<p style="text-align: center;"><small>광선을 이용해 그린 그림의 예시</small></p>
</div>

<p>완성한 그림은 볼록다각형 $A_0A_1\cdots A_n$ 모양을 이루었다. $A_0$는 레이저 포인터가 위치한 지점이고, $A_1,A_2,\ldots ,A_n$ 지점에서 잘 배치된 거울들에 차례대로 반사되어 $A_0$로 돌아온 광선은 레이저 포인터에 막혀 더 나아가지 않았다.</p>

<div style="display: flex; flex-direction: column; align-items: center; justify-content: center;"><img alt="" src="https://upload.acmicpc.net/53263538-0616-45dd-9eec-8140512927ab/-/preview/" style="width: 100%; max-width: 457px;">
<p style="text-align: center;"><small>광선이 거울에 반사되어 진행하는 모습</small></p>
</div>

<p>구체적으로 광선은 다음과 같이 진행한다. 편의를 위해 $A_{n+1}=A_0$라고 하자.</p>

<ul>
	<li>$A_{i-1}$에서 $A_i$을 향해 일직선으로 진행한 뒤, $A_i$에서 반사되어 $A_{i+1}$을 향해 일직선으로 진행한다.</li>
	<li>이때, $A_i$에서의 입사각 $\theta_i$는 그림처럼 $\displaystyle \frac{\angle A_{i-1}A_iA_{i+1}} 2$이다.</li>
</ul>

<p>각 지점 $A_1,A_2,\ldots ,A_n$에서 반사되는 순간 측정한 입사각 $\theta_1,\theta_2,\ldots ,\theta_n$이 주어질 때, 그림 속 $\angle A_nA_0A_1$를 구해보자. 문제에서 표현된 모든 각은, 한 바퀴가 $360^\circ$인 $60$분법 각도 표기를 따른다.</p>

### 입력 

 <p>첫 번째 줄에 정수 $n$이 주어진다.</p>

<p>두 번째 줄에 $n$개의 정수 $\theta_1,\theta_2,\ldots ,\theta_n$이 공백으로 구분되어 주어진다.</p>

### 출력 

 <p>$\angle A_nA_0A_1$의 크기를 나타내는 정수를 출력한다.</p>

