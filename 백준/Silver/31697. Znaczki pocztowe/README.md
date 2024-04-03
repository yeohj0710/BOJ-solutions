# [Silver I] Znaczki pocztowe - 31697 

[문제 링크](https://www.acmicpc.net/problem/31697) 

### 성능 요약

메모리: 26564 KB, 시간: 156 ms

### 분류

자료 구조, 해시를 사용한 집합과 맵, 구현, 수학, 누적 합

### 제출 일자

2024년 4월 3일 22:41:11

### 문제 설명

<p>Bajtazar swego czasu dorobił się pokaźnej kolekcji znaczków pocztowych. Nie interesuje się tym jednak tak bardzo jak za młodu, dlatego postanowił rozdać swoją kolekcję młodszym fascynatom filatelistyki. Chciałby jednak zrobić to możliwie sprawiedliwie, do czego potrzebuje Twojej pomocy.</p>

<p>Kolekcja Bajtzara składa się z n znaczków, z czego i-ty pochodzi z miasta a<sub>i</sub>. Dla ułatwienia miasta oznaczamy liczbami całkowitymi. Bajtazar zamierza umieścić w gazecie ogłoszenie o tym, że planuje rozdać swoją kolekcję. Jeśli zgłosi się do niego k chętnych, to każdemu z nich sprezentuje jakiś podzbiór znaczków z zachowaniem pewnego warunku: każdy chętny będzie musiał otrzymać taki sam multizbiór znaczków. Oznacza to, że dla każdych dwóch chętnych i dla każdego miasta, oboje chętni muszą otrzymać taką samą liczbę znaczków z tego miasta. Może to w szczególności oznaczać, że Bajtazar nie rozda żadnego znaczka.</p>

<p>Bajtazar nie wie, ilu dokładnie chętnych się zgłosi. W związku z tym dla każdej liczby k z zakresu od 1 do n musisz stwierdzić, ile maksymalnie znaczków może rozdać Bajtazar, jeśli zgłosi się do niego k chętnych.</p>

### 입력 

 <p>W pierwszym wierszu wejścia znajduje się jedna liczba całkowita n (1 ≤ n ≤ 300 000), oznaczająca liczbę znaczków w kolekcji Bajtazara.</p>

<p>W drugim wierszu wejścia znajduje się n liczb całkowitych a<sub>1</sub>, a<sub>2</sub>, · · · , a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>) – numery miast, z których pochodzą kolejne znaczki Bajtazara.</p>

### 출력 

 <p>W jedynym wierszu wyjścia powinno znaleźć się n liczb oddzielonych pojedynczymi odstępami; k-ta z nich powinna być równa maksymalnej liczbie znaczków, które może rozdać Bajtazar, jeśli zgłosi się do niego k chętnych.</p>

