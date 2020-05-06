#User function Template for python
import fractions 
import math as m
# Returns the lcm of first n numbers 
def getSmallestDivNum(n): 
    ans = 1    
    for i in range(1, n + 1): 
        ans = (ans * i)/ m.gcd(ans, i)         
    return int(ans)