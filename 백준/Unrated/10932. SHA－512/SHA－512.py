import hashlib

s1 = input()

s2 = hashlib.sha512(s1.encode("utf-8")).hexdigest()

print(s2)
