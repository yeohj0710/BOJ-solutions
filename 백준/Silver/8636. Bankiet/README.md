# [Silver II] Bankiet - 8636 

[문제 링크](https://www.acmicpc.net/problem/8636) 

### 성능 요약

메모리: 2256 KB, 시간: 4 ms

### 분류

순열 사이클 분할(permutation_cycle_decomposition)

### 문제 설명

<p>W restauracji Utalentowany Miś zaplanowano bankiet dla finalistów OIG. Goście zasiądą przy okrągłych stołach w ściśle określony sposób. Kierownik sali otrzymał listę gości wraz z informacją, kto ma siedzieć z lewej strony każdego z nich. Ile stołów musi przygotować na bankiet?</p>

<p>Opracuj program, który:</p>

<ul>
	<li>wczyta ze standardowego wejścia informacje o rozmieszczeniu gości,</li>
	<li>obliczy ile stołów trzeba przygotować,</li>
	<li>wypisze wynik na standardowe wyjście.</li>
</ul>

### 입력 

 <p>W pierwszym wierszu zapisano liczbę gości $N$ ($1 ≤ N ≤ 30\,000$). Goście są ponumerowani kolejnymi liczbami naturalnymi od $1$ do $N$. W drugim wierszu zapisano numer gościa siedzącego po lewej stronie pierwszego gościa. w trzecim wierszu zapisano numer gościa siedzącego po lewej stronie drugiego gościa itd. W $i$-tym wierszu zapisano numer gościa siedzącego po lewej stronie ($i-1$)-tego gościa. W $N+1$-szym wierszu zapisano numer gościa siedzącego po lewej stronie $N$-tego gościa.</p>

### 출력 

 <p>W pierwszym wierszu wypisz liczbę stolików potrzebnych do usadzenia wszystkich gości.</p>

