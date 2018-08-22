value = int(raw_input())
print value

freq = {}

def updateValues(money):
    global value
    if (value >= money):
        freq[money] += value / money
        value = value % money


for i in [100, 50, 20, 10, 5, 2, 1]:
    freq[i] = 0
    updateValues(i)
    print "%d nota(s) de R$ %d,00" % (freq[i], i)
    

