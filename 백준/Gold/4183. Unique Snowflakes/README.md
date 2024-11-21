# [Gold V] Unique Snowflakes - 4183 

[문제 링크](https://www.acmicpc.net/problem/4183) 

### 성능 요약

메모리: 7608 KB, 시간: 144 ms

### 분류

자료 구조, 해시를 사용한 집합과 맵, 트리를 사용한 집합과 맵, 두 포인터

### 제출 일자

2024년 11월 22일 02:40:16

### 문제 설명

<p>Emily the entrepreneur has a cool business idea: packaging and selling snowflakes. She has devised a machine that captures snowflakes as they fall, and serializes them into a stream of snowflakes that flow, one by one, into a package. Once the package is full, it is closed and shipped to be sold.</p>

<p>The marketing motto for the company is "bags of uniqueness." To live up to the motto, every snowflake in a package must be different from the others. Unfortunately, this is easier said than done, because in reality, many of the snowflakes flowing through the machine are identical. Emily would like to know the size of the largest possible package of unique snowflakes that can be created. The machine can start filling the package at any time, but once it starts, all snowflakes flowing from the machine must go into the package until the package is completed and sealed.</p>

### 입력 

 <p>The first line of input contains one integer specifying the number of test cases to follow. Each test case begins with a line containing an integer n, the number of snowflakes processed by the machine. The following n lines each contain an integer (in the range 0 to 10^9, inclusive) uniquely identifying a snowflake. Two snowflakes are identified by the same integer if and only if they are identical. The input will contain no more than one million total snowflakes.</p>

### 출력 

 <p>For each test case output a line containing single integer, the maximum number of unique snowflakes that can be in a package.</p>

