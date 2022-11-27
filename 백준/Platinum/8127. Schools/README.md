# [Platinum III] Schools - 8127 

[문제 링크](https://www.acmicpc.net/problem/8127) 

### 성능 요약

메모리: 5392 KB, 시간: 84 ms

### 분류

최대 유량(flow), 최소 비용 최대 유량(mcmf)

### 문제 설명

<p>There are n schools in Byteotia, and each has its number m, 1 ≤ m ≤ n, just as every school tends to. However, the previous king of Byteotia paid little attention to the school numbering, and generously allowed every new school to choose any number from the range 1…n. There is thus no guarantee that the numbers are unique, in fact it seems highly unlikely. Clearly some schools may have chosen the same number, and as a consequence some numbers from the range 1…n might be not used at all. A perfect numbering would be a permutation, i.e. a one that assigns each number from the specified range to exactly one school.</p>

<p>The newly crowned king of Byteotia wants to reform the numbering system, so that every number would be used exactly once. It is, however, not an easy task, since most schools are reluctant to change the numbers they have once chosen.</p>

<p>The king has sent his most trusted informants to all the schools to inquire which numbers each school would accept. Since every school would like to keep its current number (or at least a number close to it), each school director has specified an interval containing the school's current number. These intervals are called the tolerance intervals. Furthermore, each school has stated the cost c of changing its number by 1. Hence the total cost of changing a school's number equals c⋅|m-m’|, where m denotes the old school number, and m’ the new one. Of course m’ must lie in the tolerance interval previously specified by the school.</p>

<p>Now, all the information gathered, the king would like to know, if it's possible to introduce a perfect numbering (while complying with every school's tolerance interval), and if so, what is the minimal cost of such reenumaration. He has asked you - the royal computer scientist - to carefully study the information he has provided you with and give the answer in return.</p>

<p>Write a programme which:</p>

<ul>
	<li>reads from the standard input the current numbers of Byteotian schools, their tolerance intervals and the costs of changing their numbers by ,</li>
	<li>checks if it's possible to perfectly reenumerate the schools complying with all previously described conditions, and if so, determines the minimal cost of such reenumeration,</li>
	<li>writes the result to the standard output.</li>
</ul>

### 입력 

 <p>The first line of the standard input contains one integer n (1 ≤ n ≤ 200), denoting the number of schools in Byteotia. In the following n lines there are descriptions of the schools themselves. The line no. i+1 (1 ≤ i ≤ n) contains four integers m<sub>i,</sub> a<sub>i</sub>, b<sub>i</sub> and ki (1 ≤ a<sub>i</sub> ≤ m<sub>i</sub> ≤ b<sub>i</sub> ≤ n, 1 ≤ k<sub>i</sub> ≤ 1,000), separated by single spaces. These denote respectively: the current number of the i’th school, the left and right endpoint of the i’th school's tolerance interval regarding the change of number (it is a closed interval, therefore the new i’th school's number m<sub>i</sub>’ must satisfy the inequality a<sub>i</sub> ≤ m<sub>i</sub>’ ≤ b<sub>i</sub>) and the cost of changing the number of i’th school by 1.</p>

### 출력 

 <p>If a reenumeration satisfying the above conditions is possible, the programme should write one integer k denoting the minimum possible cost of performing the operation. If it's not possible, it should write the word NIE, which means no in Polish.</p>

