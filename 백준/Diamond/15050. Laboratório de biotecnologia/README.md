# [Diamond V] Laboratório de biotecnologia - 15050 

[문제 링크](https://www.acmicpc.net/problem/15050) 

### 성능 요약

메모리: 714908 KB, 시간: 5060 ms

### 분류

고속 푸리에 변환, 수학, 누적 합

### 제출 일자

2023년 11월 21일 02:44:10

### 문제 설명

<p>Uma cadeia ponderada é definida sobre um alfabeto Σ e uma função f que atribui um peso a cada caractere do alfabeto. Assim, podemos definir o peso de uma cadeia s como a soma dos pesos de todos os caracteres em s.</p>

<p>Vários problemas da bioinformática podem ser formalizados como problemas em cadeias ponderadas. Um exemplo é a espectrometria de massa de proteínas, uma técnica que permite identificar proteínas de forma bastante eficiente. Podemos representar cada aminoácido por um caractere distinto e uma proteína é representada pela cadeia de caracteres relativos aos aminoácidos que a compõe.</p>

<p>Uma das aplicações da espectrometria de massa de proteínas são buscas em bancos de dados. Para isso a cadeia que representa a proteina é dividida em subcadeias, a massa de cada subcadeia é determinada, e a lista de massas é comparada com um banco de dados de proteínas. Um dos desafios para essa técnica é lidar com cadeias muito grandes de caracteres, que podem ter várias possíveis subcadeias. A quantidade de subcadeias selecionadas é fundamental para obter bons resultados.</p>

<p>Em seu primeiro dia de estágio em um renomado laborat´orio de biotecnologia, Carlos recebeu a tarefa de determinar, para uma cadeia s, a quantidade de pesos distintos encontrada ao avaliar os pesos de todas as subcadeias não vazias de caracteres consecutivos de s.</p>

<p>Carlos não conseguiu pensar em uma solução eficiente para essa tarefa, mas felizmente ele conhece o grupo ideal para auxiliá-lo.</p>

<p>Considerando que s é formada por letras minúsculas e cada letra tem um peso diferente entre 1 e 26: a letra a tem peso 1, a letra b tem peso 2 e assim por diante. Mostre que seu time é capaz de ajudar Carlos a impressionar seu supervisor logo na primeira semana, com uma solução capaz de lidar facilmente com as maiores cadeias de caracteres existentes.</p>

### 입력 

 <p>Apenas uma linha, que contém a cadeia s formada por letras minúsculas, cujo comprimento |s| satisfaz 1 ≤ |s| ≤ 10<sup>5</sup>.</p>

### 출력 

 <p>Seu programa deve produzir uma única linha com um inteiro representando a quantidade de pesos distintos das subcadeias não vazias de caracteres consecutivos de s.</p>

