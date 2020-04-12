#include<iostream>
#include<stack>
using namespace std;
int main(){

	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0; i<n; i++){
	        cin>>ar[i];
	    }
	    stack<int> temp;
	    int left[n+1];
	    int right[n+1];
	    for(int i=0; i<n; i++){
	        left[i]=-1;
	        right[i]=n;
	    }
	    for(int i=0; i<n; i++){
            while(!temp.empty() && ar[temp.top()]>=ar[i]){
                temp.pop();
            }
            if (!temp.empty()){
               left[i]=temp.top(); 
            }
            temp.push(i);
	    }
	    while(!temp.empty()){
	        temp.pop();
	    }
	    for(int i=n-1; i>=0; i--){
            while(!temp.empty() && ar[temp.top()]>=ar[i]){
                temp.pop();
            }
            if (!temp.empty()){
               right[i]=temp.top(); 
            }
            temp.push(i);
	    }
	    int ans[n+1];
	    for(int i=0; i<=n; i++){
	        ans[i]=0;
	    }
	    for(int i=0; i<n; i++){
	        int len=right[i]-left[i]-1;
	        ans[len]=max(ans[len], ar[i]);
	    }
	    for(int i=n-1; i>=0; i--){
	        ans[i]=max(ans[i], ans[i+1]);
	    }
	    for(int i=1; i<=n; i++){
	        cout<<ans[i]<<" "; 
	    }
	    cout<<endl;
	return 0;
}