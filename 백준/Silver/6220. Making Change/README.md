# [Silver II] Making Change - 6220 

[문제 링크](https://www.acmicpc.net/problem/6220) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

백트래킹(backtracking), 다이나믹 프로그래밍(dp)

### 문제 설명

<p>Poor Bessie has taken a job in the convenience store located just over the border in Slobbovia. Slobbovians use different coinages than the USA; their coin values change day-by-day!<br>
 <br>
Help Bessie make optimal change for Slobbovian shoppers. You will need to create C (1 <= C <= 1000) cents of change using N (1 <= N <= 10) coins of various values. All test cases will be solvable using the supplied coins.</p>

<p>If 5 coins of values 50, 25, 10, 5, and 1 were available, Bessie would make optimum change (minimal coins) of 93 cents by using 1 x 50, 1 x 25, 1 x 10, 1 x 5, and 3 x 1 coins (a total of 7 coins).<br>
 <br>
How hard could it be? The final two test cases will be challenging.</p>

### 입력 

 <ul>
	<li>Line 1: Two space-separate integers: C and N</li>
	<li>Lines 2..N+1: Each line contains a single unique integer that is a coin value that can be used to create change</li>
</ul>

<p> </p>

### 출력 

 <ul>
	<li>Line 1: A single integer that is the minimum number of coins to create C cents</li>
</ul>

