num = raw_input()

cnt = 0
for c in num:
    if c != '4' and c != '7': continue
    cnt += 1

ans = 'YES'
for c in str(cnt):
    if c != '4' and c != '7': ans = 'NO'
print ans