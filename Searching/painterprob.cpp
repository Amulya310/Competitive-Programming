using namespace std;
#define ll long long int
int findmax(int a[],int n){
    int max1=INT_MIN;
    for(int i=0;i<n;i++){if(max1<a[i]){max1=a[i];}}
    return max1;
}

int findtot(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){sum+=a[i];}    
    return sum;
}

int findn(int mid,int a[],int n){
int sum=0;int count=1;    
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>mid){
        
            count+=1;
            sum=a[i];
    }
    }
    return count;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int k,n;
	    cin>>k>>n;
	    int a[n];
	    for(int i=0;i<n;i++){cin>>a[i];}
	    int min=findmax(a,n);
	    int max=findtot(a,n);
	   // cout<<min<<" "<<max<<endl;
	    int low=min;
	    int high=max;
	    int mid=0;
	    while(low<high){
	        mid=(high+low)/2;
	        int fn=findn(mid,a,n);
	        if(fn<=k){high=mid;}
	        else{low=mid+1;}
	    }
	    cout<<low<<endl;
	}
	return 0;
}