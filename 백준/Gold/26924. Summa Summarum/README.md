# [Gold V] Summa Summarum - 26924 

[문제 링크](https://www.acmicpc.net/problem/26924) 

### 성능 요약

메모리: 3592 KB, 시간: 32 ms

### 분류

이분 탐색(binary_search), 정렬(sorting), 삼분 탐색(ternary_search)

### 문제 설명

<p>Anders och Beatrice har varsin lista med heltal. Dessa två listor innehåller lika många tal. Anders har en dröm. Han har en dröm om att summan av alla tal i hans lista ska vara lika med summan av alla tal i Beatrices lista (för att det skulle göra henne imponerad). Anders har läst flera år på högskolan, så han vet att så inte alltid är fallet. Anders har dock en plan för att komma närmare sin dröm.</p>

<p>Anders vill se till att skillnaden mellan de två summorna är så liten som möjligt. Anders kan ta ett av talen i sin egen lista och byta ut mot ett av talen i Beatrices lista, när hon inte ser det. Observera att han endast vågar göra ett sådant byte, annars blir det för misstänkt.</p>

<p>Givet att han måste göra precis ett sådant byte, vilken är den <em>minimala skillnad</em> mellan summorna som Anders kan åstadkomma?</p>

### 입력 

 <p>På första raden i indata står ett heltal <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>, antalet tal i Anders och Beatrices listor. På andra raden i indata följer en lista med <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> heltal som beskriver talen i Anders lista. På tredje och sista raden i indata följer en lista med <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> heltal som beskriver talen i Beatrices lista. För varje tal <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>X</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$X$</span></mjx-container> i listorna i indata så gäller att <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-msup><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-script></mjx-msup><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo>−</mo><msup><mn>10</mn><mn>5</mn></msup><mo>≤</mo><mi>X</mi><mo>≤</mo><msup><mn>10</mn><mn>5</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$-10^5 \leq X \leq 10^5$</span></mjx-container>.</p>

### 출력 

 <p>Utdata ska bestå av ett heltal: den minimala skillnaden mellan summorna av Anders och Beatrices listor, efter att Anders har utfört bytet som beskrevs ovan.</p>

