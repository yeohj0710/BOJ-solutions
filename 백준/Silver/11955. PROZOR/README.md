# [Silver III] PROZOR - 11955 

[문제 링크](https://www.acmicpc.net/problem/11955) 

### 성능 요약

메모리: 2152 KB, 시간: 4 ms

### 분류

브루트포스 알고리즘(bruteforcing), 구현(implementation)

### 문제 설명

<p>Young Marin, now already a respectable star of Croatian cinematography, spends his free time looking out the window. Unfortunately for him, the same activity is also taken up by a few flies that have landed on his window and are looking into the distance. Marin immediately hurried to get his square racket for killing flies. At the same time, he wondered how many flies it is possible to kill in one shot. After trying to scare away the flies unsuccessfully for a few hours, he decided to ask for your help.</p>

<p>Marin has sent you a picture of his window, the dimensions being R × S pixels and has also told you the length of the side of the racket he uses to kill the flies, in pixels. Your task is to determine the maximal amount of flies that Marin could have killed in a single shot and mark one such shot in the picture.</p>

### 입력 

 <p>The first line of input contains three integers R, S and K (3 ≤ K ≤ R, S ≤ 100) that denote the dimensions of Marin’s picture and the length of the side of the racket.</p>

<p>Each of the following R lines contains S characters that describe Marin’s picture. The picture’s pixels marked with ’*’ denote the position of a fly, whereas all the other pixels are marked with ’.’ and denote empty space. On his window, there is at least one fly that Marin can kill with his racket.</p>

### 출력 

 <p>The first line of output must contain the maximal number of flies Marin can kill in a single shot.</p>

<p>The folllowing R lines must contain Marin’s picture, on it clearly marked a position of the racket that will ensure Marin kills as many flies as possible. The horizontal sides of the racket are denoted with a series of characters ’-’ and the vertical ones with ’|’, whereas angles are denoted with ’+’. For a more detailed explanation, consult the sample tests.</p>

<p>Please note: Marin’s racket will affect only the flies located strictly inside the racket, and the racket must be located inside the window with all its parts. In other words, it is assumed that the flies located at the sides of the racket will have enough time to fly away.</p>

