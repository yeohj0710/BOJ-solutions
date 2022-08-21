# [Gold IV] Palindromic Paths - 10767 

[문제 링크](https://www.acmicpc.net/problem/10767) 

### 성능 요약

메모리: 18568 KB, 시간: 228 ms

### 분류

브루트포스 알고리즘(bruteforcing), 자료 구조(data_structures), 해시를 사용한 집합과 맵(hash_set), 중간에서 만나기(mitm), 문자열(string)

### 문제 설명

<p>Farmer John's farm is in the shape of an N×N grid of fields (2≤N≤18), each labeled with a letter in the alphabet. For example:</p>

<pre>ABCD
BXZX
CDXB
WCBA</pre>

<p>Each day, Bessie the cow walks from the upper-left field to the lower-right field, each step taking her either one field to the right or one field downward. Bessie keeps track of the string that she generates during this process, built from the letters she walks across. She gets very disoriented, however, if this string is a palindrome (reading the same forward as backward), since she gets confused about which direction she had walked.</p>

<p>Please help Bessie determine the number of different palindromes she can form during her walk. Different ways of forming the same palindrome only count once; for example, there are several routes that yield the palindrome ABXZXBA above, but there are only four distinct palindromes Bessie can form, ABCDCBA, ABCWCBA, ABXZXBA, ABXDXBA.</p>

### 입력 

 <p>The first line of input contains N, and the remaining N lines contain the N rows of the grid of fields. Each row contains N characters that are in the range A..Z.</p>

### 출력 

 <p>Please output the number of distinct palindromes Bessie can form.</p>

