tc = int(raw_input())
def mirroring(i, j, s):
    length = len(s)
    while(i>=0 and j<=length-1):
        if(s[i]==s[j]):
            i = i-1
            j = j+1
        else:
            s[j] = s[i]
            i = i-1
            j = j+1
    return s

def isoddlen(s):
    length = len(s)
    isodd = True
    if(length%2==0):
        isodd = false
    return isodd

def all9(s):
    for i in s:
        if i!='9':
            return False
    return True

def addOne(s,p, k):
    ans = ''
    i=k
    carry = 0
    while(i>=p):
        temp = int(s[i])+1+carry
        carry = 0
        ans = ans+char(temp)
        if(temp==10):
            carry = 1
        i = i-1
    if(carry==1) ans = ans+char(carry)
    return ans.reverse()
        
    
    

def isPossiblebyMirror(s):
    length = len(s)
    isdone = False
    mirrortech = True
    while(i>=0 and j<=length-1):
        if(s[i]==s[j]):
            i = i-1
            j = j+1
        else if(s[i]>s[j]):
            isdone = True
            s[j] = s[i]
            i = i-1
            j = j+1
        else if(isdone==True and s[i]<s[j]):
            s[j] = s[i]
            i = i-1
            j = j+1
        else:
            mirrortech = False
            break;
        return mirrortech
    

def getNextPalin(s):
    copy_s = s
    if(isoddlen(s)):
        i = mid-1
        j = mid+1
    else:
        i = mid-1
        j = mid

    if(!isPossiblebyMirror(s)):
        s = copy_s
        if(isoddlen):
            
                
        
            
    
        
    
    
