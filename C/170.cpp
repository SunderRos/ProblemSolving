#include<bits/stdc++.h>
#include <time.h>
using namespace std;
#include <math.h>
#define ll long long 
// to increase precision
// std::cout<<std::fixed;
// 	std::cout<<std::setprecision(6)<<z;
//clock_t tStart = clock();
//printf("Time taken: %.9fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define max1 1000007
long long int mod =1e9+7;


int main(){	
//ios_base::sync_with_stdio(false);
	int x,n;
	cin>>x>>n;
	vector<int> p;
	int vis[102]={0};
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		vis[a]=1;
	}
	for (int i = 0; i < 102; ++i)
	{
		if(vis[i])
			continue;
		p.push_back(i);
	}
	sort(p.begin(),p.end());
	int ind=lower_bound(p.begin(),p.end(),x)-p.begin();
	if(ind==0){
		cout<<p[ind]<<endl;
	}
	else{
		int a1=abs(x-p[ind]);
		int a2=abs(x-p[ind-1]);
		if(a1<a2){
			cout<<p[ind]<<endl;
		}
		else{
			cout<<p[ind-1]<<endl;
		}
	}



		
}