# [Silver II] Computer Network - 26865 

[문제 링크](https://www.acmicpc.net/problem/26865) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

그리디 알고리즘(greedy), 정렬(sorting)

### 문제 설명

<p>Cupa is building a connected network using $n$ computers and a single hub.</p>

<p>The computers are numbered from $1$ to $n$. Each computer $i$ has an outgoing wire that can transfer one bit of data to the other end in $d_i$ milliseconds.</p>

<p>The hub has $k$ ports into which the computer's wires can be connected, and each computer has a single port.</p>

<p>Cupa requires each computer's wire to be connected to some port --- either in the hub or in another computer. It should also be possible to send data to the hub from every computer, either directly or via other computers.</p>

<p>The network latency $t_i$ for each computer $i$ is defined as the time it takes to send one bit of data from computer $i$ to the hub. We will assume that it takes no time for intermediate computers to redirect received data to their own outgoing wires.</p>

<p>After the network is built, Cupa will calculate the network latency $t_i$ for each computer $i$. He wants the total network latency over all computers, i.e. $t_1 + t_2 + \ldots + t_n$, to be as small as possible.</p>

<p>Help Cupa to build the network in a way that minimizes the total network latency.</p>

### 입력 

 <p>The first line contains two integers $n$ and $k$ --- the number of computers and the number of ports in the hub ($1 \leq k \leq n \leq 100$).</p>

<p>The second line contains $n$ integers $d_1, d_2, \ldots, d_n$ --- the list of data transfer times through each computer's wire ($1 \leq d_i \leq 100$).</p>

### 출력 

 <p>Print a single integer --- the minimum possible total network latency.</p>

