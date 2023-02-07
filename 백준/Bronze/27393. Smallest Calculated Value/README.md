# [Bronze I] Smallest Calculated Value - 27393 

[문제 링크](https://www.acmicpc.net/problem/27393) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산(arithmetic), 브루트포스 알고리즘(bruteforcing), 수학(math)

### 문제 설명

<p>Given three integers and the arithmetic operators ($+$, $-$, $*$, $/$), determine the smallest non-negative integer possible without changing the order of the initial integers. Order of the operators is without their normal precedence, just left-to-right. Note: integer division is fine only if the remainder is zero. For example, $9/3$ is okay, $10/3$ is not. </p>

<p>For example:</p>

<blockquote>
<p>For $2$, $3$ and $5$, the answer is $0$ ($2+3-5$)</p>

<p>For $9$, $9$ and $9$, the answer is $0$ ($9-9\ /\ 9$)</p>

<p>For $5$, $7$ and $3$, the answer is $1$ ($5-7+3$)</p>
</blockquote>

<p>Given three integers, determine the smallest non-negative result that can be computed by placement of the given operators between the numbers. The operators may only be placed between numbers, not in front (they are not unary operators). An operator must be placed between each pair of numbers, numbers cannot be concatenated.</p>

### 입력 

 <p>The single line of input contains three integers, all in the range from $1$ to $1{,}000$.</p>

### 출력 

 <p>Output a single integer, which is the smallest non-negative value possible applying the arithmetic operators.</p>

