
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this function*/
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
void addFraction(int num1, int den1, int num2,int den2)
{
    int den=(den1 * den2);
    int sum=(num1*den2)+(num2*den1);
    
    //cout<<sum<<"/"<<den<<endl;
    int hcf=gcd(sum,den);
    cout<<sum/hcf<<"/"<<den/hcf<<endl;
    
//Your code here
 }