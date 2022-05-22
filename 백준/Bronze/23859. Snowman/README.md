# [Bronze I] Snowman - 23859 

[문제 링크](https://www.acmicpc.net/problem/23859) 

### 성능 요약

메모리: 2168 KB, 시간: 0 ms

### 분류

그리디 알고리즘(greedy), 문자열(string)

### 문제 설명

<p>Do you wanna build a snowman? Of course, you do! And you finally have enough snow on the walk in front of your house. But you see that snow on different sections of the walkway has different quality: on some sections, snow is good, white and sticky, let's say, such sections are class <strong>a</strong> sections, other sections with a bit worse quality would have class <strong>b</strong>, for even worse quality --- class <strong>c</strong> and so on.</p>

<p>To build a base for a snowman you should roll a snowball forward or backward from one track section to another. There is enough snow, so you can go back to the same section as many times as you want.  Of course, you want to build a snowman out of the best snow, and the closer to the centre of the snowball, the more important the quality of snow for the future snowman, so at the beginning of the building process you should choose the best sections. For example, if you roll a snowball starting on section with class <strong>c</strong>, then on section <strong>a</strong>, and then on section <strong>b</strong> (<strong>cab</strong>), it would not be as solid as the <strong>bab</strong> ball, and the <strong>aca</strong> snowball would be even better.</p>

<p>Classes of track sections are written in the string <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s$</span></mjx-container>. To make the first ball, you need to roll it through the track sections <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$k$</span></mjx-container> times. You can start to roll a ball for the snowman at any section of the track. What sequence of sections should be used to get the most solid ball?</p>

### 입력 

 <p>The first line contains the string <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s$</span></mjx-container> of lowercase letters --- track sections classes. The number of sections is not less than 2 and not greater than 100.</p>

<p>The second line contains one integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$k$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c34"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>k</mi><mo>≤</mo><msup><mn>10</mn><mn>4</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le k \le 10^4$</span></mjx-container>) --- the number of sections for the snowball. </p>

### 출력 

 <p>Print the sequence of letters without spaces --- section classes in the order you will roll the ball.</p>

