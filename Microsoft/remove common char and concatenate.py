#code
n = int(input())

while n>0:
    
    def stick(a,b):
        c = list(set(a).intersection(b))
        a = [i for i in a if i not in c]
        b = [i for i in b if i not in c]
        res = a+b
        if len(res)==0:
            return '-1'
        return ''.join(res)
    
    a = input()
    b = input()
    print(stick(a,b))
    
    n = n-1
        