# [Silver IV] Zapałki - 8586 

[문제 링크](https://www.acmicpc.net/problem/8586) 

### 성능 요약

메모리: 25468 KB, 시간: 80 ms

### 분류

브루트포스 알고리즘(bruteforcing), 다이나믹 프로그래밍(dp), 구현(implementation), 누적 합(prefix_sum)

### 문제 설명

<p>Bajtek bawi się zapałkami. Na jednym z końców zapałki znajduje się główka pokryta masą ułatwiającą zapłon. Bajtek ułożył zapałki w linii prostej jedna obok drugiej, w taki sposób, że każdy koniec zapałki sąsiaduje z końcem pewnej innej zapałki, oprócz dwóch skrajnych zapałek, które sąsiadują tylko jednym końcem.</p>

<p align="center"><img alt="" src=""></p>

<p align="center">Przykładowe ułożenie zapałek.</p>

<p>Bajtek chciałby podpalić pierwszą zapałkę (skrajną z lewej) tak aby wszystkie zapałki spaliły się. Pierwszą zapałkę zapali on przy użyciu zapalniczki, może więc to zrobić bez względu na jej ułożenie. Natomiast między kolejnymi zapałkami ogień przeniesie się tylko, jeśli co najmniej jedna z tych zapałek w miejscu połączenia będzie zwrócona główką. Zastanawiamy się, ile minimalnie zapałek musimy odwrócić, aby wszystkie zapałki spaliły się, jeśli podpalimy pierwszą zapałkę.</p>

### 입력 

 <p>Pierwszy wiersz standardowego wejścia zawiera jedną liczbę całkowitą $n$ ($1 ≤ n ≤ 1\,000\,000$) oznaczającą liczbę zapałek Bajtka. Drugi wiersz opisuje ułożenie kolejnych zapałek - zawiera ciąg $n$ liczb całkowitych $x_1, x_2, \dots , x_n$, przy czym $x_i$ oznacza zwrot $i$-tej zapałki w ciągu: $0$ jeśli główka zapałki znajduje się z lewej strony, zaś $1$ jeśli główka zapałki znajduje się z prawej strony.</p>

### 출력 

 <p>Pierwszy i jedyny wiersz standardowego wyjścia powinien zawierać jedną liczbę całkowitą równą minimalnej liczbie zapałek, jakie należy odwrócić.</p>

