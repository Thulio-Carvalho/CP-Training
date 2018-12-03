
def count_maximum(a):
    i = 0
    j = 1

    sizes = []
    size = 1
    print 'dae'
    while j < N and i < N:
        start = a[i]
        curr = a[j]

        if start == 'S':
            i += 1
            j += 1
            continue
        if start == curr or (start == 'G' and curr == '.') or (start == '.' and curr == 'G'):
            size += 1
        else: 
            sizes.append(size)
            size = 1

        i += 1
        j += 1

    if len(sizes) > 0: 
        return max(sizes)
    else: return 0

def count_maximum_list(a):
    i = 0
    j = 1

    sizes = []
    size = 1
    print 'dae'
    while j < N and i < N:
        start = a[i]
        curr = a[j]

        if start == 'S':
            i += 1
            j += 1
            continue
        if start == curr or (start == 'G' and curr == '.') or (start == '.' and curr == 'G'):
            size += 1
        else: 
            sizes.append(size)
            size = 1

        i += 1
        j += 1

    print sizes
    return sizes

def has_minor_G_sub(arr):
    lista = count_maximum_list(arr)
    if len(lista) > 1:
        return True
    return False

N = int(raw_input())
arr = list(raw_input())

tries = []

for i in range(len(arr)):
    curr = arr[i]
    if curr == 'S': 
        if not(i < len(arr) - 1 and arr[i+1] == 'S' or i > 0 and arr[i-1] == 'S'):
            arr[i] = '.'
            tup = (count_maximum(arr), has_minor_G_sub(arr))
            tries.append(tup)
            arr[i] = 'S'

ans = 0
print tries
for i in tries:
    if i[1]: 
        if i[0] > ans: ans = i[0]
    elif i[0] - 1 > ans: ans = i[0] - 1
    
print ans