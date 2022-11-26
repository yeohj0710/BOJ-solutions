# [Platinum III] Tools of the Trade - 11373 

[문제 링크](https://www.acmicpc.net/problem/11373) 

### 성능 요약

메모리: 2172 KB, 시간: 0 ms

### 분류

최대 유량(flow), 최소 비용 최대 유량(mcmf)

### 문제 설명

<p>King Theoden has responded to the raids upon his lands and the threat of Saruman by withdrawing his people into Helm’s Deep. Here they hope to make their stand against the forces of evil, but they’ve run into a problem! The armory doesn’t have enough weapons of each type to arm everyone with the weapon with which they are most proficient. Instead, the quartermaster must figure out how to distribute the weapons they do have so that their combat ability is maximized, and so that they can repulse the Uruk-hai armies.</p>

### 입력 

 <p>The first line of the input is an integer giving the number of test cases. Each test case begins with a line of the form ”N M”, where N is the number of weapon types and M is the number of soldiers. N lines follow, each of the form C T, where C is the character representing the weapon, and T is the number of that weapon available. M lines follow that, describing the proficiencies of each soldier (in decreasing order) in terms of the character representation of the weapons.</p>

### 출력 

 <p>For each test case, give an integer on its own line as output. This number is the total inexperience for the best (minimal) assignment of weapons. This is measured as the total of the number of steps from their favored weapon that each soldier is assigned; for example, a soldier with the preferences ABCD assigned weapon C would increase the total inexperience by 2, whereas if assigned B he would increase the total inexperience by 1.</p>

