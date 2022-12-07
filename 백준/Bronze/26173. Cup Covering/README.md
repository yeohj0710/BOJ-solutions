# [Bronze II] Cup Covering - 26173 

[문제 링크](https://www.acmicpc.net/problem/26173) 

### 성능 요약

메모리: 2032 KB, 시간: 0 ms

### 분류

기하학(geometry)

### 문제 설명

<p>Janneke is addicted to Dutch stroopwafels. She could eat them the whole day, every day. What she loves most during the colder seasons, is to put a stroopwafel on top of a cup full of hot, steaming cocoa. This way, the stroopwafel warms and softens and the caramel melts, leaving a gooey but delicious mess between her fingers when she picks it up.</p>

<p>For \name, this is pure heaven. Or well, it could be if she could just find the perfect cup for the round stroopwafels. Instead, she is left with unsatisfying stroopwafel experiences time and time again. Either the opening of the cup is too small for her stroopwafel and the edges stay hard and cold or -- even worse -- the opening is too large and the stroopwafel just falls in with a splash, becoming soggy and disgusting.</p>

<p>Janneke finally has had enough and decides to take matters into her own hands. She establishes the <em>Ideal Cup Production Company</em> (ICPC) which produces the ideal stroopwafel cups. Customers can simply tell her the area of the round stroopwafel they prefer and she delivers a cup with an opening that is perfectly covered by the stroopwafel. For the production, she needs to determine the diameter of the cup opening first. Soon, she will have orders from all over the world which she can barely keep up with, so she might need a little help here.</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>One line with an integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-texatom size="s" texclass="ORD"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn><mo><</mo><mi>a</mi><mo>≤</mo><msup><mn>10</mn><mrow data-mjx-texclass="ORD"><mn>15</mn></mrow></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0 < a\leq 10^{15}$</span></mjx-container>), the area of the round stroopwafel in <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-mtext class="mjx-n"><mjx-c class="mjx-c63"></mjx-c><mjx-c class="mjx-c6D"></mjx-c></mjx-mtext><mjx-script style="vertical-align: 0.363em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mtext>cm</mtext><mn>2</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$\text{cm}^2$</span></mjx-container>.</li>
</ul>

### 출력 

 <p>Output the diameter of the ideal cup in centimetres such that a stroopwafel with area <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a$</span></mjx-container> covers it perfectly. Note that the rim of the cup is so thin that it can be neglected.</p>

<p>Your answer should have an absolute or relative error of at most <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-texatom size="s" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c39"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mn>10</mn><mrow data-mjx-texclass="ORD"><mo>−</mo><mn>9</mn></mrow></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$10^{-9}$</span></mjx-container>.</p>

