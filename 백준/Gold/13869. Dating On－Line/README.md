# [Gold V] Dating On-Line - 13869 

[문제 링크](https://www.acmicpc.net/problem/13869) 

### 성능 요약

메모리: 2892 KB, 시간: 24 ms

### 분류

기하학(geometry), 그리디 알고리즘(greedy), 다각형의 넓이(polygon_area)

### 문제 설명

<p>Alex registered in an online dating system to search for the perfect partner. The system requires each of its members to fill a form specifying how much they enjoy N different activities, grading them on a scale from 0 to 100. To present this information to potential dates, the system creates a profile featuring a special kind of polygon called “radial diagram”.</p>

<p>A radial diagram for N activities is drawn by marking N points on the plane. Starting from the vertical direction, the i-th point in clockwise order represents the i-th activity specified by the member, and is a distance S<sub>i</sub> away from the center of the diagram, where S<sub>i</sub> is the score given by the member for the corresponding activity. The angle sustained at the center of the diagram from each pair of consecutive points is always the same, and the polygon is formed by drawing the segments whose endpoints are consecutive points. Note that for the purposes of the radial diagram, the first and last points are considered to be consecutive.</p>

<p>For example, if N = 6 Alex might specify the following activities: singing with score S<sub>1</sub> = 10, running with score S<sub>2</sub> = 60, listening to music with score S<sub>3</sub> = 70, traveling with score S<sub>4</sub> = 70, eating out with score S<sub>5</sub> = 80, and visiting museums with score S6 = 80. Then the corresponding radial diagram would be as shown in the figure below.</p>

<p><img alt="" src="https://onlinejudgeimages.s3.amazonaws.com/problem/13869/%EC%8A%A4%ED%81%AC%EB%A6%B0%EC%83%B7%202016-11-19%20%EC%98%A4%EC%A0%84%203.50.39.png" style="height:217px; width:313px"></p>

<p>The area of a radial diagram depends on the order in which the different activities are specified, and Alex suspects that a profile depicting a radial diagram with greater area might be more successful. For example, the radial diagram in the following figure features the same activities and scores as the example above, but has a greater area.</p>

<p><img alt="" src="https://onlinejudgeimages.s3.amazonaws.com/problem/13869/%EC%8A%A4%ED%81%AC%EB%A6%B0%EC%83%B7%202016-11-19%20%EC%98%A4%EC%A0%84%203.50.48.png" style="height:208px; width:313px"></p>

<p>Alex has asked you to write a program to find the maximum possible area of a radial diagram given a list of activities graded with scores between 0 and 100.</p>

### 입력 

 <p>The first line contains an integer N representing the number of activities (3 ≤ N ≤ 10<sup>5</sup> ). The second line contains N integers S<sub>1</sub>, S<sub>2</sub>, . . . , S<sub>N</sub> representing the scores given by Alex to each activity (0 ≤ S<sub>i</sub> ≤ 100 for i = 1, 2, . . . , N)</p>

### 출력 

 <p>Output a line with a rational number representing the maximum possible area of a radial diagram featuring the scores given in the input. The result must be output as a rational number with exactly 3 digits after the decimal point, rounded if necessary.</p>

