# [Gold II] Turniej - 8550 

[문제 링크](https://www.acmicpc.net/problem/8550) 

### 성능 요약

메모리: 6944 KB, 시간: 124 ms

### 분류

자료 구조(data_structures), 그래프 이론(graphs), 우선순위 큐(priority_queue), 위상 정렬(topological_sorting)

### 문제 설명

<p>W Bajtocji rozegrano turniej, w którym wzięło udział <em>n</em> zawodników. Zawodnikom przydzielono numery od 1 do <em>n</em>, w kolejności zgłoszeń. Planowano rozegranie pojedynków w każdej parze zawodników, jednak ze względu na silny wiatr turniej został przerwany po rozegraniu jedynie części z nich. Niestety ze względu na zaplanowaną obecność króla Bajtazara na ceremonii wręczenia nagród, zakończenie nie mogło zostać przesunięte. Jury stanęło więc przed problemem przydzielenia miejsc. Problem jest tym większy, iż w Bajtocji nie uznaje się miejsc równorzędnych. Aby przydzielić miejsca Sędzia Główny ustalił następującą regułę:</p>

<ul>
	<li>Każdy zawodnik musi zajmować wyższą pozycję w rankingu niż wszyscy zawodnicy, których pokonał w bezpośrednich pojedynkach.</li>
</ul>

<p>Członkowie Jury przystąpili ochoczo do tworzenia rankingów. Szybko okazało się jednak, że prawie wszyscy zaproponowali inny przydział miejsc. Sędzia główny ustalił więc sposób porównywania rankingów:</p>

<ul>
	<li>Ranking A jest lepszy od innego rankingu, jeśli na najwyższej rozróżniającej je pozycji ranking A posiada zawodnika, który zgłosił się wcześniej.</li>
</ul>

<p>Twoje zadanie polega na sporządzeniu najlepszego rankingu. Szczęśliwie okazało się, że wyniki dotychczas rozgrywanych pojedynków gwarantują istnitnie takiego rankingu.</p>

### 입력 

 <p>W pierwszym wierszu wejścia zapisane są dwie liczby całkowite <em>n</em> i <em>m</em>, oddzielone pojedynczym odstępem, 2 ≤ <em>n</em> ≤ 100 000, 0 ≤ <em>m</em> ≤ 100 000. Liczba <em>n</em> oznacza liczbę zawodników, a <em>m</em> liczbę rozegranych pojedynków. W kolejnych <em>m</em> wierszach zapisane są rozegrane pojedynki. Każdy z tych wierszy zawiera dwie liczby całkowite oddzielone pojedynczym odstępem, z których pierwsza to numer zwycięzcy pojedynku, a druga numer przegranego.</p>

### 출력 

 <p>Na wyjściu powinieneś wypisać najlepszy ranking, czyli numery zawodników, rozpoczynając od najwyższej pozycji. Numer każdego zawodnika wypisz w osobnym wierszu.</p>

