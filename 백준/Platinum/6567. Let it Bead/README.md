# [Platinum V] Let it Bead - 6567 

[문제 링크](https://www.acmicpc.net/problem/6567) 

### 성능 요약

메모리: 2208 KB, 시간: 0 ms

### 분류

브루트포스 알고리즘(bruteforcing), 번사이드 보조정리(burnside), 조합론(combinatorics), 수학(math)

### 문제 설명

<p>"Let it Bead" company is located upstairs at 700 Cannery Row in Monterey, CA. As you can deduce from the company name, their business is beads. Their PR department found out that customers are interested in buying colored bracelets. However, over 90 percent of the target audience insists that the bracelets be unique. (Just imagine what happened if two women showed up at the same party wearing identical bracelets!) It's a good thing that bracelets can have different lengths and need not be made of beads of one color. Help the boss estimating maximum profit by calculating how many different bracelets can be produced.</p>

<p>A bracelet is a ring-like sequence of <em>s</em> beads each of which can have one of <em>c</em> distinct colors. The ring is closed, i.e. has no beginning or end, and has no direction. Assume an unlimited supply of beads of each color. For different values of <em>s</em> and <em>c</em>, calculate the number of different bracelets that can be made.</p>

### 입력 

 <p>Every line of the input file defines a test case and contains two integers: the number of available colors <em>c</em> followed by the length of the bracelets <em>s</em>. Input is terminated by <em>c=s=0</em>. Otherwise, both are positive, and, due to technical difficulties in the bracelet-fabrication-machine, <em>cs<=32</em>, i.e. their product does not exceed 32.</p>

### 출력 

 <p>For each test case output on a single line the number of unique bracelets. The figure below shows the 8 different bracelets that can be made with 2 colors and 5 beads.</p>

