# [Bronze II] Judicious cuts (Easy) - 27646 

[문제 링크](https://www.acmicpc.net/problem/27646) 

### 성능 요약

메모리: 2020 KB, 시간: 8 ms

### 분류

애드 혹, 해 구성하기, 기하학

### 문제 설명

<blockquote>
<p><em>“Draw seven red lines, all of them strictly perpendicular to each other, some of them with green ink and some of them with transparent ink. Also, one of them should be in the form of a kitten.” </em><em>(<a href="https://www.youtube.com/watch?v=BKorP55Aqvg">The Expert</a>)</em></p>
</blockquote>

<p>Oh, don’t worry, your task is much simpler. We’ll stay in the two-dimensional plane.</p>

<p>A straight line cuts the two-dimensional plane into two regions. With two such lines you can cut the plane either into three regions (if you use two parallel lines) or into four regions (if you use lines that intersect each other).</p>

<p>Below are some ways of arranging three lines to cut the plane into 7, 6, and 6 regions, respectively.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/83560455-cda9-43c0-a354-3cb15f882a4b/-/preview/"></p>

<p>We want to divide the plane into <em>r</em> regions. Tell us how to draw the lines.</p>

<p>You may output any set of lines that divides the plane into exactly <em>r</em> regions and satisfies the output format described below.</p>

### 입력 

 <p>The first line of the input file contains an integer <em>t</em> ≤ 1000 specifying the number of test cases. Each test case is preceded by a blank line.</p>

<p>Each test case is a single line with a single integer 1 ≤ <em>n</em> ≤ 1000: the desired amount of regions.</p>

### 출력 

 <p>The output for each test case should start with a line with a single integer ℓ: the number of lines you want to draw. Then, output ℓ lines, each describing one line in the plane. Each line is specified by two space-separated integers <em>m</em> and <em>b</em>. These represent the line with the equation <em>y</em> = <em>m</em><em>x</em> + <em>b</em>. (You are not allowed to draw vertical lines. Obviously, you don’t need to do so.)</p>

<p>For every test case you can use at most 1 000 lines. All slopes (<em>m</em>) and <em>y</em>-intercepts (<em>b</em>) have to be between −10 000 and 10 000, inclusive. It is guaranteed that such solutions exist for all valid test cases.</p>

