# [Bronze II] Nine Knights - 31040 

[문제 링크](https://www.acmicpc.net/problem/31040) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2023년 12월 31일 20:15:07

### 문제 설명

<p>In the game of chess, knights are underwhelming and unique. No other piece in chess moves like the knight in its 'L' shaped pattern. The Knight moves in an L shape in any direction. We can say that it either moves two squares sideways and then one square up or down, or two squares up or down, and then one square sideways.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/7e40759e-b018-4c58-a564-5422c81e6326/-/preview/" style="width: 250px; height: 253px;"></p>

<p style="text-align: center;">Figure 1: The highlighted squares show all possible moves for a knight.</p>

<p>The Knight changes the colour of the square it stands on with each move. Therefore, if it starts off on a light coloured square, when it has finished its move it will land on a dark coloured square. In the diagram the Knight can move to any of the red squares.</p>

<p>The formula for the maximum number of knights on a board are</p>

<blockquote>
<table border="0" class="table table-bordered">
	<tbody>
		<tr>
			<td rowspan="2">number of knights =</td>
			<td><code>(1/2)((n^2)+1) for n > 1 && n mod 2 == 1</code></td>
		</tr>
		<tr>
			<td><code>(1/2)(n^2) for n > 2 && n mod 2 == 0</code></td>
		</tr>
	</tbody>
</table>
</blockquote>

<p>In the nine knights puzzle, nine knights are positioned on a <code>5</code> by <code>5</code> board, even though you can fit a maximum of thirteen. The knights are placed so that they can coexist without attacking one another. The board below shows an invalid solution :</p>

<pre>...k.
...k.
k.k..
.k.k.
k.k.k</pre>

<p>A solution is valid if and only if there are exactly nine knights on the board and no two knights are attacking one another.</p>

<p>Given the description of a chess board, your job is to determine whether or not it represents a valid solution to the nine knights puzzle.</p>

### 입력 

 <p>First line is the number of test cases. Followed will be that many number of <code>5 x 5</code> board configurations. Input lines will consist of only the characters '.' and 'k'. The '.' character represents an empty space on the board, and the 'k' character represents a knight. There is no blank line between boards in the input.</p>

### 출력 

 <p>Print a single line for each test case. Print the word "valid" if the given chess board is a valid solution to the nine knights problem. Otherwise, print "invalid".</p>

