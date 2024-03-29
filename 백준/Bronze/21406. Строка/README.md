# [Bronze II] Строка - 21406 

[문제 링크](https://www.acmicpc.net/problem/21406) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 문자열

### 문제 설명

<p>В математике часто встречаются так называемые <em>рекуррентные соотношения</em>. Обычно они применяются для задания числовых последовательностей --- очередное число в последовательности некоторым образом выражается через предыдущие. Примером такой последовательности являются числа Фибоначчи (в них очередное число равно сумме двух предыдущих).  </p>

<p>С помощью соотношений такого типа можно задавать не только последовательности чисел, но и последовательности строк. В этой задаче рассматривается последовательность строк $s_0$, $s_1$, \ldots, задаваемая следующим образом. </p>

<p>Строка $s_0$ пуста, а каждая строка $s_i$ ($i \ge 1$) получается из $s_{i-1}$ по следующему правилу: если десятичная запись числа $i$ входит как подстрока в $s_{i-1}$, то $s_i = s_{i-1}$, иначе $s_i$ получается приписыванием к $s_{i-1}$ в конец десятичной записи числа $i$.</p>

<p>Задано число $n$. Необходимо найти строку $s_n$.</p>

### 입력 

 <p>Входной файл содержит целое число $n$ ($1 \le n \le 500$).</p>

### 출력 

 <p>В выходной файл выведите строку $s_n$.</p>

