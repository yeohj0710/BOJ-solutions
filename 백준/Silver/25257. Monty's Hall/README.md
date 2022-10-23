# [Silver II] Monty's Hall - 25257 

[문제 링크](https://www.acmicpc.net/problem/25257) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

그리디 알고리즘(greedy), 기댓값의 선형성(linearity_of_expectation), 수학(math), 확률론(probability)

### 문제 설명

<p>You have explored the deep catacombs under a long lost city for the past couple of hours and finally you have reached their end: The hall of the undead wizard Monty. His restless spirit materialises in front of you and you prepare for battle.</p>

<p>However, it turns out that you are the first explorer to find him in over a hundred years, so he has grown incredibly bored. Instead of a fight, he offers to play a game for his artefacts. The hall has $d$ closed doors, but only one of them leads to the artefacts (Monty knows which one it is, of course). The procedure is as follows:</p>

<ol>
	<li>You choose $s$ closed doors.</li>
	<li>Monty opens $e$ doors that were not selected by you and lead to empty rooms.</li>
	<li>Among the remaining closed doors, you may change your selection of $s$ doors however you want (you can even stay with your current selection if you wish to).</li>
	<li>Monty reveals which door leads to the room with his artefacts.</li>
</ol>

<p>If the door with the artefacts is among your selected doors, you win and can take them with you unscathed. If not, Monty will transform you into a goat. So you better hope your luck is on point today.</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>One line with three integers $d$, $s$ and $e$ ($1 \le d,s,e \le 10^{6}, s + e < d$), the number of doors in Monty's hall, the number of doors you are allowed to select and the number of doors Monty opens in step 2.</li>
</ul>

### 출력 

 <p>Output your chance to win at Monty's game when playing optimally. Your answer should have an absolute or relative error of at most $10^{-6}$.</p>

