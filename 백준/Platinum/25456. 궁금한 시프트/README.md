# [Platinum I] 궁금한 시프트 - 25456 

[문제 링크](https://www.acmicpc.net/problem/25456) 

### 성능 요약

메모리: 97164 KB, 시간: 560 ms

### 분류

고속 푸리에 변환(fft), 수학(math)

### 문제 설명

<p>시프트는 두 문자열 $S$, $T$를 생일 선물로 받았다. 두 문자열의 길이는 $N$이고, '<code>0</code>' 과 '<code>1</code>'로만 이루어져 있다. 두 문자열을 가지고 무엇을 할 수 있을지 고민하던 중 아래 소스 코드도 선물로 받았다.</p>

<pre>int calc(string S, string T, int s, int t) {
    int n = S.length();
    int i = s;
    int j = t;
    int cnt = 0;
    for (int k=0; k<n; k++) {
        if (S[i] == '1' && T[j] == '1') {
            cnt += 1;
        }
        i = (i+1) % n;
        j = (j+1) % n;
    }
    return cnt;
}</pre>

<p><code>calc</code>의 <code>S</code>와 <code>T</code>는 문자열 $S$와 $T$이고, <code>s</code>와 <code>t</code>는 $0 ≤$ <code>s</code> $< N$, $0 ≤$ <code>t</code> $< N$을 만족해야 한다. 따라서, <code>calc</code>를 호출할 수 있는 방법은 $N^2$개가 있다. 두 문자열 $S$와 $T$가 주어졌을 때, 가능한 <code>calc</code>의 리턴값 중 최댓값을 구해보자.</p>

### 입력 

 <p>첫째 줄에 문자열 $S$, 둘째 줄에 문자열 $T$가 주어진다.</p>

### 출력 

 <p>가능한 <code>calc</code>의 리턴값 중 최댓값을 첫째 줄에 출력한다.</p>

