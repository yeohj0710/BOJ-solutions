# [Diamond V] Tile Cutting - 10793 

[문제 링크](https://www.acmicpc.net/problem/10793) 

### 성능 요약

메모리: 46684 KB, 시간: 348 ms

### 분류

자료 구조, 고속 푸리에 변환, 수학, 정수론, 세그먼트 트리

### 제출 일자

2023년 11월 23일 18:21:51

### 문제 설명

<p>Youssef is a Moroccan tile installer who specializes in mosaics like the one shown on the right. He has rectangular tiles of many dimensions at his disposal, and the dimensions of all his tiles are integer numbers of centimeters. When Youssef needs parallelogram-shaped tiles, he cuts them from his supply on hand. To make this work easier, he invented a tile cutting machine that superimposes a centimeter grid on the cutting surface to guide the cuts on the tiles. Due to machine limitations, aesthetic sensibilities, and Youssef’s dislike of wasted tiles, the following rules determine the possible cuts.</p>

<p>The rectangular tile to be cut must be positioned in the bottom left corner of the cutting surface and the edges must be aligned with the grid lines.<br>
The cutting blade can cut along any line connecting two different grid points on the tile boundary as long as the points are on adjacent boundary edges.<br>
The four corners of the resulting parallelogram tile must lie on the four sides of the original rectangular tile.<br>
No edge of the parallelogram tile can lie along an edge of the rectangular tile.</p>

<p>Figure J.1 shows the eight different ways in which a parallelogram tile of area 4 square centimeters can be cut out of a rectangular tile, subject to these restrictions.</p>

<p style="text-align:center"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/10793/1.png" style="height:300px; width:551px"></p>

<p style="text-align:center">Figure J.1: The eight different ways for cutting a parallelogram of area 4.</p>

<p>Youssef needs to cut tiles of every area between a<sub>lo</sub> and a<sub>hi</sub>. Now he wonders, for which area a in this range can he cut the maximum number of different tiles?</p>

### 입력 

 <p>The input consists of multiple test cases. The first line of input contains an integer n (1 ≤ n ≤ 500), the number of test cases. The next n lines each contain two integers a<sub>lo</sub>, a<sub>hi</sub> (1 ≤ a<sub>lo</sub> ≤ a<sub>hi</sub> ≤ 500 000), the range of areas of the tiles.</p>

### 출력 

 <p>For each test case a<sub>lo</sub>, a<sub>hi</sub>, display the value a between a<sub>lo</sub> and a<sub>hi</sub> such that the number of possible ways to cut a parallelogram of area a is maximized as well as the number of different ways w in which such a parallelogram can be cut. If there are multiple possible values of a display the smallest one.</p>

