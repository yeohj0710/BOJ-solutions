# [Silver III] Cable master - 7419 

[문제 링크](https://www.acmicpc.net/problem/7419) 

### 성능 요약

메모리: 2220 KB, 시간: 8 ms

### 분류

이분 탐색(binary_search)

### 문제 설명

<p>Inhabitants of the Wonderland have decided to hold a regional programming contest. The Judging Committee has volunteered and has promised to organize the most honest contest ever. It was decided to connect computers for the contestants using a "star" topology - i.e. connect them all to a single central hub. To organize a truly honest contest, the Head of the Judging Committee has decreed to place all contestants evenly around the hub on an equal distance from it.</p>

<p>To buy network cables, the Judging Committee has contacted a local network solutions provider with a request to sell for them a specified number of cables with equal lengths. The Judging Committee wants the cables to be as long as possible to sit contestants as far from each other as possible.</p>

<p>The Cable Master of the company was assigned to the task. He knows the length of each cable in the stock up to a centimeter, and he can cut them with a centimeter precision being told the length of the pieces he must cut. However, this time, the length is not known and the Cable Master is completely puzzled.</p>

<p>You are to help the Cable Master, by writing a program that will determine the maximal possible length of a cable piece that can be cut from the cables in the stock, to get the specified number of pieces.</p>

### 입력 

 <p>The first line of the input file contains two integer numb ers N and K, separated by a space. N (1 ≤ N ≤ 10000) is the number of cables in the stock, and K (1 ≤ K ≤ 10000) is the number of requested pieces. The first line is followed by N lines with one number per line, that specify the length of each cable in the stock in meters. All cables are at least 1 meter and at most 100 kilometers in length. All lengths in the input file are written with a centimeter precision, with exactly two digits after a decimal point.</p>

### 출력 

 <p>Write to the output file the maximal length (in meters) of the pieces that Cable Master may cut from the cables in the stock to get the requested number of pieces. The number must be written with a centimeter precision, with exactly two digits after a decimal point.</p>

<p>If it is not possible to cut the requested number of pieces each one being at least one centimeter long, then the output file must contain the single number "0.00" (without quotes).</p>

