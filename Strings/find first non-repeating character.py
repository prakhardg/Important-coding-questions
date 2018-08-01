s = input()
while s != "":
    l = len(s)
    ch = s[0]
    s = s.replace(ch, "")
    if l-len(s) == 1:
        print(ch)
        break
    else:
        continue
