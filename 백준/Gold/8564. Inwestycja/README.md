# [Gold IV] Inwestycja - 8564 

[문제 링크](https://www.acmicpc.net/problem/8564) 

### 성능 요약

메모리: 2168 KB, 시간: 0 ms

### 분류

조합론(combinatorics), 다이나믹 프로그래밍(dp), 트리에서의 다이나믹 프로그래밍(dp_tree), 그래프 이론(graphs), 수학(math), 트리(trees)

### 문제 설명

<p>Sieć komputerowa Bajtelandii składa się z <em>n</em> węzłów połączonych światłowodami. Sieć światłowodów nie jest zbyt gęsta. Umożliwia nawiązanie połączenia (być może pośredniego) pomiędzy dowolnymi dwoma węzłami w sieci tylko w jeden sposób. To powoduje, że na niektórych łączach powstaje spory tłok i następują duże opóźnienia w przesyłaniu informacji. Natomiast ruch w sieci jest dość spory i w zasadzie jednakowo natężony, tzn. w każdej jednostce czasu, każde dwa wezły wymieniają pomiędzy sobą pakiet informacji. <b><i>Obciążeniem</i></b> łącza nazwiemy liczbę pakietów przesyłanych przez to łącze w jednej jednostce czasu. (Zauważmy, że obciążenie łącza, to liczba węzłów znajdujących się po jednej stronie łącza pomnożona przez liczbę węzłów położonych po drugiej stronie łącza.) Firma zarządzająca siecią zastanawia się, czy obciążenie sieci jest na tyle duże, by konieczna była modernizacja lub rozbudowa sieci. W tym celu chciałaby się dowiedzieć, jakie jest największe obciążenie łącza w sieci.</p>

<p>Napisz program, który obliczy, ile wynosi obciążenie najbardziej obciążonego łącza w sieci.</p>

### 입력 

 <p>Program powinien czytać dane z wejścia standardowego. W pierwszym wierszu podana jest liczba <em>n</em> (1 ≤ <em>n</em> ≤ 1 000), która oznacza liczbę węzłów w sieci. W kolejnych <em>n</em> - 1 wierszach opisane są łącza sieci, po jednym w wierszu. Opis łącza składa się z dwóch liczb oddzielonych spacją; liczby te oznaczają numery węzłów, pomiędzy którymi przebiega łącze.</p>

### 출력 

 <p>Program powinien pisać wynik na wyjście standardowe. Wynikiem powinna być jedna liczba oznaczająca obciążenie najbardziej obciążonego łącza w sieci.</p>

