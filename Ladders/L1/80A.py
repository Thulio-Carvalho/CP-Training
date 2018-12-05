def is_prime(x):
    for i in range(2, x/2 + 1):
        if (x % i == 0): return False
    return True

n, m = map(int, raw_input().split())
while True:
    n += 1
    if is_prime(n):
        if n == m: print 'YES'; break
        else: print 'NO'; break 