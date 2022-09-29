# [Gold IV] Jackpot - 17574 

[문제 링크](https://www.acmicpc.net/problem/17574) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

수학(math), 확률론(probability), 삼분 탐색(ternary_search)

### 문제 설명

<p>The thunderingly fun new game show of ’Jackpot’ has bounded onto televisio screens up and down the land and is the next big thing. It runs along a simple premise: there are a number of doors, behind one of which is hidden a monetary prize and behind all of the others of which are hidden goats. Each contestant chooses how many doors will be opened before they pick a door to look at. The prize decreases as each door is opened. If they manage to open the door and find the money they get to keep it!</p>

<p>Not content with guessing, you’ve decided to try and work out the best number of doors to open to maximise your expected profit, where expected profit is the probability of winning multiplied by the remaining prize fund.</p>

<p>You’ve managed to find out that the remaining prize fund P<sub>R</sub> is a function of the initial prize fund m, the number of doors opened d and a scaling factor f, ie.</p>

<p style="text-align: center;">P<sub>R</sub> = m − (d · f)<sup>2</sup></p>

<p>Given the number of doors, initial prize fund and the scaling factor can you work out how many doors should be opened before you try to pick a door to maximise your expected profit?</p>

### 입력 

 <p>One line of input containing:</p>

<ul>
	<li>One integer n (1 ≤ n ≤ 10<sup>18</sup>), the number of doors.</li>
	<li>One integer m (1 ≤ m ≤ 10<sup>18</sup>) the initial prize fund.</li>
	<li>One floating point f (0 < f ≤ 1), the scaling factor.</li>
</ul>

<p>There will always only be one door with the best value.</p>

### 출력 

 <p>One line containing</p>

<ul>
	<li>One floating point number, the value of the expected payout.</li>
</ul>

<p>The output must be accurate to an absolute or relative error of at most 10<sup>−6</sup>.</p>

