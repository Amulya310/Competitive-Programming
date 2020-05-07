int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    //your code here
    long long sum = a %M +b %M;
    sum = sum % M;
    return sum;
}