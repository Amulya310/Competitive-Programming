#{ 
#Driver Code Starts
#Initial Template for Python 3

import math



 # } Driver Code Ends

#User function Template for python3


##Complete this function
  
# Prints roots of quadratic equation  
# ax*2 + bx + x 
def quadraticRoots( a, b, c): 
  
    # If a is 0, then equation is  
    # not quadratic, but linear 
    if a == 0: 
        #print("Invalid") 
        return -1
    d = b * b - 4 * a * c
    sqrt_val = math.sqrt(abs(d)) 
      
    if d > 0: 
        #print("Roots are real and different ") 
        #print(i, end='')
        print(math.floor((-b + sqrt_val)/(2 * a)),end=' '),print(math.floor((-b - sqrt_val)/(2 * a)))
    elif d == 0: 
        #print("Roots are real and same") 
        print(math.floor(-b / (2*a)),end=' '),print(math.floor(-b / (2*a)))
    else: #d<0 
        print("Imaginary") 
        '''print(- b / (2*a) , " + i", sqrt_val) 
        print(- b / (2*a) , " - i", sqrt_val'''

#{ 
#Driver Code Starts.

def main():
    
    T=int(input())
    
    while(T>0):
        abc=[int(x) for x in input().strip().split()]
        a=abc[0]
        b=abc[1]
        c=abc[2]
        
        quadraticRoots(a,b,c)
        
        
        T-=1
    
    




if __name__=="__main__":
    main()
#} Driver Code Ends