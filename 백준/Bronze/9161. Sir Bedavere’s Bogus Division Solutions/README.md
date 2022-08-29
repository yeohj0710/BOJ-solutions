# [Bronze III] Sir Bedavere’s Bogus Division Solutions - 9161 

[문제 링크](https://www.acmicpc.net/problem/9161) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산(arithmetic), 브루트포스 알고리즘(bruteforcing), 구현(implementation), 수학(math)

### 문제 설명

<p>The wise Sir Bedavere often uses non-standard logic, yet achieves positive results. Well, it seems he has been at it again, this time with division. He has determined that canceling the common digit of a numerator and denominator produces the correct answer. Of course, Sir Bedavere only tried this on a small sample of three digit numbers. An example of what he did is shown in the following division problem (in which he canceled the common 6):</p>

<p><mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mfrac><mjx-frac><mjx-num><mjx-nstrut></mjx-nstrut><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c36"></mjx-c><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-num><mjx-dbox><mjx-dtable><mjx-line></mjx-line><mjx-row><mjx-den><mjx-dstrut></mjx-dstrut><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c36"></mjx-c><mjx-c class="mjx-c36"></mjx-c><mjx-c class="mjx-c34"></mjx-c></mjx-mn></mjx-den></mjx-row></mjx-dtable></mjx-dbox></mjx-frac></mjx-mfrac><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mfrac space="4"><mjx-frac><mjx-num><mjx-nstrut></mjx-nstrut><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-num><mjx-dbox><mjx-dtable><mjx-line></mjx-line><mjx-row><mjx-den><mjx-dstrut></mjx-dstrut><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c36"></mjx-c><mjx-c class="mjx-c34"></mjx-c></mjx-mn></mjx-den></mjx-row></mjx-dtable></mjx-dbox></mjx-frac></mjx-mfrac></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mfrac><mn>166</mn><mn>664</mn></mfrac><mo>=</mo><mfrac><mn>16</mn><mn>64</mn></mfrac></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\( \frac {166}{664} = \frac {16}{64} \)</span> </mjx-container><br>
If you divide this fraction, 6 of 16”6” and 6 of “6”64 are cancel out.</p>

<p>Your task is to find all three digit number combinations with the following property:</p>

<p>number combinations where removing the rightmost digit from the top number (numerator) and the identical leftmost digit from the bottom number (denominator) leaves the result of the calculation unchanged.</p>

<p>Omit all of the trivial cases — xxx/xxx = xx/xx (222/222 = 22/22). The solutions are to be shown in increasing order of the top number (the numerator).</p>

### 입력 

 <p>NONE! There is no input for this problem.</p>

### 출력 

 <p>Show the bogus division problems one to a line in the format shown below (which gives a sample merely to show the format) — single spaces separate the non-blank characters.</p>

