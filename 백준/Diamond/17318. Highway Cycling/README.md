# [Diamond I] Highway Cycling - 17318 

[문제 링크](https://www.acmicpc.net/problem/17318) 

### 성능 요약

메모리: 2392 KB, 시간: 792 ms

### 분류

미적분학(calculus), 수학(math)

### 문제 설명

<p>DanDan is always interested in challenging himself. This summer, he prepares to cycle along the Sichuan-Tibet highway to reach Lhasa. It is widely known that the Sichuan-Tibet Highway is filled with hauntingly beautiful scenery, but also happens to contain many dangerous obstacles. DanDan's physical abilities are very limited, so before every day of cycling, he will plan his destination ahead of time. Appropriately distributing the workload is a very critical matter.</p>

<p>DanDan has a cutting-edge bicycle. Riding it, the only thing he has to worry is air resistance (he will not at all be affected by the friction of the bicycle, nor the friction between the bicycle and the ground). One day, he decided to cycle <var>N</var> sections of road. All of the road in any given section can be considered identical. For the <var>i</var>-th section, we assign three parameters <var>s<sub>i</sub></var>, <var>k<sub>i</sub></var>, and <var>v<sub>i</sub>'</var>. Here, <var>s<sub>i</sub></var> represents the length of the road, <var>k<sub>i</sub></var> represents the coefficient of air resistance, and <var>v<sub>i</sub>'</var> represents the velocity of the wind on that section of road (<var>v<sub>i</sub>'</var> > 0 indicates that the wind is blowing in the direction being traveled, while the opposite means that the wind is blowing against the direction being traveled). At a given moment, if the bicycle travels at a velocity of <var>v</var>, then the <i>force of air resistance</i> it experiences is <var>F</var> = <var>k<sub>i</sub></var>(<var>v</var> − <var>v<sub>i</sub>'</var>)<sup>2</sup>. This way, if a section of road of length <var>s</var> was traveled at a constant velocity of <var>v</var>, then the <i>energy consumed</i> (work done) is <var>E</var> = <var>k<sub>i</sub></var>(<var>v</var> − <var>v<sub>i</sub>'</var>)<sup>2</sup><var>s</var>.</p>

<p>Let <var>E<sub>U</sub></var> represent DanDan's initial energy at the start of the day. Please help him devise a cycling plan such that he arrives at his destination as soon as possible. DanDan would like to know the value of the shortest possible time <var>T</var>.</p>

### 입력 

 <p>The first line of input contains a positive integer <var>N</var> and a real number <var>E<sub>U</sub></var>, respectively representing the number of road sections and DanDan's initial energy.</p>

<p>For the following <var>N</var> lines, each line will describe a single road section. Each line contains 3 real numbers <var>s<sub>i</sub></var>, <var>k<sub>i</sub></var>, and <var>v<sub>i</sub>'</var>, respectively representing the <var>i</var>-th road section's length, coefficient of air resistance, and wind velocity.</p>

### 출력 

 <p>Output a single real number <var>T</var> to at least 6 decimal places, representing the minimum time it will take for DanDan to reach his destination. Your answer will be considered correct if the <strong>absolute or relative difference</strong> is at most 0.000001 from the actual answer.</p>

