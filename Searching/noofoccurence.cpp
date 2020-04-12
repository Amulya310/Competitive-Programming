#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,t,k,cnt;
	cin >> t;
	while(t--){
	    cin >> n >> k;
	    cnt=0;
	    int val;
	    for(i=0;i<n;i++){
	        cin >> val;
	        if(val==k) cnt++;
	    } 
	    cnt!=0? cout << cnt << endl : cout << -1 << endl;
	}
	return 0;
}