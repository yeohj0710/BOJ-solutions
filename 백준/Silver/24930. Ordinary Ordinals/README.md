# [Silver I] Ordinary Ordinals - 24930 

[문제 링크](https://www.acmicpc.net/problem/24930) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

조합론(combinatorics), 분할 정복을 이용한 거듭제곱(exponentiation_by_squaring), 수학(math)

### 문제 설명

<p>Sets, sets, sets. Everything in math is just a set. Even the natural numbers can be represented as sets. For example, we can represent the the number $0$ as the empty set $\{\}$. The number $1$ can be represented as $\{\{\}\}$.</p>

<p>But what about $2$? Consider $\{\{\},\{\{\}\}\}$, the set containing both the empty set and $\{\{\}\}$. This is a nice choice for $2$ for two reasons: we have that $0$ and $1$ are <em>elements</em> of $2$ and we also have that $0$ and $1$ are <em>subsets</em> of $2$.</p>

<p>In general, for $N>0$ we can represent $N$ as the set $\{0,1, \dots ,N-1\}$ where we recursively apply the representations for $0,1, \dots ,N-1$. For example: $$\begin{eqnarray*} 3 & = & \{ 0, 1, 2\} \\ & = & \{ \{ \} , \{ 0\} , \{ 0, 1\} \} \\ & = & \{ \{ \} , \{ \{ \} \} , \{ \{ \}, \{ 0\} \} \} \\ & = & \{ \{ \} , \{ \{ \} \} , \{ \{ \} , \{ \{ \} \} \} \} \end{eqnarray*}$$</p>

<p>Thus, for each $0≤i<N$, $i$ is both a member of $N$ and a subset of $N$. Another nice feature is the size of the set representing $N$ is also $N$. But what is not so nice is the number of characters it takes to write such a set. Given a natural number $N≥0$, how many braces and commas are required to write out the set representing $N$ in the above manner?</p>

<p>More specifically, let $f(N)$ be the number of bracket and comma characters required to write out the set representing $N$. Since $f(N)$ can be quite large, your job is to determine $f(N)$ modulo some positive integer $M$.</p>

### 입력 

 <p>Input consists of two integers $N$ ($0≤N<2^{63}$) and $M$ ($1≤M<2^{31}$) as described above.</p>

### 출력 

 <p>Display the value of $f(N)$ reduced modulo $M$. That is, the remainder that would be left if you divided $f(N)$ by $M$.</p>

