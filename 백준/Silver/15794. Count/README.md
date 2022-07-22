# [Silver II] Count - 15794 

[문제 링크](https://www.acmicpc.net/problem/15794) 

### 성능 요약

메모리: 9840 KB, 시간: 204 ms

### 분류

이분 탐색(binary_search), 자료 구조(data_structures), 정렬(sorting), 트리를 사용한 집합과 맵(tree_set), 두 포인터(two_pointer)

### 문제 설명

<p>Given is a sequence of n integers: a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>. Given is also an integer v. We consider pairs (a<sub>i</sub>, a<sub>j</sub>) of elements from the given sequence, such that i < j. </p>

<p>Write a program count that finds such pair, whose sum a<sub>i</sub> + a<sub>j</sub> is the closest to (or the same as) the value of v and output the number of all such pairs with sums a<sub>i</sub> + a<sub>j</sub> that are equally closest to the value of v.</p>

### 입력 

 <p>On the first line of the standard input, the value of n is written.</p>

<p>On the second line, the values of a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>, are written, separated by space.</p>

<p>On the third line, the value of v is written.</p>

### 출력 

 <p>On the standard output, your program has to print one integer, equal to the wanted count of pairs.</p>

