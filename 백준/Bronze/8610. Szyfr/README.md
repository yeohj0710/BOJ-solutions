# [Bronze II] Szyfr - 8610 

[문제 링크](https://www.acmicpc.net/problem/8610) 

### 성능 요약

메모리: 3680 KB, 시간: 32 ms

### 분류

구현(implementation), 문자열(string)

### 문제 설명

<p>Jaś otrzymał sekretną wiadomość. Jest ona ciągiem wielkich liter alfabetu łacińskiego (który składa się z liter: <code>ABCDEFGHIJKLMNOPQRSTUVWXYZ</code>). Wie, że do jej zakodowania użyto szyfru Cezara. Jest to szyfr przesuwający kolejne litery wiadomości o określoną, stałą liczbę znaków w alfabecie. Litery z końca alfabetu stają się wówczas literami z jego początku. Dla przykładu, w wyniku zaszyfrowania wiadomości</p>

<p align="center"><code>ABCEGIKMOQSUVWXYZ</code></p>

<p>szyfrem Cezara z przesunięciem <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c34"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>4</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$4$</span></mjx-container>, otrzymuje się wiadomość</p>

<p align="center"><code>EFGIKMOQSUWYZABCD</code></p>

<p>Jaś chciałby odszyfrować wiadomość. Nie wie niestety, jakiego dokonano w niej przesunięcia. Wielkie doświadczenie językowe Jasia pozwala mu jednak przewidzieć, jaka litera występowała najczęściej w oryginalnym tekście. Szczęście, które mu zawsze towarzyszy, sprawiło także, że taka litera jest tylko jedna - tzn. nie ma dwóch takich liter w oryginalnym tekście, które jednocześnie występowałyby największą liczbę razy.</p>

<p>Pomóż Jasiowi złamać szyfr, czyli odtworzyć oryginalną wiadomość.</p>

### 입력 

 <p>W pierwszym wierszu standardowego wejścia znajdują się: liczba całkowita <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>n</mi><mo>≤</mo><mn>1</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 ≤ n ≤ 1\,000\,000$</span></mjx-container>) oznaczająca długość wiadomości oraz znak <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D450 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$c$</span></mjx-container> - wielka litera alfabetu łacińskiego występująca najczęściej w oryginalnej wiadomości; <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> i <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D450 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$c$</span></mjx-container> są oddzielone pojedynczym odstępem. W drugim wierszu wejścia znajduje się zakodowana wiadomość, składająca się z <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> wielkich liter alfabetu łacińskiego, bez jakichkolwiek odstępów.</p>

### 출력 

 <p>Program powinien wypisać na standardowe wyjście jeden wiersz, zawierający odszyfrowaną oryginalną wiadomość. Możesz założyć, że jednoznaczne odtworzenie tej wiadomości będzie zawsze możliwe.</p>

