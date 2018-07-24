#CODE INCOMPLETE
s = str(input())
s = list(s)
dic = {}
ans = []
for i in range(len(s)):
    if s[i] not in dic.keys():
        dic[s[i]] = []
        dic[s[i]].append(i)

    else:
        l = dic[s[i]]
        if abs(i - l[len(l)-1] ) == 1:
            tmp = l[len(l)-1]
            ch = s[i]
            while(i < len(s)and s[i]== ch ):
                i = i+1
            dic[ch].remove(tmp)
        else:
            dic[s[i]].append(i)

list_tuples = []
for k in dic.keys():
    l = dic[k]
    for i in l:
        list_tuples.append((i, k))

list_tuples.sort()
print(dic)
print(list_tuples)
ll = []
for (i,k) in list_tuples:
    ll.append(k)
print("ll = {}".format(ll))
if len(ll) != len(list(set(ll))):
    print(list(set(ll)))
    print("")

else:
    for (i,k) in list_tuples:
        ans.append(k)
    print("".join(ans))

        
