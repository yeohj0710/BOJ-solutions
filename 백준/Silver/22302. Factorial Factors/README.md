# [Silver IV] Factorial Factors - 22302 

[문제 링크](https://www.acmicpc.net/problem/22302) 

### 성능 요약

메모리: 2284 KB, 시간: 4 ms

### 분류

수학(math), 정수론(number_theory), 소수 판정(primality_test), 에라토스테네스의 체(sieve)

### 문제 설명

<p>The factorial of a number <code>N</code>, written <code>N!</code>, is the product of all integers between 1 and <code>N</code>, inclusively. For example, 5! = 120.</p>

<p>Every integer greater than 1 can be written as the product of 1 or more prime numbers, some of which may repeat. For example, 120 = 2 * 2 * 2 * 3 * 5.</p>

<p>For this problem, we are interested in the prime factorization of the factorial of a number. You will need to determine the number of total and distinct prime factors. For the example above, there are 5 total prime factors (2, 2, 2, 3, 5) and 3 distinct prime factors (2, 3, 5).</p>

### 입력 

 <p>The first line of input will contain the number of test cases, <code>C</code> (<code>1 ≤ C ≤ 50</code>). Each test case will consist of a single line containing an integer <code>N</code> (<code>2 ≤ N ≤ 100,000</code>).</p>

### 출력 

 <p>Each test case will result in a single line of output <code>D T</code> where <code>D</code> is the number of distinct prime factors of <code>N!</code> and <code>T</code> is the total number of prime factors of <code>N!</code>.</p>

