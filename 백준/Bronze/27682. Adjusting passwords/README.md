# [Bronze I] Adjusting passwords - 27682 

[문제 링크](https://www.acmicpc.net/problem/27682) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 문제 설명

<p>Another IPSC has just started and you are late! You rush to your PC only to discover that you locked the screen and now you have to enter your password quickly to unlock it.</p>

<p>You are presented with a password prompt. It only supports the following keys:</p>

<table class="table table-bordered">
	<thead>
		<tr>
			<th align="left">Key</th>
			<th align="left">Action</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td align="left"><code>a</code> to <code>z</code></td>
			<td align="left">enters the character.</td>
		</tr>
		<tr>
			<td align="left">enter</td>
			<td align="left">submits the password.</td>
		</tr>
		<tr>
			<td align="left">backspace</td>
			<td align="left">erases the last entered character, if any.</td>
		</tr>
	</tbody>
</table>

<p>If you submit an invalid password, you will see an error message and a new, empty prompt will open.</p>

<p>Your password is <em>P</em>. In all the rush, you just typed the string <em>Q</em> into the prompt. It is possible that <em>Q</em> is not <em>P</em>: there may be a typo or two, or it can even be a completely different string.</p>

<p>Given <em>P</em> and <em>Q</em>, log in using as few additional keystrokes as possible.</p>

### 입력 

 <p>The first line of the input file contains an integer <em>t</em> specifying the number of test cases. (<em>t</em> ≤ 1000) Each test case is preceded by a blank line.</p>

<p>Each test case consists of two lines. The first line contains the correct password <em>P</em> and the second line contains the already typed string <em>Q</em>. Both are non-empty and have at most 50 characters.</p>

### 출력 

 <p>For each test case, output a line containing the list of keystrokes you want to press. Pressing enter is represented by <code>*</code> and pressing backspace is represented by <code><</code>.</p>

<p>If there are multiple optimal solutions, you may output any of them.</p>

