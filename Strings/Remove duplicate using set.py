t = int(input())
while t>0:
    s = list(input())
    myset = set()
    ll = []
    for i in range(len(s)):
        if s[i] not in myset:
            ll.append(s[i])
            myset.add(s[i])

    print("".join(ll))
    t-=1
        
