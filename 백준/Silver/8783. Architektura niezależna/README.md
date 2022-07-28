# [Silver III] Architektura niezależna - 8783 

[문제 링크](https://www.acmicpc.net/problem/8783) 

### 성능 요약

메모리: 108864 KB, 시간: 336 ms

### 분류

깊이 우선 탐색(dfs), 그래프 이론(graphs), 그래프 탐색(graph_traversal)

### 문제 설명

<p>Monika jest artystką - architektem. Każdy z zaprojektowanych przez nią budynków to dzieło sztuki. Monika jest pełna pasji i tworzy jeden projekt za drugim, zawsze jednak realizuje własne pomysły, w ogóle nie projektując budynków na zamówienie.</p>

<p>Jak jednak wiadomo, trzeba z czegoś żyć. Monika postanowiła sprzedawać swoje prace zainteresowanym, nie łamiąc przy tym swoich zasad - jeśli ktoś chce kupić od Moniki projekt, musi liczyć na to, że stworzyła już kiedyś coś, co będzie odpowiadało jego potrzebom. Aby ułatwić przeszukiwanie zbioru projektów pod kątem potrzeb klienta, Monika chciałaby sprawnie obliczyć powierzchnię każdego z zaprojektowanych przez siebie budynków.</p>

<p>Każdy projekt ma postać regularnej siatki na planie kwadratu o wymiarach <strong>N</strong> wierszy na <strong>N</strong> kolumn, zawierającej <strong>N</strong><sup>2</sup> pól, z których każde jest albo wolnym polem, albo ścianą budynku. Wolne pola oznaczamy znakiem kropki ('.'), natomiast ściany budynku znakiem hash ('#') (por. przykład).</p>

<p>Ściany budynku tworzą łamaną zamkniętą bez samoprzecięć - każde pole zawierające ścianę sąsiaduje (od góry, dołu, z prawej lub lewej strony) z dokładnie dwoma polami zawierającymi ściany, które stanowią sąsiadów danego pola na łamanej opisującej kształt budynku.</p>

<p>Znając projekt budynku oblicz jego powierzchnię, tj. łączną liczbę pól stanowiących ścianę budynku oraz wolnych pól wewnątrz budynku.</p>

### 입력 

 <p>W pierwszej linii znajduje się liczba naturalna <strong>Z</strong> ( 1 <= <strong>Z</strong> <= 10 ) opisująca liczbę zestawów testowych. Następnie opisywane są kolejne zestawy.</p>

<p>W pierwszej linii opisu pojedynczego zestawu testowego znajduje się jedna liczba naturalna <strong>N</strong> ( 3 <= <strong>N</strong> <= 1000 ) oznaczająca wymiary projektu Moniki. W <strong>N</strong> kolejnych liniach podawany jest opis projektu wg opisanej w treści zadania składni.</p>

### 출력 

 <p>Dla każdego zestawu testowego należy w osobnej linii wypisać powierzchnię budynku opisywanego przez projekt.</p>

