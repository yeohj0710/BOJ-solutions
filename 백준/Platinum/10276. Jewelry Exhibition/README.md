# [Platinum IV] Jewelry Exhibition - 10276 

[문제 링크](https://www.acmicpc.net/problem/10276) 

### 성능 요약

메모리: 2156 KB, 시간: 48 ms

### 분류

이분 매칭(bipartite_matching)

### 문제 설명

<p>To guard the art jewelry exhibition at night, the security agency has decided to use a new laser beam system, consisting of sender-receiver pairs. Each pair generates a strip of light of one unit width and guards all objects located inside the strip. Your task is to help the agency and to compute for each exhibition room the minimum number of sender-receiver pairs which are sufficient to protect all exhibits inside the room.</p>

<p>Any room has a rectangle shape, so we describe it as an [0, N] × [0, M] rectangle in the plane. The objects we need to guard are represented as points inside that rectangle. Each sender is mounted on a wall and the corresponding receiver on the opposite wall in such a way that the generated strip is a rectangle of unit width and length either N or M. Since the new laser beam system is still not perfect, each sender-receiver pair can only be mounted to generate strips the corners of which have integer coordinates. An additional drawback is that the sender-receiver pairs can protect only items inside the strips, but not those lying on their borders. Thus, the security agency arranged the exhibits in such a way that both coordinates of any point representing an exhibit are non-integers. The figure below (left) illustrates eight items arranged in [0, 4] × [0, 4] (the second sample input). In the room, up to eight sender-receiver pairs can be mounted. The figure to the right shows an area protected by three sender-receiver pairs.</p>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/upload/images2/jewel.png" style="height:197px; width:467px"></p>

### 입력 

 <p>The input starts with the number of exhibition rooms R ≤ 10. Then the descriptions of the R rooms follow. A single description starts with a single line, containing three integers: 0 < N ≤ 100, 0 < M ≤ 100, specifying the size of the current room and 0 < K ≤ 10<sup>4</sup>, for the number of exhibits. Next K lines follow, each of which consists of two real numbers x, y describing the exhibit coordinates. You can assume that 0 < x < N, 0 < y < M and that x and y are non-integer.</p>

### 출력 

 <p>For every room output one line containing one integer, that is the minimum number of sender-receiver pairs sufficient to protect all exhibits inside the room.</p>

