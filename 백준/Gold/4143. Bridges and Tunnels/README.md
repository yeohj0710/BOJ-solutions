# [Gold IV] Bridges and Tunnels - 4143 

[문제 링크](https://www.acmicpc.net/problem/4143) 

### 성능 요약

메모리: 4396 KB, 시간: 132 ms

### 분류

자료 구조(data_structures), 분리 집합(disjoint_set), 해시를 사용한 집합과 맵(hash_set), 문자열(string), 트리를 사용한 집합과 맵(tree_set)

### 문제 설명

<p>Some days, the university campus gets very wet. Other days, it can get very cold. Although many times, it is pleasant to be outside, there are days when we would prefer to stay indoors.</p>

<p>Luckily, the campus designers have gradually connected the various buildings with tunnels and bridges. Sometimes these connections are built when the building is built, but it may also be possible to add them afterwards. Unfortunately, sometimes it is not possible to travel between two buildings without going outside because the system of bridges and tunnels is not complete. You would like to write a program to help a newcomer determine how many buildings can be reached from a newly constructed tunnel.</p>

### 입력 

 <p>The first line of input contains one integer specifying the number of test cases to follow. Each test case begins with a line containing an integer <em>n</em>, the total number of bridges or tunnels built. This number will be no more than 100,000. We assume that all of the buildings have been built ahead of time, but at the beginning of a test case, no bridges or tunnels have been built yet. The rest of the test case consists of <em>n</em> lines giving the history of the bridges or tunnels, in the order in which they are built. Each of these lines contains the names of the two buildings being connected, separated by a space. Each building name is a sequence of up to 20 uppercase or lowercase letters, and building names are case-sensitive.</p>

### 출력 

 <p>Whenever a bridge or tunnel is built, print a line containing one integer, the number of buildings that can be reached from that bridge without going outside.</p>

