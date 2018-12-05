lista = ['j', 'p', 's', 'p', 'b','v', 'x', 'z']
text = []
while True:
    try:
        line = raw_input()
        text.append(list(line))
    except EOFError: break

for line in text:
    for i in range(len(line)):
        c = line[i]
        if c.lower() in lista:
            line[i] = 'f'

for line in text:
    for i in range(len(line) - 1, 0, -1):
        c = line[i]
        if c == line[i-1] == 'f':
            line.pop(i)

for line in text: print ''.join(line)