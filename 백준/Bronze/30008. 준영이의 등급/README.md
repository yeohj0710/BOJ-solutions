# [Bronze IV] 준영이의 등급 - 30008 

[문제 링크](https://www.acmicpc.net/problem/30008) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 문제 설명

<p>준영이는 선린인터넷고등학교에서 1학기를 마치고 성적표를 받았다. 아직 성적처리가 완벽하게 끝나지 않아서 등수만 나오고 등급은 나오지 않은 상태이다. 계산하는 것이 너무나 귀찮은 준영이를 위해 그의 등급을 계산해주자.</p>

<p>선린인터넷고등학교에는 $N$명의 학생과 $K$개의 과목이 있으며, 모든 학생은 $K$개의 과목을 전부 수강한다. 준영이의 등급은 백분율을 기준으로 부여되며, 백분율은 해당 과목에서 준영이가 받은 등수에 $100$을 곱한 뒤 학생 수로 나눈 <strong>몫</strong>과 같다. 어떠한 과목에서의 백분율이 $P$라 할 때, 준영이가 특정 등급을 받기 위한 조건은 다음과 같다.</p>

<table class="table table-bordered table-center-40">
	<tbody>
		<tr>
			<td style="text-align: center;">등급</td>
			<td style="text-align: center;">조건</td>
		</tr>
		<tr>
			<td style="text-align: center;">1등급</td>
			<td style="text-align: center;">$0 \leq P \leq 4$</td>
		</tr>
		<tr>
			<td style="text-align: center;">2등급</td>
			<td style="text-align: center;">$4 < P \leq 11$</td>
		</tr>
		<tr>
			<td style="text-align: center;">3등급</td>
			<td style="text-align: center;">$11 < P \leq 23$</td>
		</tr>
		<tr>
			<td style="text-align: center;">4등급</td>
			<td style="text-align: center;">$23 < P \leq 40$</td>
		</tr>
		<tr>
			<td style="text-align: center;">5등급</td>
			<td style="text-align: center;">$40 < P \leq 60$</td>
		</tr>
		<tr>
			<td style="text-align: center;">6등급</td>
			<td style="text-align: center;">$60 < P \leq 77$</td>
		</tr>
		<tr>
			<td style="text-align: center;">7등급</td>
			<td style="text-align: center;">$77 < P \leq 89$</td>
		</tr>
		<tr>
			<td style="text-align: center;">8등급</td>
			<td style="text-align: center;">$89 < P \leq 96$</td>
		</tr>
		<tr>
			<td style="text-align: center;">9등급</td>
			<td style="text-align: center;">$96 < P \leq 100$</td>
		</tr>
	</tbody>
</table>

<p>$i$ ($1 \le i \le K$)번째 과목에서 준영이는 $G_{i}$등이었다. $G_1$, $G_2$, $\cdots$, $G_K$가 주어질 때, 준영이를 위해 각 과목에서 받은 등급 $D_1$, $D_2$, $\cdots$, $D_K$ ($1 \leq D_i \leq 9$)를 구해주자.</p>

### 입력 

 <p>첫째 줄에 학생의 수 $N$과 과목의 수 $K$가 공백으로 구분되어 주어진다. </p>

<p>둘째 줄에 $K$개의 수 $G_1$, $G_2$, $\cdots$, $G_K$가 공백으로 구분되어 주어진다. </p>

<p>입력으로 주어지는 모든 수는 정수이다.</p>

### 출력 

 <p>첫째 줄에 각 과목별 준영이의 등급을 의미하는 $K$개의 정수 $D_1$, $D_2$, $\cdots$, $D_K$ $(1 \leq D_i \leq 9)$를 공백으로 구분하여 출력하라.</p>

