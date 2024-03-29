# [Gold IV] Trick or Treat - 3855 

[문제 링크](https://www.acmicpc.net/problem/3855) 

### 성능 요약

메모리: 3716 KB, 시간: 716 ms

### 분류

이분 탐색(binary_search), 기하학(geometry), 삼분 탐색(ternary_search)

### 문제 설명

<p>Johnny and his friends have decided to spend Halloween night doing the usual candy collection from the households of their village. As the village is too big for a single group to collect the candy from all houses sequentially, Johnny and his friends have decided to split up so that each of them goes to a different house, collects the candy (or wreaks havoc if the residents don’t give out candy), and returns to a meeting point arranged in advance.</p>

<p>There are n houses in the village, the positions of which can be identified with their Cartesian coordinates on the Euclidean plane. Johnny’s gang is also made up of n people (including Johnny himself). They have decided to distribute the candy after everybody comes back with their booty. The houses might be far away, but Johnny’s interest is in eating the candy as soon as possible.</p>

<p>Keeping in mind that, because of their response to the hospitality of some villagers, some children might be wanted by the local authorities, they have agreed to fix the meeting point by the river running through the village, which is the line y = 0. Note that there may be houses on both sides of the river, and some of the houses may be houseboats (y = 0). The walking speed of every child is 1 meter per second, and they can move along any direction on the plane.</p>

<p>At exactly midnight, each child will knock on the door of the house he has chosen, collect the candy instantaneously, and walk back along the shortest route to the meeting point. Tell Johnny at what time he will be able to start eating the candy.</p>

### 입력 

 <p>Each test case starts with a line indicating the number n of houses (1 ≤ n ≤ 50 000). The next n lines describe the positions of the houses; each of these lines contains two floating point numbers x and y (−200 000 ≤ x, y ≤ 200 000), the coordinates of a house in meters. All houses are at different positions.</p>

<p>A blank line follows each case. A line with n = 0 indicates the end of the input; do not write any output for this case.</p>

### 출력 

 <p>For each test case, print two numbers in a line separated by a space: the coordinate x of the meeting point on the line y = 0 that minimizes the time the last child arrives, and this time itself (measured in seconds after midnight). Your answer should be accurate to within an absolute or relative error of 10<sup>−5</sup>.</p>

