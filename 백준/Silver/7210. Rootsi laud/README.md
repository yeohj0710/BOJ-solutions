# [Silver III] Rootsi laud - 7210 

[문제 링크](https://www.acmicpc.net/problem/7210) 

### 성능 요약

메모리: 2804 KB, 시간: 8 ms

### 분류

브루트포스 알고리즘, 구현, 시뮬레이션

### 문제 설명

<p>Arvatakse, et šokolaad soodustab ajutegevust. Sellepärast ei lase elutark professor Trinidad Itobagovitš kunagi mööda võimalust šokolaadikommidega maiustada.</p>

<p>Koolivaheajal suusakuurordis puhates leidis Trinidad suurepärase kohviku, kus pakutakse hommikusööki rootsi lauas. Ühele suurele ümmargusele lauale on pandud N kandikut, igaühel mingi arv šokolaadikomme. Kandikule number i pannakse igal hommikul A<sub>i</sub> kommi. Kandikud on nummerdatud päripäeva 1 . . . N, kandikule number N järgneb jälle kandik number 1.</p>

<p>Suure šokolaadisõbrana sööks Trinidad meelsasti ära kõik laual olevad kommid, aga kasvatus ja ühiskondlik surve ei luba tal seda teha. Seepärast valib ta täisarvu K ja võtab laua ümber ringi käies ära kõik kommid igalt K. kandikult. See tähendab, et Trinidad läheb mingi kandiku juurde, võtab sellelt kõik kommid, seejärel liigub laua äärt mööda päripäeva ja esialgsest kandikust loendades K kandiku võrra edasi jõudes võtab ka sellelt kõik kommid ning jätkab samamoodi. Kui järjekordne kandik, millelt Trinidad komme võtta tahaks, on juba tühi (sest ta on selle juures juba peatunud), lõpetab ta kommide kogumise ja asub nende söömise juurde. Kuna Trinidad sööb hommikust väga vara, võib eeldada, et keegi teine samal ajal kandikutelt komme ei võta.</p>

<p style="text-align: center;"><img alt="" src="" style="width: 574px; height: 147px;"></p>

<p>Ilmselt sõltub kogutud kommide arv sellest, millise kandiku juurest Trinidad oma ringkäiku alustab. Ta võib alustada ükskõik millise kandiku juurest, aga ta ei tea, millisest alustades ta lõpuks kõige rohkem komme kokku saab. Aita tal leida, kui palju komme ta maksimaalselt koguda võib.</p>

### 입력 

 <p>Tekstifaili esimesel real on tühikuga eraldatud täisarvud N ja K (2 ≤ K ≤ N ≤ 10<sup>5</sup>), vastavalt kandikute arv ja Trinidadi valitud arv. Teisel real on N täisarvu A<sub>i</sub> (1 ≤ A<sub>i</sub> ≤ 10<sup>4</sup>, i ∈ 1 . . . N), kus A<sub>i</sub> on kommide arv kandikul number i.</p>

### 출력 

 <p>Tekstifaili väljastada üks täisarv, maksimaalne kommide arv, mille Trinidad võib ühe serveerimislaua juures käiguga koguda.</p>

