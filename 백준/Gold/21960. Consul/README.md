# [Gold V] Consul - 21960 

[문제 링크](https://www.acmicpc.net/problem/21960) 

### 성능 요약

메모리: 2160 KB, 시간: 8 ms

### 분류

애드 혹(ad_hoc), 무작위화(randomization)

### 문제 설명

<p>In Reme, a consular election is being held. This election has N electors, each of which can vote with one of the 1.000.000.000 different candidates. A candidate is considered a winner if she wins strictly more than one third of the vote (this happens because Reme elects two consuls each year). Now, you are an aspiring vote-rigger. In order to more effectively rig the vote, you need to know at least one prospective winner. Unfortunately, although each elector has cast their vote, it is not public — at least not without a price. Moreover, the old consuls, who have already counted votes, can tell you the number of votes a particular candidate won — again, at a price.</p>

<p>More formally, you are asked to consider a hidden sequence v of N integers v[1] … v[N], with values at least 0 and less than 1.000.000.000. You can perform two types of queries on this sequence:</p>

<ul>
	<li>you can find out the value of a particular element v[i] in the sequence</li>
	<li>you can see how many times a particular value x appears in the sequence.</li>
</ul>

<p>You are asked to find a value x that appears strictly more than N/3 times in the sequence, while making the number of queries you perform small enough.</p>

<p>Given N, find out any winner of the election, using the given queries, or announce that no winner exists.</p>

### 입력 

 Empty

### 출력 

 Empty

