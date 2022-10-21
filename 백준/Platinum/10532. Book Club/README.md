# [Platinum III] Book Club - 10532 

[문제 링크](https://www.acmicpc.net/problem/10532) 

### 성능 요약

메모리: 2848 KB, 시간: 8 ms

### 분류

이분 매칭(bipartite_matching)

### 문제 설명

<p>Porto’s book club is buzzing with excitement for the annual book exchange event! Every year, members bring their favorite book and try to find another book they like that is owned by someone willing to trade with them.</p>

<p>I have been to this book exchange before, and I definitely do not want to miss it this year, but I feel that the trading should be improved. In the past, pairs of members interested in each other’s books would simply trade: imagine that person A brought a book that person B liked and vice-versa, then A and B would exchange their books.</p>

<p>I then realized that many members were left with the same book they walked-in with... If instead of looking for pairs I looked for triplets, I could find more valid exchanges! Imagine that member A only likes member B’s book, while B only likes C’s book and C likes A’s book. These 3 people could trade their books in a cycle and everyone would be happy!</p>

<p>But why stop at triplets? Cycles could be bigger and bigger! Could you help me find if it is possible for everyone to go out with a new book? Be careful, because members will not give their book without receiving one they like in return.</p>

<p>Given the members of the book club and the books they like, can we find cycles so that everyone receives a new book?</p>

### 입력 

 <p>The first line has two integers: N, the number of people, and M, the total number of “declarations of interest”. Each of the following M lines has two integers, A and B, indicating that member A likes the book that member B brought (0 ≤ A, B < N). Numbers A and B will never be the same (a member never likes the book he brought).</p>

### 출력 

 <p>You should output YES if we can find a new book for every club member and NO if that is not possible.</p>

