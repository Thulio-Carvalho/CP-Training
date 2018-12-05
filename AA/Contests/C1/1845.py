lista = ['b', 'j', 'p', 's', 'v', 'x', 'z']
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
            if c == c.lower():
                line[i] = 'f'
            else: line[i] = 'F'

for line in text:
    for i in range(len(line) - 1, 0, -1):
        c = line[i]
        if c.lower() == line[i-1].lower() == 'f':
            line.pop(i)
                    

for line in text: print ''.join(line)

    # BCDFGHJKLMNPQRSTVWXYZ
    # *..*..*....*..*.*.*-*
