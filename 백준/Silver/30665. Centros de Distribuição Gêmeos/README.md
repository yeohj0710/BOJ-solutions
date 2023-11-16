# [Silver IV] Centros de Distribuição Gêmeos - 30665 

[문제 링크](https://www.acmicpc.net/problem/30665) 

### 성능 요약

메모리: 10732 KB, 시간: 1212 ms

### 분류

비트 집합, 그래프 이론

### 제출 일자

2023년 11월 16일 13:17:07

### 문제 설명

<p>A Empresa Rural Internacional (ERI) está buscando expandir seus negócios. Para isso, ela precisa encontrar uma nova cidade para instalar um novo centro de distribuição. Entretanto, como algum centro pode ficar inoperante, como aconteceu no último verão devido 'as chuvas, ela quer se certificar de que não ficará sem distribuir seus produtos caso alguma cidade fique incomunicável. Para isso, ao invés de instalar seu novo centro de distribuição em uma única cidade, ela escolherá duas cidades vizinhas, de forma a garantir que haja redundância, caso algum problema ocorra com uma das localidades.</p>

<p>Simonal, diretor de logística da ERI, conhece bem a região e seus possíveis clientes. Dada uma cidade, Simonal sabe a área de alcance de sua empresa, ou seja, as cidades alcançadas caso um novo centro de distribuição seja instalado nessa cidade. Naturalmente, a área de alcance de uma cidade sempre inclui ela mesma. A fim de que a redundância desejada seja satisfeita, as duas cidades candidatas a receber o novo centro de distribuição devem ter a mesma área de alcance.</p>

<p>Você, estagiário buscando um aumento de salário para comprar a mais nova expansão do seu MMORPG favorito, quer agradar o seu chefe, Dionísio Cabeço Fechantes, também conhecido como Dudu, e, usando os dados obtidos com Simonal, quer mostrar o quão bom você é em computação e contar de quantas formas distintas estas cidades podem ser escolhidas.</p>

### 입력 

 <p>A entrada é composta por diferentes casos de teste. A primeira linha de cada caso de teste contém n e m, n ≤ 1000 e m ≤ n(n−1)/2, onde n é o número de cidades da região. A seguir, m linhas, contendo dois inteiros distintos a e b cada, 1 ≤ a, b ≤ n, indicando que a faz parte da área de alcance de b e vice-versa.</p>

<p>A entrada termina com n = m = 0. Essa linha não deve ser processada.</p>

### 출력 

 <p>Para cada caso de teste, seu programa deve imprimir uma linha contendo o número de diferentes pares de cidades que podem receber novos centros.</p>

