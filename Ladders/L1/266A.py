N = int(raw_input())
row = raw_input()

row_cp = list(row)
cnt = 0

for i in xrange(N-1, 0, -1):
    if row_cp[i] == row_cp[i-1]:
        row_cp.pop(i)
        cnt += 1

print cnt
