# [Bronze I] Web Colors - 10600 

[문제 링크](https://www.acmicpc.net/problem/10600) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현(implementation)

### 문제 설명

<p>Web colors are colors used in displaying web pages. Each color may be specified either as an RGB triple, or a common English name used for that color. Colors are specified according to the intensity of their red, green and blue components, each represented by eight bits. Thus, there are 24 bits used to specify a web color, and totally 16,777,216 colors can be imagined as web colors. But the HTML 4 specification defines only 16 named colors as shown in the table.</p>

<p>It is often useful to map one given color to one of the HTML named colors. The goal of this problem is to perform just such a mapping in the RGB color space. The input to the program consists of a collection of RGB color values to be mapped to the closest HTML named color.</p>

<p>For a given color, the “closest” color in the HTML color names is a color with the smallest Euclidean distance from the given color. That is, if rgb is the color to be mapped, and {<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D445 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43A TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>R</mi><mn>1</mn></msub><msub><mi>G</mi><mn>1</mn></msub><msub><mi>B</mi><mn>1</mn></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(R_1G_1B_1\)</span></mjx-container>, . . . , <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D445 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-texatom size="s" texclass="ORD"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msub><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43A TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-texatom size="s" texclass="ORD"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msub><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-texatom size="s" texclass="ORD"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>R</mi><mrow data-mjx-texclass="ORD"><mn>16</mn></mrow></msub><msub><mi>G</mi><mrow data-mjx-texclass="ORD"><mn>16</mn></mrow></msub><msub><mi>B</mi><mrow data-mjx-texclass="ORD"><mn>16</mn></mrow></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(R_{16}G_{16}B_{16}\)</span></mjx-container>} is the set of the HTML colors, the closest color is the one which minimizes the distance expression</p>

<p><mjx-container class="MathJax" jax="CHTML" display="true" style="font-size: 109%; position: relative;"> <mjx-math display="true" class="MJX-TEX" aria-hidden="true" style="margin-left: 0px; margin-right: 0px;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D451 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-msqrt space="4"><mjx-sqrt><mjx-surd><mjx-mo class="mjx-lop"><mjx-c class="mjx-c221A TEX-S2"></mjx-c></mjx-mo></mjx-surd><mjx-box style="padding-top: 0.45em;"><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D445 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D45F TEX-I"></mjx-c></mjx-mi><mjx-msup><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo><mjx-script style="vertical-align: 0.289em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msup><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43A TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D454 TEX-I"></mjx-c></mjx-mi><mjx-msup><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo><mjx-script style="vertical-align: 0.289em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msup><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D44F TEX-I"></mjx-c></mjx-mi><mjx-msup><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo><mjx-script style="vertical-align: 0.289em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-box></mjx-sqrt></mjx-msqrt></mjx-math><mjx-assistive-mml unselectable="on" display="block"><math xmlns="http://www.w3.org/1998/Math/MathML" display="block"><mi>d</mi><mo>=</mo><msqrt><mo stretchy="false">(</mo><msub><mi>R</mi><mi>i</mi></msub><mo>−</mo><mi>r</mi><msup><mo stretchy="false">)</mo><mn>2</mn></msup><mo>+</mo><mo stretchy="false">(</mo><msub><mi>G</mi><mi>i</mi></msub><mo>−</mo><mi>g</mi><msup><mo stretchy="false">)</mo><mn>2</mn></msup><mo>+</mo><mo stretchy="false">(</mo><msub><mi>B</mi><mi>i</mi></msub><mo>−</mo><mi>b</mi><msup><mo stretchy="false">)</mo><mn>2</mn></msup></msqrt></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\[d = \sqrt{(R_i-r)^2 + (G_i - g)^2 + (B_i - b)^2}\]</span> </mjx-container></p>

<p>where <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(i\)</span></mjx-container> is an integer from 1 to 16.</p>

<table class="table table-bordered" style="width:50%">
	<thead>
		<tr>
			<th>#</th>
			<th>Name</th>
			<th>Red</th>
			<th>Green</th>
			<th>Blue</th>

		</tr>
	</thead>
	<tbody>
		<tr>
			<td>1</td>
			<td>White</td>
			<td>255</td>
			<td>255</td>
			<td>255</td>
		</tr>
		<tr>
			<td>2</td>
			<td>Silver</td>
			<td>192</td>
			<td>192</td>
			<td>192</td>
		</tr>
		<tr>
			<td>3</td>
			<td>Gray</td>
			<td>128</td>
			<td>128</td>
			<td>128</td>
		</tr>
		<tr>
			<td>4</td>
			<td>Black</td>
			<td>0</td>
			<td>0</td>
			<td>0</td>
		</tr>
		<tr>
			<td>5</td>
			<td>Red</td>
			<td>255</td>
			<td>0</td>
			<td>0</td>
		</tr>
		<tr>
			<td>6</td>
			<td>Maroon</td>
			<td>128</td>
			<td>0</td>
			<td>0</td>
		</tr>
		<tr>
			<td>7</td>
			<td>Yellow</td>
			<td>255</td>
			<td>255</td>
			<td>0</td>
		</tr>
		<tr>
			<td>8</td>
			<td>Olive</td>
			<td>128</td>
			<td>128</td>
			<td>0</td>
		</tr>
		<tr>
			<td>9</td>
			<td>Lime</td>
			<td>0</td>
			<td>255</td>
			<td>0</td>
		</tr>
		<tr>
			<td>10</td>
			<td>Green</td>
			<td>0</td>
			<td>128</td>
			<td>0</td>
		</tr>
		<tr>
			<td>11</td>
			<td>Aqua</td>
			<td>0</td>
			<td>255</td>
			<td>255</td>
		</tr>
		<tr>
			<td>12</td>
			<td>Teal</td>
			<td>0</td>
			<td>128</td>
			<td>128</td>
		</tr>
		<tr>
			<td>13</td>
			<td>Blue</td>
			<td>0</td>
			<td>0</td>
			<td>255</td>
		</tr>
		<tr>
			<td>14</td>
			<td>Navy</td>
			<td>0</td>
			<td>0</td>
			<td>128</td>
		</tr>
		<tr>
			<td>15</td>
			<td>Fuchsia</td>
			<td>255</td>
			<td>0</td>
			<td>255</td>
		</tr>
		<tr>
			<td>16</td>
			<td>Purple</td>
			<td>128</td>
			<td>0</td>
			<td>128</td>
		</tr>
	</tbody>
</table>

### 입력 

 <p>There are multiple test cases in the input. Each test case consists of a line containing three integers 0 ⩽ r, g, b ⩽ 255 which are the Red, Green and Blue intensities of the color, respectively. The input terminates with -1 -1 -1 which should not be processed.</p>

### 출력 

 <p>For each test case, output a line containing the name of the closest HTML color to the given color. If there are more than one closest color, print the one which has a smaller associated number in the above table.</p>

