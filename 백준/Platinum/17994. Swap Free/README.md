# [Platinum II] Swap Free - 17994 

[문제 링크](https://www.acmicpc.net/problem/17994) 

### 성능 요약

메모리: 2168 KB, 시간: 0 ms

### 분류

이분 매칭(bipartite_matching)

### 문제 설명

<p>A set of words is called <em>swap free</em> if there is no way to turn any word in the set into any other word in the set by swapping only a single pair of (not necessarily adjacent) letters.</p>

<p>You are given a set of <em>n</em> words that are all anagrams of each other. There are no duplicate letters in any word. Find the size of the largest swap free subset of the given set. Note that it is possible for the largest swap free subset of the given set to be the set itself.</p>

### 입력 

 <p>The first line of input contains a single integer <em>n</em> (1 ≤ <em>n</em> ≤ 500).</p>

<p>Each of the next <em>n</em> lines contains a single word <em>w</em> (1 ≤ |<em>w</em>| ≤ 26).</p>

<p>Every word contains only lower-case letters and no duplicate letters. All <em>n</em> words are unique, and every word is an anagram of every other word.</p>

### 출력 

 <p>Output a single integer, which is the size of the largest <em>swap free</em> subset.</p>

