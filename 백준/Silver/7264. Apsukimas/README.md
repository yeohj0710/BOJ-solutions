# [Silver I] Apsukimas - 7264 

[문제 링크](https://www.acmicpc.net/problem/7264) 

### 성능 요약

메모리: 2576 KB, 시간: 0 ms

### 분류

문자열

### 문제 설명

<p>Mokslininkas Glenas mėgsta nagrinėti įvairias tekstų transformacijas. Šiuo laiku jis domisi vadinamaisiais „apsukimais“. Tai tokia teksto transformacija, kai tam tikra teksto dalis, sudaryta iš dviejų ar daugiau simbolių, parašoma atbulai, o likusi dalis – nekeičiama. Paprastumo dėlei Glenas nagrinėja tik tekstus, kurie sudaryti iš didžiųjų lotyniškų raidžių.</p>

<p>Kaip pavyzdį pateiksime keletą teksto LABASRYTAS apsukimo transformacijų (apsuktos dalys pabrauktos):</p>

<ul>
	<li>LA<u>BAS</u>RYTAS → LA<u>SAB</u>RYTAS</li>
	<li><u>LABASRYTAS</u> → <u>SATYRSABAL</u></li>
	<li><u>LA</u>BASRYTAS → <u>AL</u>BASRYTAS</li>
</ul>

<p>Glenas ką tik gavo du skirtingus tekstus ir yra įsitikinęs, kad antrasis tekstas yra gautas iš pirmo atlikus vieną apsukimo operaciją. Tačiau Glenui nepavyksta tiksliai pasakyti, kuri dalis buvo apsukta.</p>

<p>Ar galėtumėte padėti Glenui rasti apsuktą dalį?</p>

### 입력 

 <p>Pirmoje eilutėje pateiktas pirminio (ir transformuoto) teksto ilgis N. Antroje eilutėje pateiktas pirminis tekstas, o trečioje – transformuotas tekstas.</p>

<p>Abu tekstai sudaryti vien iš didžiųjų lotyniškų raidžių.</p>

<p>Pradiniai duomenys visada bus tokie, kad sprendinys egzistuotų, ir kad pradinis tekstas ir tekstas po apsukimo būtų skirtingi.</p>

### 출력 

 <p>Jums reikia išvesti du skaičius: apsuktos teksto dalies pirmo ir paskutinio simbolio numerius. Teksto simboliai numeruojami iš kairės į dešinę nuo 1 iki N. Jeigu yra keli galimi atsakymo variantai, išveskite tą, kurio pirmo simbolio numeris yra mažiausias. Jei vis dar yra keli galimi atsakymo variantai, išveskite tą, kurio paskutinio simbolio numeris yra mažiausias.</p>

