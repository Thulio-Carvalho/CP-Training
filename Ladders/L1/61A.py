N = raw_input()
M = raw_input()
ans = list(N)

for i in range(len(N)):
    if N[i] != M[i]: ans[i] = 1
    else: ans[i] = 0

print ''.join(map(str, ans))