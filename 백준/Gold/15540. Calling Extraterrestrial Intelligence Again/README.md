# [Gold V] Calling Extraterrestrial Intelligence Again - 15540 

[문제 링크](https://www.acmicpc.net/problem/15540) 

### 성능 요약

메모리: 2284 KB, 시간: 36 ms

### 분류

브루트포스 알고리즘(bruteforcing), 수학(math), 정수론(number_theory), 소수 판정(primality_test), 에라토스테네스의 체(sieve)

### 문제 설명

<p>A message from humans to extraterrestrial inteIigence was sent through the Arecibo radio telescope in Puerto Rico on the afternoon of Saturday November l6, l974. The message consisted of l679 bits and was meant to be translated to a rectangular picture with 23 × 73 pixels. Since both 23 and 73 are prime numbers, 23 × 73 is the unique possible size of the translated rectangular picture each edge of which is longer than l pixel. Of course, there was no guarantee that the receivers would try to translate the message to a rectangular picture. Even if they would, they might put the pixels into the rectangle incorrectly. The senders of the Arecibo message were optimistic.</p>

<p>We are planning a similar project. Your task in the project is to find the most suitable width and height of the translated rectangular picture. The term ``most suitable'' is defined as follows. An integer m greater than 4 is given. A positive fraction <em>a</em>/<em>b</em> less than or equal to 1 is also given. The area of the picture should not be greater than <em>m</em>. Both of the width and the height of the translated picture should be prime numbers. The ratio of the width to the height should not be less than <em>a</em>/<em>b</em> nor greater than 1. You should maximize the area of the picture under these constraints.</p>

<p>In other words, you will receive an integer <em>m</em> and a fraction <em>a</em>/<em>b</em> . It holds that <em>m</em> > 4 and 0 < <em>a</em>/<em>b</em> ≤ 1 . You should find the pair of prime numbers <em>p</em>, <em>q</em> such that <em>pq</em> ≤ <em>m</em> and <em>a</em>/<em>b</em> ≤ <em>p</em>/<em>q</em> ≤ 1 , and furthermore, the product <em>pq</em> takes the maximum value among such pairs of two prime numbers. You should report <em>p</em> and <em>q</em>as the "most suitable" width and height of the translated picture.</p>

### 입력 

 <p>The input is a sequence of at most 2000 triplets of positive integers, delimited by a space character in between. Each line contains a single triplet. The sequence is followed by a triplet of zeros, 0 0 0, which indicates the end of the input and should not be treated as data to be processed.</p>

<p>The integers of each input triplet are the integer <em>m</em>, the numerator <em>a</em>, and the denominator <em>b</em> described above, in this order. You may assume 4 < <em>m</em> < 100000 and 1 ≤ <em>a</em> ≤ <em>b</em> ≤ 1000.</p>

### 출력 

 <p>The output is a sequence of pairs of positive integers. The <em>i</em>-th output pair corresponds to the <em>i</em>-th input triplet. The integers of each output pair are the width <em>p</em> and the height <em>q</em> described above, in this order.</p>

<p>Each output line contains a single pair. A space character is put between the integers as a delimiter. No other characters should appear in the output.</p>

