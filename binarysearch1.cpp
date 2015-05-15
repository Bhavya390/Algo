
#include<bits/stdc++.h>
using namespace std;


int findpivot(int a[] , int x , int p,int q){
		if(p <= q){
		int m = (p+q)/2;
		if( x > a[p])
		findpivot(a,x,p,m);
		else if(x < a[p])
		findpivot(a,x,m+1,q);
		else
		if(x == a[p])
		return p+1;
		
		}
}
int main(){
	int n ;
	cin>>n;
	int i , j , x;
	cin>>x;
	int a[n];
	for( i = 0 ; i < n ; i++)
	cin>>a[i];
	int y = findpivot(a,x,0,n-1);
	cout<<y<<"\n";
	return 0;
}
