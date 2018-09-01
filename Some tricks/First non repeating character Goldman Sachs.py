#code
t = int(input())
while t>0:
    n = int(input())
    str = list(input())
    dic = {}
    l = set([])
    for i in range(len(str)):
        if str[i] in l:
            continue
        if str[i] in dic:
            del dic[str[i]]
            l.add(str[i])
        else:
            dic[str[i]] = i
    
    ans = 10000009
    for key in dic.keys():
        ans = min(dic[key], ans)
    if ans== 10000009:
        print("-1")
    else:
        print(str[ans])
    
    t-=1
        