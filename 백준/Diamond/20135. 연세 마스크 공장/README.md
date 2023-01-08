# [Diamond IV] 연세 마스크 공장 - 20135 

[문제 링크](https://www.acmicpc.net/problem/20135) 

### 성능 요약

메모리: 2320 KB, 시간: 0 ms

### 분류

서큘레이션(circulation), 최대 유량(flow)

### 문제 설명

<p>연세대는 코로나 19를 대비하기 위해서 마스크 공장을 만들었다.</p>

<p>마스크를 생산하는 <em>N</em>개의 공간이 있고 각 공간들을 <em>M</em>개의 단방향 통로, 그리고 마스크를 각 공간별로 보내거나 받는 지하 공간이 있다. 임의의 서로 다른 두 공간 사이에 두 개 이상의 통로가 있는 경우와 같은 공간을 잇는 통로가 있는 경우는 없다.</p>

<p>각 공간별로 정수 <em>p<sub>i</sub></em>가 할당되어 있는데, <em>p<sub>i</sub></em>가 양수면 만큼 지하 공간으로부터 마스크를 매 초마다 <em>p<sub>i</sub></em> 개를 받고, 음수면 매 초마다 -<em>p<sub>i</sub></em>개 만큼 지하 공간으로 보내야 한다. 또한, 각 통로별로 매 초마다 최소 보내야 하는 마스크의 개수 <em>s<sub>i</sub></em>, 보낼 수 있는 마스크의 최대 개수 <em>e<sub>i</sub></em>가 주어진다.</p>

<p>마스크를 생산하는 공간과 지하 공간은 매 초마다 마스크를 보낼 때 해당 공간의 마스크의 개수에 변동 사항이 없어야 한다.</p>

<p>이렇게 했을 때, 각각의 통로별로 몇 개의 마스크를 보내야 하는지 구하여라.</p>

### 입력 

 <p>다음과 같이 입력이 주어진다.</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;"><em>N</em> <em>M</em><br>
<i>p<sub>1</sub></i> . . . <i>p<sub>N</sub></i><br>
<i>u<sub>1</sub></i> <em>v<sub>1</sub></em> <em>s<sub>1</sub></em> <i>e<sub>1</sub></i><br>
. . . . . .<br>
<i>u<sub>M</sub></i> <em>v<sub>M</sub></em> <em>s<sub>M</sub></em> <i>e<sub>M</sub></i></div>

### 출력 

 <p>첫 번째 줄에 답이 있는 경우에는 <span style="color:#e74c3c;"><code>1</code></span>, 답이 없는 경우에는 <span style="color:#e74c3c;"><code>-1</code></span>을 출력한다.</p>

<p>답이 있는 경우, <em>M</em>개의 줄에 걸쳐 통로별로 매 초마다 보내야 하는 마스크의 개수를 번호 순서대로 출력하시오. 만약에 답이 여러 개인 경우 가능한 아무 경우나 출력하면 된다.</p>

