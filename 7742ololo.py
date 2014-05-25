np = int(raw_input())
n = int(raw_input())
ans = n
while(np-1>0):
    n = int(raw_input())
    ans = ans^n
    np = np-1
print ans
    
    
