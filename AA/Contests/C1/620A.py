a, b = map(int, raw_input().split())
x, y = map(int, raw_input().split())

difx = abs(x-a)
dify = abs(y-b)

print max(difx, dify)