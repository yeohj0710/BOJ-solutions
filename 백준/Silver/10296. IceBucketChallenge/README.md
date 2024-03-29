# [Silver V] IceBucketChallenge - 10296 

[문제 링크](https://www.acmicpc.net/problem/10296) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

이분 탐색, 구현, 수학

### 문제 설명

<p>IceBucketChallenge เป็นการระดมทุนบริจาคให้แก่โรคกล้ามเนื้ออ่อนแรงหรือ ALS โดยมีกติกาว่า ถ้านาย ก ต้องการเข้าร่วม นาย ก มีทางเลือกสองทาง </p>

<ul>
	<li>หนึ่งคือ นําน้ําผสมน้ําแข็งมาราดตัวเองและบริจาคเงินเป็นจํานวน 10 บาท แล้วจึงท้าให้เพื่อนมาเข้าร่วมได้อีก K คน </li>
	<li>หรือสอง คือไม่ต้องราดน้ําใส่ตัวเอง แต่ต้องบริจาคเงินเป็นจํานวน 100 บาท และไม่มีสิทธิ์ท้าใครต่อ เพื่อน ๆ ที่โดนนาย ก ท้า ก็มีสองทางเลือกเช่นเดียวกัน </li>
</ul>

<p>ให้เขียนโปรแกรมเพื่อตอบคําถามว่า ถ้าเริ่มจากผู้เข้าร่วมกิจกรรมหนึ่งคน และอยากได้เงินบริจาครวมไม่น้อยกว่า G บาท (รับประกันว่า G หารสิบลงตัว) จะต้องมีคนราดน้ําผสมน้ําแข็งใส่ตัวเองอย่างน้อยที่สุดกี่คน รับประกันว่าจะไม่มีใครทําผิดกติกาข้างต้น เช่น นําน้ํามาราดตัวเองแล้วบริจาคเงินจํานวนอื่น ที่ไม่ใช่ 10 บาท </p>

### 입력 

 <p>บรรทัดแรก ระบุจํานวนชุดทดสอบ T < 100 จากนั้นจะตามด้วยข้อมูลชุดทดสอบจํานวน T ชุด ในรูปแบบต่อไปนี้ </p>

<ul>
	<li>แต่ละชุดทดสอบ มีหนึ่งบรรทัด ประกอบด้วยจํานวนเต็มบวกสองจํานวน G,K คั่นด้วยช่องว่างหนึ่งช่อง โดย G <= 10,000,000 และ K < 1,000</li>
</ul>

### 출력 

 <p>แต่ละชุดทดสอบมีหนึ่งบรรทัด ประกอบด้วยจํานวนเต็มบวกหนึ่งจํานวน แทนจํานวนคนน้อยสุดที่ต้องราดน้ําผสมน้ําแข็งใส่ตัวเอง </p>

