#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;
int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int x;
    double da;
    string str;
    cin>>x>>da;
    while(str.length()==0)
        getline(cin,str);
    x=x+i;
    da+=d;
    str =s+" "+ str;
    cout<<x<<endl;
    cout<<fixed<<setprecision(2)<<da<<endl;
    cout<<str<<endl;
    return 0;
}