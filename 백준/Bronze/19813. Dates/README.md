# [Bronze II] Dates - 19813 

[문제 링크](https://www.acmicpc.net/problem/19813) 

### 성능 요약

메모리: 31120 KB, 시간: 116 ms

### 분류

구현, 파싱, 문자열

### 제출 일자

2023년 10월 10일 23:38:03

### 문제 설명

<p>One of the problems in dates processing is that there are several formats of writing down dates.</p>

<p>Peter has the task to write a program that processes an array of texts. Some of them have Russian and European format "day.month.year", while others use American format  --- "month/day/year".</p>

<p>Here, year is a number from 1 to 9999, which may contain leading zeroes to get 2, 3 or 4 digits, month  --- number from 1 to 12, which may contain leading zero to get 2 digits, day  --- number from 1 to 31, which may contain leading zeros to get 2 digits. Dates can be incorrect (for example there can be "Since 2001 isn't a leap year, that's why 29.02.2001  --- incorrect date").</p>

<p>You've got an array of Peters' strings, which correspond to dates. Print each date in two formats: first as "<code>DD.MM.YYYY</code>', second as "<code>MM/DD/YYYY</code>".</p>

### 입력 

 <p>The first line of input contains one integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>n</mi><mo>≤</mo><mn>20</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le n \le 20\,000$</span></mjx-container>).</p>

<p>Each of the following <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> lines contain one date in format "<code>day.month.year</code>" or "<code>month/day/year</code>".</p>

### 출력 

 <p>Print <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> lines. Each line should contain the date in two formats: first as "<code>DD.MM.YYYY</code>", second as "<code>MM/DD/YYYY</code>".</p>

