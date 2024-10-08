# [Bronze II] Bookshelf Bottleneck - 32478 

[문제 링크](https://www.acmicpc.net/problem/32478) 

### 성능 요약

메모리: 2020 KB, 시간: 36 ms

### 분류

브루트포스 알고리즘, 구현

### 제출 일자

2024년 10월 8일 16:46:45

### 문제 설명

<p>Brianna is a bookworm. At home, she has a big bookshelf with all her favourite books. She has a large collection ranging from detective novels and science-fiction novels to biographies.</p>

<p>Recently, Brianna has expanded her collection with $n$ graphic novels. However, the new books currently lie around everywhere and form huge stacks on the floor. In the meantime, one of the shelf boards has collected dust and random household utensils that do not belong there. The new books just lying around have become too much to bear, and Brianna finally decided to put them on this shelf board. To do so, she first has to make room on it.</p>

<p style="text-align: center;"><img alt="" src="" style="width: 223px; height: 250px;"></p>

<p style="text-align: center;">Figure B.1: Visualization of Sample Input 3.</p>

<p>Brianna wants to arrange the books in a single horizontal line without stacking multiple books on top of each other. While the shelf is wide enough to hold all books without problems, it takes time to make room on the shelf. Therefore, Brianna wants to minimize the width of the part of the shelf that she needs to clear.</p>

<p>Each book can be described as a cuboid with three side lengths $l$, $w$, and $h$. Since the room above the shelf board is limited by the next shelf board above it, she can only fit a book vertically if its vertical side length is at most the distance $H$ between the two shelf boards. Brianna may rotate each book in three-dimensional space as she wants. It is guaranteed that the shelf is deep enough so that the books will not fall off, no matter the orientation. However, all books must stand properly on the shelf board, meaning that every book touches the shelf board along an entire face and not just by an edge.</p>

<p>What is the minimum width of shelf Brianna's books need?</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>One line with two integers $n$ and $H$ ($1\leq n\leq 10^5$, $1\leq H \leq 10^9$), the number of books and the height of the shelf, respectively.</li>
	<li>$n$ lines, each containing three integers $l$, $w$, $h$ ($1\leq l,w,h \leq 10^9$), the dimensions of the books.</li>
</ul>

### 출력 

 <p>Output the minimum width of shelf Brianna's books need, or "<code>impossible</code>" if it is impossible to place the books on the shelf.</p>

