# [Silver I] 함수 문자열 - 30047 

[문제 링크](https://www.acmicpc.net/problem/30047) 

### 성능 요약

메모리: 11680 KB, 시간: 28 ms

### 분류

자료 구조, 스택

### 문제 설명

<p>하나의 정수로 평가(evaluate)될 수 있는 함수 문자열은 다음과 같이 정의된다.</p>

<ol>
	<li><span style="color:#e74c3c;"><code>x</code></span>는 함수 문자열이다. 위 문자열은 $0$으로 평가된다.</li>
	<li><code>S</code>가 함수 문자열이면, <code><span style="color:#e74c3c;">g</span>S</code>도 함수 문자열이다. 위 문자열은 <code>S</code>가 평가된 값에 $1$을 더한 값으로 평가된다.</li>
	<li><code>S</code>, <code>T</code>가 함수 문자열이면, <code><span style="color:#e74c3c;">f</span>ST</code>도 함수 문자열이다. 위 문자열은 <code>S</code>와 <code>T</code>가 평가된 값 중 더 크지 않은 값으로 평가된다.</li>
</ol>

<p>문자열이 주어지면 함수 문자열인지 확인하고, 만약 그렇다면 평가한 값을 구하자.</p>

### 입력 

 <p>첫 번째 줄에 <span style="color:#e74c3c;"><code>f</code></span>, <span style="color:#e74c3c;"><code>g</code></span>, <span style="color:#e74c3c;"><code>x</code></span>로만 이루어진 문자열 $S$가 주어진다. $(1 \leq$ $|S|$ $\leq 1\,000\,000)$ </p>

### 출력 

 <p>첫 번째 줄에 주어진 문자열이 함수 문자열이라면 평가하여 값을 출력하고, 그렇지 않다면 <span style="color:#e74c3c;"><code>-1</code></span>을 출력한다.</p>

