# [Diamond I] 다트판 - 9246 

[문제 링크](https://www.acmicpc.net/problem/9246) 

### 성능 요약

메모리: 2112 KB, 시간: 0 ms

### 분류

미적분학(calculus), 수학(math), 확률론(probability)

### 문제 설명

<p>상근이는 친구들과 함께 다트를 하는 것을 좋아한다. 상근이는 다트를 잘하지 못한다. 하지만, 수학은 매우 잘한다. 이제 뛰어난 수학실력을 이용해서 다트 점수의 기댓값을 구해보려고 한다.</p>

<p>상근이가 중심으로부터 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45F TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>r</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(r\)</span></mjx-container>만큼 떨어진 곳을 맞출 확률은 다음과 같다.</p>

<p><mjx-container class="MathJax" jax="CHTML" display="true" style="font-size: 109%; position: relative;"> <mjx-math display="true" class="MJX-TEX" aria-hidden="true" style="margin-left: 0px; margin-right: 0px;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D453 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45F TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mfrac space="4"><mjx-frac type="d"><mjx-num><mjx-nstrut type="d"></mjx-nstrut><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-num><mjx-dbox><mjx-dtable><mjx-line type="d"></mjx-line><mjx-row><mjx-den><mjx-dstrut type="d"></mjx-dstrut><mjx-mrow><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D70B TEX-I"></mjx-c></mjx-mi><mjx-msup><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D70E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: 0.289em;"><mjx-texatom size="s" texclass="ORD"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msup></mjx-mrow></mjx-den></mjx-row></mjx-dtable></mjx-dbox></mjx-frac></mjx-mfrac><mjx-msup><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D452 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: 0.48em;"><mjx-texatom size="s" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mfrac><mjx-frac><mjx-num><mjx-nstrut></mjx-nstrut><mjx-msup size="s"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45F TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: 0.363em;"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-num><mjx-dbox><mjx-dtable><mjx-line></mjx-line><mjx-row><mjx-den><mjx-dstrut></mjx-dstrut><mjx-mrow size="s"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-msup><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D70E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: 0.289em;"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-mrow></mjx-den></mjx-row></mjx-dtable></mjx-dbox></mjx-frac></mjx-mfrac></mjx-texatom></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="block"><math xmlns="http://www.w3.org/1998/Math/MathML" display="block"><mi>f</mi><mo stretchy="false">(</mo><mi>r</mi><mo stretchy="false">)</mo><mo>=</mo><mfrac><mn>1</mn><mrow><mn>2</mn><mi>π</mi><msup><mi>σ</mi><mrow data-mjx-texclass="ORD"><mn>2</mn></mrow></msup></mrow></mfrac><msup><mi>e</mi><mrow data-mjx-texclass="ORD"><mo>−</mo><mfrac><msup><mi>r</mi><mn>2</mn></msup><mrow><mn>2</mn><msup><mi>σ</mi><mn>2</mn></msup></mrow></mfrac></mrow></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\[f(r)=\frac{1}{2 \pi  \sigma^{2}}e^{-\frac{r^2}{2 \sigma^2}}\]</span> </mjx-container></p>

<p>즉, 중심으로부터 거리가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45F TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>r</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(r\)</span></mjx-container>만큼 떨어진 곳의 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-n"><mjx-c class="mjx-c394"></mjx-c></mjx-mi><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c22C5"></mjx-c></mjx-mo><mjx-mi class="mjx-n" space="3"><mjx-c class="mjx-c394"></mjx-c></mjx-mi><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi mathvariant="normal">Δ</mi><mi>x</mi><mo>⋅</mo><mi mathvariant="normal">Δ</mi><mi>y</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(\Delta x \cdot \Delta y\)</span></mjx-container>을 맞출 확률은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D453 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45F TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo><mjx-mi class="mjx-n"><mjx-c class="mjx-c394"></mjx-c></mjx-mi><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c22C5"></mjx-c></mjx-mo><mjx-mi class="mjx-n" space="3"><mjx-c class="mjx-c394"></mjx-c></mjx-mi><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>f</mi><mo stretchy="false">(</mo><mi>r</mi><mo stretchy="false">)</mo><mi mathvariant="normal">Δ</mi><mi>x</mi><mo>⋅</mo><mi mathvariant="normal">Δ</mi><mi>y</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(f(r)\Delta x \cdot \Delta y\)</span></mjx-container> 이다. 여기서 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D70E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>σ</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(\sigma\)</span></mjx-container>는 표준 편차이고, 이 값은 지금까지 마신 술의 양에 따라 다르다.</p>

<p>다트에서 점수를 매기는 방식은 아래와 같다.</p>

<ul>
	<li>Bull's eye 내부는 50점</li>
	<li>Bull 고리는 25점</li>
	<li>각각의 부채꼴 모양은 겉에 쓰여 있는 숫자만큼 점수</li>
	<li>위의 경우에 Triple ring 안에 다트를 맞춘 경우 부채꼴 점수의 3배</li>
	<li>또, Double ring 안에 맞춘 경우에는 2배.</li>
</ul>

<p>Double ring의 바깥에 다트를 맞춘 경우 점수는 0점이다. 모든 부채꼴의 넓이는 같다.</p>

<p><img alt="" src="https://www.acmicpc.net/upload/images/dartboard.png" style="height:181px; width:250px"></p>

<p>출처: 위키미디어 (CC BY-SA 3.0 licensed by Tijmen Stam)</p>

### 입력 

 <p>첫째 줄에 6개의 실수가 주어진다. 이 실수는 Bull'seye, bull, Triple Ring의 안쪽, 바깥쪽, Double Ring의 안쪽 바깥쪽의 반지름이며, 단위는 모두 센티미터이다. 둘째 줄에는 표준 편차 (\sigma\)가 주어지며, 단위는 센티미터이다. 모든 실수는 구간 [10<sup>-3</sup>,100]에 포함된다.</p>

### 출력 

 <p>첫째 줄에 상근이가 다트를 하나 던졌을 때 기댓값을 출력한다. 절대/상대 오차는 10<sup>-4</sup>까지 허용한다.</p>

