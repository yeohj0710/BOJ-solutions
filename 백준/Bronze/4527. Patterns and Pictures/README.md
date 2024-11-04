# [Bronze II] Patterns and Pictures - 4527 

[문제 링크](https://www.acmicpc.net/problem/4527) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 수학

### 제출 일자

2024년 11월 4일 17:41:25

### 문제 설명

<p>Fabrics often have repeating patterns on them, such as a tessellation of carrots and bats.</p>

<p>A given image, such as a carrot in the above example, takes up a certain number of square inches on the fabric. In addition, a piece of fabric with more than one image will have those images in some sort of simple integral ratio, such as 3 carrots for every 2 bats. One instance of images in the given ratio is considered a full set.</p>

<p>Fabrics are sold by the square yard (and, for those of you who have forgotten, there are 36 inches to the yard). Given a collection of images, their sizes, and the ratios in which they occur, what is the maximum number of full sets that could possibly appear on one, two, and three square yards of patterned fabric?</p>

<p>(Note that this maximum implies totally arbitrary shapes and placements for the images, which may be different for the three lengths of fabric; the particulars of the layout are irrelevant for the purposes of the problem.)</p>

### 입력 

 <p>Input to this problem will begin with a line containing a single integer N (1 ≤ N ≤ 100) indicating the number of data sets. Each data set consists of the following components:</p>

<ul>
	<li>A line containing a single integer I (1 ≤ I ≤ 10) indicating the number of images in a particular pattern;</li>
	<li>A series of I lines, each with two integers S, R (1 ≤ S ≤ 1000; 1 ≤ R ≤ 100) separated by spaces representing the images. S is the number of square inches that the image occupies; R is the count of the images contained in a full set.</li>
</ul>

### 출력 

 <p>For each data set, print "A B C", where A is the maximum number of full sets that could possibly appear on one square yard of fabric, B is the maximum number of full sets that could possibly appear on two square yards of fabric, and C is the maximum number of full sets that could possibly appear on three square yards of fabric.</p>

