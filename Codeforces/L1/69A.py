n = int(raw_input())
cords = []

total_x = 0
total_y = 0
total_z = 0

for i in range(n): 
    x, y, z = map(int, raw_input().split())
    total_x += x
    total_y += y
    total_z += z

if total_x == 0 and total_y == 0 and total_z == 0: print 'YES'
else: print 'NO'