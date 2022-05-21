# [Bronze III] Förvirrad föreläsare - 21280 

[문제 링크](https://www.acmicpc.net/problem/21280) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현(implementation)

### 문제 설명

<p>Bjarki undervisar på en kurs på universitetet, men är inte särskilt organiserad av sig. Särskilt förvirrad blir han av att antalet föreläsningar varierar från vecka till vecka.</p>

<p>Första veckan håller Bjarki sina <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A$</span></mjx-container> schemalagda föreläsningar. Men varje vecka utom den första kommer han att förutsätta att schemat är likadant som det var föregående vecka. Andra veckan håller han alltså exakt <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A$</span></mjx-container> föreläsningar igen. Därför kan det ibland hända att Bjarki håller lektion inför tomt klassrum och ibland att han inte dyker upp när han ska. I slutet av veckan får han dock ett argt brev av sin chef med vilka tider han skulle hållit föreläsningar och kommer istället att använda dessa tider veckan därpå. </p>

<p>Skriv ett program som, givet antalet schemalagda föreläsningar under <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> veckor, skriver ut antalet föreläsningar Bjarki kommer hålla inför tomma klassrum samt antalet föreläsningar Bjarki inte dyker upp på.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/a42b4005-f57d-413c-a250-d96a942ecc84/-/preview/" style="width: 660px; height: 249px;"></p>

<p style="text-align: center;">Figur 1. Schemat i det första exemplet. F markerar schemalagda föreläsningar. En blå cirkel markerar att Bjarki håller lektionen inför tomt klassrum och en röd triangel markerar att han inte dyker upp. <strong>Förklaring:</strong> Första veckan har Bjarki alltid koll på vilka föreläsningar han ska hålla. Veckan därpå tror han att han bara ska hålla en föreläsning, och missar därför två stycken. Tredje veckan håller han tre föreläsningar, varav en inför tomt klassrum, och sista veckan missar han två föreläsningar. Totalt har han hållt 1 tom föreläsning och missat 4 föreläsningar.</p>

### 입력 

 <p>Först kommer talet <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> på en egen rad, där <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c39"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>9</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1\le N \le 9$</span></mjx-container>. Därefter kommer <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> heltal, antalet schemalagda föreläsningar under var och en av veckorna.</p>

<p>Det kan aldrig vara mer än 10 föreläsningar under en vecka och tiderna fylls alltid på från början av veckan utan luckor (se figuren ovan). </p>

### 출력 

 <p>Skriv ut antalet tomma föreläsningar Bjarki har hållt, ett mellanslagtecken, därefter antalet föreläsningar Bjarki har missat.</p>

