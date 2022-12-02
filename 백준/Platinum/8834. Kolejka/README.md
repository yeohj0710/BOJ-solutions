# [Platinum V] Kolejka - 8834 

[문제 링크](https://www.acmicpc.net/problem/8834) 

### 성능 요약

메모리: 6836 KB, 시간: 80 ms

### 분류

자료 구조(data_structures), 세그먼트 트리(segtree)

### 문제 설명

<p>Budowniczy Adrian zatrudniony przy budowie nowego centrum handlowego nie ma dzisiaj zbyt wiele pracy. Dzięki temu może oddać się zbieraniu materiałów do jego pracy naukowej poświęconej kolejkom sklepowym.</p>

<p>Adrian obserwuje kolejkę do pobliskiego sklepu i zapisuje jakie miejsce w kolejce zajęła każda z kolejno przychodzących osób. Na początku dnia nikt nie stał w kolejce. Kolejne osoby niekoniecznie stawały na końcu. Mogli umówić się z kimś, zapłacić komuś, dać komuś coś, lub załatwić to w jeszcze inny sposób i wejść w dowolne miejsce w kolejce. Każda osoba, która raz stanęła w kolejce, nie wyszła z niej aż do południa, kiedy okazało się, że sklep nie zostanie dzisiaj otwarty i wszyscy się rozeszli.</p>

<p>Adrian zastanawia się, czy używając jego notatek można odtworzyć ustawienie kolejki tuż przed rozejściem się ludzi.</p>

### 입력 

 <p>W pierwszej linii wejścia znajduje się liczba zestawów testowych <strong>Z</strong> ( 1 <= <strong>Z</strong> <= 10 ). Następnie opisywane są kolejne zestawy testowe.</p>

<p>W pierwszej linii opisu zestawu znajduje się liczba naturalna <strong>N</strong> ( 1 <= <strong>N</strong> <= 100 000 ) oznaczająca liczbę ludzi, którzy od rana do południa stanęli w kolejce. W drugiej linii znajduje się N liczb  <strong>X</strong><sub><strong>i</strong></sub> ( 0 <= <strong>X</strong><sub><strong>i</strong></sub> < <strong>i</strong>, dla 1 <= <strong>i</strong> <= <strong>N</strong> ). Jeśli <strong>X</strong><sub><strong>i</strong></sub> jest równe 0, oznacza to, że <strong>i</strong>-ta osoba stanęła na samym początku kolejki, w przeciwnym wypadku <strong>i</strong>-ta osoba stanęła za osobą, która w chwili jej przyjścia była <strong>X</strong><sub><strong>i</strong></sub>-tą osobą licząc od początku kolejki.</p>

### 출력 

 <p>Dla każdego zestawu należy w osobnej linii wypisać ciąg <strong>N</strong> liczb oddzielonych pojedynczymi spacjami. <strong>i</strong>-ta liczba powinna być ostateczną pozycją w kolejce osoby, która dołączyła do niej jako <strong>i</strong>-ta. Jeśli osoba stoi na początku kolejki, jej pozycja to 1, pozycja za nią 2, itd.</p>

