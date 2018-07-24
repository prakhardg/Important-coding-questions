s = input()
s = s.split(" ")

def rev(word):
    l = 0
    r = len(word)-1
    while(l < r):
        temp = word[l]
        word[l] = word[r]
        word[r] = temp
        l +=1
        r-=1

    return "".join(word)

for i in range(len(s)):
    s[i]= rev(list(s[i]))

s = " ".join(s)
s = s[1:]
print(s)               
    
    
