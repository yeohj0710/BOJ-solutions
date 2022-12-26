# [Bronze II] Vikingahackare - 26906 

[문제 링크](https://www.acmicpc.net/problem/26906) 

### 성능 요약

메모리: 2028 KB, 시간: 0 ms

### 분류

비트마스킹(bitmask), 브루트포스 알고리즘(bruteforcing), 구현(implementation), 문자열(string)

### 문제 설명

<p>Att vikingarna var duktiga krigare känner nog de flesta till, men att de också hade bra programmerare är mindre välkänt. Att programmera en runsten krävde mycket tid och lämnade inte mycket rum för misstag. Detta gjorde tyvärr även runstenarna extra sårbara för vikingahackare, som härjade fritt.</p>

<p>Du har fått i uppdrag att översätta en runsten från den här tiden med hjälp av ett uppslagsverk av tecken och dess binära representation (vikingarna saknade högnivåspråk och kodade direkt i ettor och nollor). Eftersom de flesta runstenar till slut blev hackade så finns det dock risk att vissa delar av koden är fel.</p>

### 입력 

 <p>På första raden står ett tal $T$ ($1 \le T \le 16$), antalet tecken i alfabetet.</p>

<p>Därefter följer $T$ rader bestående av ett tecken (små och stora bokstäver mellan <code>a-z</code> samt siffror kan förekomma) följt av tecknets binära representation (en sekvens av ettor och nollor som alltid är av längd 4). Till sist följer en sträng av $N$ ($1 \leq N \leq 4\,000)$ stycken ettor och nollor, runstenen som ska översättas. Det är garanterat att $N$ är delbar med $4$ och att det inte finns två olika tecken med samma binära representation i indata.</p>

### 출력 

 <p>Skriv ut en rad med $N$ tecken, översättningen av runstenen. För de tecken som inte kunde översättas korrekt ska istället ett <code>"?"</code> skrivas ut.</p>

