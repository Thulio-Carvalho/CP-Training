word = raw_input()
ans = word
if len(word) >= 1:
    ans = word[0].upper() + word[1:]
print ans