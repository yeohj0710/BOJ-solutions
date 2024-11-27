# [Bronze III] Intuitive Elements - 32795 

[문제 링크](https://www.acmicpc.net/problem/32795) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 11월 27일 23:21:34

### 문제 설명

<p>Brandon is learning the periodic table! However, he doesn't like some of the elements because the symbol of the element contains letters which are not present in the name of the element. He finds this to be unintuitive, especially because in other contexts, he expects abbreviations to not introduce random letters.</p>

<p>Given a string and a proposed abbreviation, determine if Brandon would find it intuitive. Brandon finds an abbreviation intuitive if and only if every letter that appears in the abbreviation appears in the original string. Brandon does not look at the abbreviation carefully, so it is acceptable for a letter to appear more times in the abbreviation than in the original string, or for the letters to appear in a different order between the string and the abbreviation.</p>

### 입력 

 <p>The first line of input contains a single integer $t$ ($1\leq t \leq 10^3$). This is the number of test cases.</p>

<p>Each test case is represented on two lines.</p>

<p>The first line of each test case contains a single string $a$ of length at least two and at most 50. This string only contains lowercase letters. The second line of the test case contains a single string $b$ that is strictly shorter than $a$ and also only contains lowercase letters.</p>

### 출력 

 <p>Output $t$ lines, one for each test case.</p>

<p>For each test case, if all the letters in $b$ appear in $a$, output <code>YES</code>. Otherwise, output <code>NO</code>.</p>

