# [Silver IV] Dividing the Loot - 5437 

[문제 링크](https://www.acmicpc.net/problem/5437) 

### 성능 요약

메모리: 2020 KB, 시간: 4 ms

### 분류

그리디 알고리즘(greedy)

### 문제 설명

<p><img alt="" src="https://www.acmicpc.net/upload/images2/loot.png" style="float:right; height:149px; width:152px">You have successfully led a group of pirates in taking over a commercial vessel. You have seized gold coins, silver coins, and other precious goods. Now it comes down to dividing the loot. It is important to keep everyone satisfied, otherwise you risk mutiny. A pirate is not satisfied if another pirate gets more items than he does. Therefore you might have to content yourself with fewer items than the other pirates or throw some items into open sea. Fortunately, the other pirates have no notion of the value of the items, while you do. Can you make the most out of this without mutiny?</p>

### 입력 

 <p>The first line of the input contains a single number: the number of test cases to follow. Each test case has the following format:</p>

<ul>
	<li>One line with two integers P and N, satisfying 0 ≤ P ≤ 1000, 1 ≤ N ≤ 1000: the number of other pirates you have to share the loot with and the number of items, respectively.</li>
	<li>One line with N integers, v<sub>i</sub>, satisfying 1 ≤ v<sub>i</sub> ≤ 1000: the value of each item.</li>
</ul>

### 출력 

 <p>For every test case in the input, the output should contain one integer on a single line: the maximum total value of all the items that you can give yourself, while keeping all other pirates satisfied.</p>

