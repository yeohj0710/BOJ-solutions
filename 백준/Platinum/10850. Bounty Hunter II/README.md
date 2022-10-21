# [Platinum III] Bounty Hunter II - 10850 

[문제 링크](https://www.acmicpc.net/problem/10850) 

### 성능 요약

메모리: 7420 KB, 시간: 496 ms

### 분류

이분 매칭(bipartite_matching)

### 문제 설명

<p>aSpike the bounty hunter is tracking another criminal through space. Luckily for him hyperspace travel has made the task of visiting several planets a lot easier. Each planet has a number of Astral Gates; each gate connects with a gate on another planet. These hyperspace connections are, for obvious safety reasons, one-way only with one gate being the entry point and the other gate being the exit point from hyperspace. Furthermore, the network of hyperspace connections must be loop-free to prevent the Astral Gates from exploding, a tragic lesson learned in the gate accident of 2022 that destroyed most of the moon.</p>

<p>While looking at his star map Spike wonders how many friends he needs to conduct a search on every planet. Each planet should not be visited by more than one friend otherwise the criminal might get suspicious and flee before he can be captured. While each person can start at a planet of their choosing and travel along the hyperspace connections from planet to planet they are still bound by the limitations of hyperspace travel.</p>

<p><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/10850/1.png" style="height:120px; width:275px"></p>

<p>Figure B.1: Illustration of the Sample Inputs.</p>

### 입력 

 <p>The input begins with an integer N specifying the number of planets (0 < N ≤ 1000). The planets are numbered from 0 to N −1. The following N lines specify the hyperspace connections. The i-th of those lines first contains the count of connections K (0 ≤ K ≤ N −1) from planet i followed by K integers specifying the destination planets.</p>

### 출력 

 <p>Output the minimum number of persons needed to visit every planet.</p>

