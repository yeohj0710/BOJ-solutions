# [Gold V] Refract Facts - 11514 

[문제 링크](https://www.acmicpc.net/problem/11514) 

### 성능 요약

메모리: 2216 KB, 시간: 0 ms

### 분류

이분 탐색(binary_search), 수학(math), 물리학(physics)

### 문제 설명

<p>A submarine is using a communications laser to send a message to a jet cruising overhead. The sea surface is flat. The submarine is cruising at a depth d below the surface. The jet is at height h above the sea surface, and a horizontal distance x from the sub. The submarine turns toward the jet before starting communications, but needs to know the angle of elevation, φ, at which to aim the laser.</p>

<p><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/11514/1.png" style="height:340px; width:482px"></p>

<p>When the laser passes from the sea into the air, it is refracted (its path is bent). The refraction is described by Snell's law, which says that light approaching the horizontal surface at an angle θ1, measured from the vertical, will leave at an angle θ2, given by the formula</p>

<p>sin θ1 / sin θ2 = n1 / n2</p>

<p>where n1 and n2 are the respective refraction indices of the water and air. (The refraction index of a material is inversely proportional to how fast light can travel through that material.)</p>

<p><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/11514/2.png" style="height:342px; line-height:20.8px; width:302px"></p>

### 입력 

 <p>Each test case consists of a single line of input containing 5 space-separated floating point numbers:</p>

<ul>
	<li>d, the depth of the submarine (specifically, of the laser emitter) in feet, 1 <= d <= 800</li>
	<li>h, the height of the plane in feet, 100 <= h <= 10,000</li>
	<li>x, the horizontal distance from the sub to the plane in feet, 0 <= x <= 10,000</li>
	<li>n1, the refractive index of water, 1.0 < n1 <= 2.5</li>
	<li>n2, the refractive index of air, 1.0 <= n2 < n1</li>
</ul>

<p>Input ends with a line containing 5 zeroes (0 0 0 0 0).</p>

### 출력 

 <p>For each test case, print a single line containing the angle of elevation φ at which the submarine should aim its laser to illuminate the jet.</p>

<p>The angle should be displayed in degrees and rounded to the closest 1/100 of a degree. Exactly two digits after the decimal point should be displayed.</p>

