#include<iostream>
#include<string>
#include<stack>
using namespace std;
string isBalanced(string s) {
int k=s.size();
    int *stack=(int *)malloc(sizeof(int)*k);
    int top=-1;
    for(int i=0; i<k; i++)
    {
        top++;
        stack[top]=s[i];
        if((stack[top]==')'&&(top-1>=0&&stack[top-1]=='('))||(stack[top]=='}'&&(top-1>=0&&stack[top-1]=='{'))||(stack[top]==']'&&(top-1>=0&&stack[top-1]=='[')))
            top=top-2;
    }
    if(top==-1)
        return "YES";
    else
        return "NO";

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.size();
		cout<<isBalanced(s)<<endl;
		
	}
}