N, T = map(int, raw_input().split())
entry = raw_input()
Q = []
for c in entry: Q.append(c)

while (T != 0):
    swapped = False
    for i in xrange(len(Q)):
        if not swapped:
            if (i < len(Q) - 1):
                if Q[i] == 'B' and Q[i+1] == 'G':
                    Q[i] = 'G'
                    Q[i+1] = 'B'
                    swapped = True
        else: swapped = False
                

    T -= 1
print "".join(Q)