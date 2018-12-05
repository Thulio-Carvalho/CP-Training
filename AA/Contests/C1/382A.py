entry = raw_input()
entry2 = raw_input()

weights = []
unused = []

for i in entry: weights.append(i)
for i in entry2: unused.append(i)


left = []
right = []

for i in range(len(weights)):
    if weights[i] == '|':
        left = weights[:i]
        right = weights[i+1:]

if (len(unused) + len(right) + len(left)) % 2 == 0:
    while(not (len(unused) == 0)):
        if len(right) < len(left): right.append(unused.pop())
        else: left.append(unused.pop())

    ans = ''
    for i in left: ans += i
    ans += '|'
    for i in right: ans += i
else: ans = 'Impossible'

if (len(right) != len(left)): ans = 'Impossible'
print ans