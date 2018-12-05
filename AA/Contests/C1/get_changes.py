with open('file1.txt', 'r') as f:
    text1 = f.read()

with open('file2.txt', 'r') as f:
    text2 = f.read()

uniques = {c for c in text1 if c not in text2}

print uniques