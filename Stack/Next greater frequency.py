def NFG(a, n):
     
    if (n <= 0):
        print("List empty")
        return []

    stack = [0]*n
 
    freq = {}
    for i in a:
        freq[a[i]] = 0
    for i in a:
        freq[a[i]] += 1
 
    res = [0]*n
 
    top = 0
    stack[top] = 0
     
    
    for i in range(1, n):
         
        if (freq[a[stack[top]]] > freq[a[i]]):
            top += 1
            stack[top] = i
 
        else: 
             
            while (top>-1 and freq[a[stack[top]]] < freq[a[i]]):
                res[stack[top]] = a[i]
                top -= 1

            top+=1
            stack[top] = i
      
    while (top > -1):
        res[stack[top]] = -1
        top -= 1
 
    return res

print(NFG([1,1,2,3,4,2,1],7))
