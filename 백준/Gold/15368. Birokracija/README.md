# [Gold V] Birokracija - 15368 

[문제 링크](https://www.acmicpc.net/problem/15368) 

### 성능 요약

메모리: 31308 KB, 시간: 76 ms

### 분류

다이나믹 프로그래밍(dp), 트리에서의 다이나믹 프로그래밍(dp_tree), 트리(trees)

### 문제 설명

<p>Mirko has become CEO of a huge corporation. This corporation consists of N people, labeled from 1 to N, and Mirko is labeled 1. The corporation is structured so that each employee (except Mirko) has a boss, and we say that employee is an assistant to that boss. Each boss can have multiple assistants, but still reports to their boss. This holds for everyone except Mirko, who is at the top of the pyramid and doesn’t have a boss, but has his assistants.</p>

<p>When Mirko gets a task from the investors, he then delegates that task to his assistant with the minimal number. This assistant then delegates the task to their assistant with the minimal number, and this process repeats until the task is given to an unlucky person without an assistant, who then must do the task.</p>

<p>This is when the real problems begin. The person that did the task gets paid 1 coin, the boss of that person gets 2 coins, the boss of that person gets 3 coins, and so on, all the way to Mirko, who gets as many coins as there are people in this sequence. After that, the employee that really did the job realizes how unfair the system is and quits their job out of principle.</p>

<p>When it comes to doing the next task in the corporation, there is a person less, so maybe the paychecks are less, but the work must continue. Tasks are piling up, so the whole procedure (assigning a new task, doing it, dividing paychecks and the person doing the task quitting) repeats until Mirko is left alone in the corporation and does his first (also his last) task.</p>

<p>Of course, Mirko will have amassed quite a fortune until then, but he also wants to know how much money each of the employees earned.</p>

### 입력 

 <p>The first line of input contains the positive integer N (2 ≤ N ≤ 2·10<sup>5</sup>), the number of employees (including Mirko).</p>

<p>The following line contains N - 1 positive integers a<sub>2</sub>, a<sub>3</sub>, a<sub>4</sub>, …, a<sub>n</sub> (1 ≤ a<sub>i</sub> < i), where ai denotes the boss of employee i.</p>

### 출력 

 <p>You must output a single line consisting of N numbers, the i th number corresponding to the amount of money earned by the i th employee.</p>

