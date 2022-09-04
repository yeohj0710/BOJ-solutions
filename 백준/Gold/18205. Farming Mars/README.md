# [Gold IV] Farming Mars - 18205 

[문제 링크](https://www.acmicpc.net/problem/18205) 

### 성능 요약

메모리: 2880 KB, 시간: 72 ms

### 분류

브루트포스 알고리즘(bruteforcing), 값 / 좌표 압축(coordinate_compression), 누적 합(prefix_sum), 무작위화(randomization)

### 문제 설명

<p>It has been ten years since the miserable day that you won a one-way ticket to Mars on a game show. Your colony’s attempt at terraforming Mars has faced nothing but hardship during that time. The latest disaster: a complete failure of the potato crop. You will have to start planting potatoes again from scratch. Your colony has prepared an n-acre strip of arable land on which you will attempt to plant new potatoes.</p>

<p>Your scientists have developed bioengineered potatoes that can withstand the harsh Martian climate and almost complete lack of atmosphere. Unfortunately, these potatoes have extreme sensitivity to pH: they will only thrive if the pH of the soil is exactly right, down to six decimal digits. Your bioengineers can create new potato varieties with any specific allowable pH value, but doing so is only economical if you can then plant a large patch of the variety on a continuous interval [l, r] of the n-acre strip. Given a list of pH values measured on each acre of the strip, and a list of potential subintervals [l, r] where you are considering planting potatoes, compute whether a strict majority ⌊(r−l+1)/2⌋+1 of the acres within the interval all share the exact same pH value (otherwise it is not worth trying to plant potatoes there). Note that these acres with equal pH value do not need to be contiguous, so long as they all lie within the interval [l, r].</p>

### 입력 

 <p>The first line of input contains two space-separated integers n and m (1 ≤ n, m ≤ 10 000), the size of the strip of land and the number of queries, respectively. The next n lines contain a single real number: the ith such number is the pH of the ith acre along the strip. Each pH value lies between 0.000000 and 14.000000, inclusive, and contains exactly six decimal digits after the decimal point. Then follows m lines containing two space-separated integers each: the bounds l<sub>j</sub> and r<sub>j</sub> of the jth query (1 ≤ l<sub>j</sub> ≤ r<sub>j</sub> ≤ n).</p>

### 출력 

 <p>Print m lines of output, one for each query. On line j, print usable if a strict majority of the land between acres l<sub>j</sub> and r<sub>j</sub> (inclusive) all share the exact same pH value, and unusable otherwise.</p>

