word = raw_input()
num_upper = 0
for c in word: 
    if c.isupper():
        num_upper += 1

if num_upper > len(word)/2:
    ans = word.upper()
else: ans = word.lower()

print ans