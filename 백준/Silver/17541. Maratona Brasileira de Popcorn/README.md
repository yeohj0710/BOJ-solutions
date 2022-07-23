# [Silver I] Maratona Brasileira de Popcorn - 17541 

[문제 링크](https://www.acmicpc.net/problem/17541) 

### 성능 요약

메모리: 2804 KB, 시간: 16 ms

### 분류

이분 탐색(binary_search)

### 문제 설명

<p>The “Maratona Brasileira de Popcorn” is a competition that takes place annually to find out which team is the most organized, prepared and well-trained in the art of eating popcorn. It is organized by Brazilian Society of Popcorn Eaters (SBCp, its acronym in Portuguese), which periodically meets to discuss the rules and format of the competition.</p>

<p>The competition consists of N popcorn bags placed side by side, where each bag has an arbitrary amount of popcorn. For added fun, the competition takes place in teams, each made up of C competitors. Since the “Maratona Brasileira de Popcorn” is a serious event that values, above all, the health of the competitors, the medical commission has imposed that each competitor may eat a maximum of T popcorn per second to avoid possible sickness.</p>

<p>At its last meeting, SBCp defined two new rules for the 2019 edition:</p>

<ul>
	<li>Each team competitor must eat a contiguous sequence of popcorn bags. It is perfectly valid that a competitor does not eat any popcorn.</li>
	<li>All popcorn in the same bag must be eaten by a single competitor.</li>
</ul>

<p>The goal of the competition is to eat all the popcorn in the shortest possible time as the C competitors can eat in parallel and they will abide by all rules imposed by the SBCp.</p>

### 입력 

 <p>The first line of input contains three integer numbers N, C, T (1 ≤ N ≤ 10<sup>5</sup>, 1 ≤ C ≤ 10<sup>5</sup> and 1 ≤ T ≤ 50), representing the number of popcorn bags in the competition, the number of competitors in the team, and the maximum amount of popcorn per second a competitor can eat. The second line contains N integers P<sub>i</sub> (1 ≤ P<sub>i</sub> ≤ 10<sup>4</sup>), representing the amount of popcorn on each of the N popcorn bags.</p>

### 출력 

 <p>Your program must output a single line, containing an integer number, representing The minimum amount of seconds it takes for the team to eat all the popcorn if they organize themselves as best possible.</p>

