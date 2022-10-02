# [Silver III] Bitaro the Brave - 16980 

[문제 링크](https://www.acmicpc.net/problem/16980) 

### 성능 요약

메모리: 10924 KB, 시간: 176 ms

### 분류

조합론(combinatorics), 구현(implementation), 수학(math), 누적 합(prefix_sum)

### 문제 설명

<p>Bitaro the Brave faces the Devil.</p>

<p>Bitaro is going to attack the Devil by arranging jewels, orbs and ingots on an H times W grid and casting a spell. The square at the i-th row (1 ≤ i ≤ H) from the top and the j-th column (1 ≤ j ≤ W) from the left is denoted by (i, j).</p>

<p>Now, Bitaro has arranged one of these three types on each square. Bitaro is going to cast a spell, the power of which is determined by the arrangement of jewels, orbs and ingots. Specifically, the power equals to the number of quadruplets of integers (i, j, k, ℓ) (1 ≤ i < k ≤ H, 1 ≤ j < ℓ ≤ W) satisfying the following condition.</p>

<blockquote>
<p>Condition: Bitaro has arranged a jewel on the square (i, j), an orb on the square (i, ℓ) and an ingot on the square (k, j).</p>
</blockquote>

<p>Bitaro is wondering the power of the spell.</p>

<p>Write a program which, given the arrangement of jewels, orbs and ingots, calculates the power of the spell Bitaro casts.</p>

### 입력 

 <p>Read the following data from the standard input.</p>

<pre>H W
S<sub>1</sub>
:
S<sub>H</sub></pre>

<p>S<sub>i</sub> (1 ≤ i ≤ H) is a string of length W. The item arranged on the square (i, j) (1 ≤ j ≤ W) is a jewel if the j-th character of S<sub>i</sub> is <code>J</code>, an orb if it is <code>O</code> and an ingot if it is <code>I</code>.</p>

### 출력 

 <p>Write one line to the standard output. The output should contain the power of the spell Bitaro casts.</p>

