# [Bronze II] Hidden Password - 31169 

[문제 링크](https://www.acmicpc.net/problem/31169) 

### 성능 요약

메모리: 2956 KB, 시간: 8 ms

### 분류

구현, 문자열

### 제출 일자

2024년 3월 3일 12:27:45

### 문제 설명

<p>After a successful internship, Bytholomew was hired as a senior cyber-security expert. To lead by example, he decided to finally heed his own advice and use two <em>different</em> passwords for his e-mail and for the Facepalm social media. Unfortunately, remembering two passwords proved too much for him. Moreover, he couldn't just plainly write the passwords somewhere, as it would be against another of his recommendations. But being a security expert, Bytholomew knew exactly what to do. He chose his favorite integer $d > 0$ and wrote both passwords encoded with Caesar cipher with key $d$.</p>

<p>Pleased with his work, he looked at his notes and the horrible truth dawned on him: after the encoding, the first (e-mail) password became literally the second (Facepalm) password, while the second one turned into the first one. ,,Holy moly!" -- Bytholomew exclaimed, as there was nothing more to say.</p>

<p>Now you too can become a security expert -- knowing the first of Bytholomew's passwords, guess the second one, if possible.</p>

### 입력 

 <p>The first line of input contains the number of test cases $z$ ($1 \leq z \leq 20$). The descriptions of the test cases follow.</p>

<p>Each test case is one word -- the password -- consisting of lowercase English letters, in a separate line. The password has at least $1$ character and at most $200\,000$ characters.</p>

<p>The total number of characters in all passwords does not exceed $1\,000\,000$.</p>

### 출력 

 <p>For every given password, guess and output the second one in a separate line. If the second password cannot be determined (either because there is no solution or because there is more than one), output a single word <code>NIE</code> instead.</p>

