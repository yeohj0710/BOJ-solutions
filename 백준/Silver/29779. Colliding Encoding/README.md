# [Silver IV] Colliding Encoding - 29779 

[문제 링크](https://www.acmicpc.net/problem/29779) 

### 성능 요약

메모리: 6572 KB, 시간: 2360 ms

### 분류

자료 구조, 해시를 사용한 집합과 맵, 구현, 문자열

### 문제 설명

<p>Alan just had his first cryptography class in school today. He decided to apply what he learned and come up with his own cipher. He will map each English letter from <code>A</code> to <code>Z</code> to a decimal digit $0$ through $9$. He will then try to encode each word to a string consisting of decimal digits by replacing each letter in the word with its mapped digit.</p>

<p>In his excitement, Alan failed to notice that there are $26$ letters in the English alphabet and only $10$ decimal digits. As a result, there might be collisions, that is, pairs of different words whose encoding is the same.</p>

<p>Given a list of $\mathbf{N}$ words that Alan wants to encode and the mapping that he uses, can you find out if there would be any collisions between words on the list?</p>

### 입력 

 <p>The first line of the input gives the number of test cases, $\mathbf{T}$. $\mathbf{T}$ test cases follow.</p>

<p>The first line of each test case contains $26$ decimal digits (integers between $0$ and $9$, inclusve) $\mathbf{D_A}, \mathbf{D_B}, \dots, \mathbf{D_Z}$, representing the mapping that Alan uses. A letter $\alpha$ is mapped to digit $\mathbf{D_\alpha}$.</p>

<p>The second line of each test case contains $\mathbf{N}$, the number of words Alan will encode.</p>

<p>The $i$-th of the last $\mathbf{N}$ lines contains a string $\mathbf{S_i}$, representing the $i$-th word Alan will encode.</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where $x$ is the test case number (starting from 1) and $y$ is either <code>YES</code>, if there is at least one pair of different words from the list whose encoding coincides, and <code>NO</code> otherwise.</p>

