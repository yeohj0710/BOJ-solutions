# [Gold V] Baralho Embaralhado - 13611 

[문제 링크](https://www.acmicpc.net/problem/13611) 

### 성능 요약

메모리: 3692 KB, 시간: 4 ms

### 분류

수학(math), 순열 사이클 분할(permutation_cycle_decomposition)

### 문제 설명

<p>Um baralho contém um número par 2n de cartas a<sub>1</sub>, a<sub>2</sub>,..., a<sub>2n</sub>, todas distintas (a<sub>1</sub> < a<sub>2</sub> ... < a<sub>2n</sub>). O baralho encontra-se perfeitamente ordenado, ou seja, a primeira carta é a<sub>1</sub>, a segunda carta é a<sub>2</sub>, e assim por diante, até a última carta, que é a<sub>2n</sub>.</p>

<p>Um croupier então executa repetidamente um procedimento de embaralhar, que consiste de dois passos:</p>

<ol>
	<li>O baralho é divido ao meio;</li>
	<li>As cartas das duas metades são então intercaladas, de maneira que se a sequência de cartas do baralho no início do passo 1 é x<sub>1</sub>, x<sub>2</sub>, ..., x<sub>2n</sub>, então ao final do passo 2 a sequência de cartas se torna x<sub>n+1</sub>, x<sub>1</sub>, x<sub>n+2</sub>, x<sub>2</sub>,..., x<sub>2n</sub>, x<sub>n</sub>.</li>
</ol>

<p>Dado o número de cartas do baralho, escreva um programa que determine quantas vezes o procedimento de embaralhar descrito acima deve ser re petido de forma que o baralho volte a ficar ordenado.</p>

### 입력 

 <p>A única linha da entrada contém um inteiro par P (2 ≤ P ≤ 2 x 10<sup>5</sup> ), indicando o número de cartas do baralho (note que o valor P corresponde ao valor 2n na descrição acima).</p>

<p> </p>

### 출력 

 <p>Seu programa deve produzir uma única linha contendo um único inteiro, o número mínimo de vezes que o processo de embaralhamento deve ser repetido para que o baralho fique novamente ordenado.</p>

