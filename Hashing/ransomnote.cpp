#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

unordered_map<string,int>::iterator it;
bool ransom_note(vector<string>magazine,vector<string>ransom)
{
	unordered_map<string,int>umap;
	for(int i=0;i<magazine.size();i++)
	{
		it=umap.find(magazine[i]);
		//cout<<*it<<endl;
		if(it==umap.end())
		{
			umap.insert(make_pair(magazine[i],1));
		}
		else
		{
			umap[magazine[i]]++;
		}
	}
	for(int i=0;i<ransom.size();i++)
	{
		it=umap.find(ransom[i]);
		//cout<<*it<<endl;
		if(it==umap.end())
		{
			return false;
		}
		else if(it->second==0)
		{
			return false;
		}	
		umap[ransom[i]]--;
	}
	return true;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<string>magazine(n);
	for(int i=0;i<n;i++)
	{
		cin>>magazine[i];
		//cout<<magazine[i]<<" ";
	}
	vector<string>ransom(m);
	for(int i=0;i<m;i++)
	{
		cin>>ransom[i];
		//cout<<ransom[i]<<" ";
	}

	if(ransom_note(magazine,ransom))
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}

}