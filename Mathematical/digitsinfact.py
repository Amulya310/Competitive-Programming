#{ 
#Driver Code Starts
#Initial Template for Python 3

import math


 # } Driver Code Ends

#User function Template for python3


##Complete this function
def digitsInFactorial(N):
    fact =1
    while(N>0):
        fact = fact * N
        N-=1
    #print(fact)
    count = math.floor(math.log10(fact)) +1
    return(count)
        
    #Your code here


#{ 
#Driver Code Starts.

def main():
    
    T=int(input())
    
    while(T>0):
        N=int(input())
        
        print(digitsInFactorial(N))
        
        T-=1
    
    




if __name__=="__main__":
    main()
#} Driver Code Ends