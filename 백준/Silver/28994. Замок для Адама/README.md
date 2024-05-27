# [Silver V] Замок для Адама - 28994 

[문제 링크](https://www.acmicpc.net/problem/28994) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 이분 탐색, 그리디 알고리즘, 수학

### 제출 일자

2024년 5월 28일 00:19:39

### 문제 설명

<p>Обозлённая волшебница Агата превратила принца Адама в отвратительное чудовище за то, что тот был злым, грубым и самовлюблённым. После чего она решила построить для него специальный заколдованный замок, куда посадит Адама. Ему же придется снять чары с себя и с замка, чтобы перестать быть чудовищем.</p>

<p>Как бы там ни было, сейчас вам нужно помочь Агате построить замок. Так как замок необычный, то он будет построен из специальной древесины. У Агаты есть одно очень длинное бревно длины <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D459 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>l</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$l$</span></mjx-container>. Она хочет распилить его на максимальное количество волшебных бревен. Множество бревен называется волшебным, если длины всех бревен из этого множества попарно различны. </p>

### 입력 

 <p>В единственной строке входного файла содержится одно целое число <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D459 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>l</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$l$</span></mjx-container> --- длина бревна <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D459 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-texatom size="s" texclass="ORD"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c38"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msup><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><mi>l</mi><mo>≤</mo><msup><mn>10</mn><mrow data-mjx-texclass="ORD"><mn>18</mn></mrow></msup><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$(1 \le l \le 10^{18})$</span></mjx-container>. </p>

### 출력 

 <p>В единственной строке выходного файла выведите одно число --- максимальное количество волшебных бревен, на которое Агата может распилить исходное бревно.</p>

