# [Bronze II] Simple Encryption - 6890 

[문제 링크](https://www.acmicpc.net/problem/6890) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현(implementation), 문자열(string)

### 문제 설명

<p>One of the simplest ways of coding a message is to do a letter shift.</p>

<p>For example, if you shift the letters in the original message by $5$ then <code>A</code> in your original message becomes <code>F</code> in the coded message. (<code>B</code> $\to$ <code>G</code>, <code>C</code> $\to$ <code>H</code>, …, <code>T</code> $\to$ <code>Y</code>, <code>U</code> $\to$ <code>Z</code>, <code>V</code> $\to$ <code>A</code>, …, <code>Z</code> $\to$ <code>E</code>). To decode the message, you simply need to shift back by the same number.</p>

<p>A slightly trickier encryption uses a keyword to determine the amount of the shift. Suppose you were using the keyword <code>ACT</code>. To encode the message, you take the original message, remove everything but the alphabetic characters, and form the message into a block that has the same width as the keyword. Here is a sample message to encrypt:</p>

<p><code>BANANA & PEEL</code></p>

<p>The blocked version of the message is shown below with the keyword <code>ACT</code> as a header.</p>

<table class="table table-bordered td-center table-center-30">
	<tbody>
		<tr>
			<td>A</td>
			<td>C</td>
			<td>T</td>
		</tr>
		<tr>
			<td> </td>
			<td> </td>
			<td> </td>
		</tr>
		<tr>
			<td>B</td>
			<td>A</td>
			<td>N</td>
		</tr>
		<tr>
			<td>A</td>
			<td>N</td>
			<td>A</td>
		</tr>
		<tr>
			<td>P</td>
			<td>E</td>
			<td>E</td>
		</tr>
		<tr>
			<td>L</td>
			<td> </td>
			<td> </td>
		</tr>
	</tbody>
</table>

<p>Now, the message is encoded using a letter shift. However, this time it is not a uniform shift, it will depend upon the keyword letter at the top of the column. If the letter at the top of the column is an <code>A</code>, then the letters in that column are not shifted. If the letter is a <code>B</code>, then the letters in that column shift by $1$, and so on. In the example, the letters in the third column will shift by $19$ since the <code>T</code> is the $20$th letter of the alphabet.</p>

<p>The encoded message is:</p>

<table class="table table-bordered td-center table-center-30">
	<tbody>
		<tr>
			<td>A</td>
			<td>C</td>
			<td>T</td>
		</tr>
		<tr>
			<td> </td>
			<td> </td>
			<td> </td>
		</tr>
		<tr>
			<td>B</td>
			<td>C</td>
			<td>G</td>
		</tr>
		<tr>
			<td>A</td>
			<td>P</td>
			<td>T</td>
		</tr>
		<tr>
			<td>P</td>
			<td>G</td>
			<td>X</td>
		</tr>
		<tr>
			<td>L</td>
			<td> </td>
			<td> </td>
		</tr>
	</tbody>
</table>

<p>You will write a program that will accept a keyword and a string to be encoded. The keyword will never have more than $6$ characters. The message will always be given in all uppercase characters.</p>

### 입력 

 <p>The first line of input consists of the keyword. The second line of the input is the message to be encoded. The keyword length will never exceed $6$ characters. The total message length also will never exceed $60$ characters.</p>

### 출력 

 <p>Output the encoded message on a single line.</p>

