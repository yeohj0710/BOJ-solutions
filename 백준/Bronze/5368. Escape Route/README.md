# [Bronze II] Escape Route - 5368 

[문제 링크](https://www.acmicpc.net/problem/5368) 

### 성능 요약

메모리: 2036 KB, 시간: 0 ms

### 분류

기하학, 구현, 수학, 피타고라스 정리

### 제출 일자

2024년 1월 1일 14:24:07

### 문제 설명

<p>ou are surrounded by Imperial warships and must land on a planet to escape. Your best chance is to find a route to the closest planet. Unfortunately the navigation system has been damaged. Your job is to write a program that will find the planet that is closest to your current location. The problem will be described using a mxm grid containing the characters</p>

<ul>
	<li>s: your ship</li>
	<li>w: imperial warship</li>
	<li>p: planet</li>
	<li>-: open space</li>
</ul>

<p>The two dimensional location of an object (i.e., your ship, imperial warship, or planet) corresponds to its location in the grid. For example given a 4x4 grid the locations are specified by the following table.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/e4fd9605-9acb-4aa8-b0b4-5d42afff8740/-/preview/" style="width: 187px; height: 85px;"></p>

<p>Recall that the distance between two points (x1, y1) and (x2, y2) is given by the formula</p>

<p style="text-align: center;">dist = ( (x1 - x2)<sup>2</sup> + (y1 - y2)<sup>2</sup> )<sup>1/2</sup></p>

### 입력 

 <p>The first line will have a positive integer, n, specifying the number of data sets to follow. Each data set will have a positive integer, m, on the first line followed by m lines and each line will have exactly m characters. The characters will be either s, w, p, or -.</p>

### 출력 

 <p>For each data set print one line with the coordinates of your current location followed by a colon, coordinates of a closest planet followed by a colon, and the distance to that planet formatted to two decimal places.</p>

