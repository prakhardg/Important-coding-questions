s = input()
s = list(s)
st  = []
opening = ['(', '[', '{']
closing = [')', '}', ']']
flag = True



def isEmpty(l):
    return True if len(l) ==0 else False

def top():
    return st[len(st)-1]

def pop():
    if not isEmpty(st):
        st.remove(st[len(st)-1])
        

def push(c):
    st.append(c)
    return

def pop_bracket():
    if isEmpty(st):
        return False
    if (s[i] == ')' and top() == '(' or s[i] == ']' and top() == '[' or s[i]== '}' and top() == '{'):
        pop()
        return True
    else:
        return False
        
        
        

for i in range(len(s)):
    if s[i] in opening:
        push(s[i])

    elif s[i] in closing:
        flag = pop_bracket()
        if not flag:
            break

print(True if isEmpty(st) and flag else False)
