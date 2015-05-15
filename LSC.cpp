
#include<bits/stdc++.h>

using namespace std;
int main(){
	int n , i ,j;
	cin>>n;
	int a[n];
	for( i = 0 ; i < n ; i++)
	cin>>a[i];
	int cs = 0 ,os = 0 , ci = 0 , oi = 0;

	for( i = 0 ; i < n ; i++ ){
	if(cs+a[i] > 0)
	cs = cs+a[i];
	else
	{
		ci = i;
		cs = 0;
	}
	
	if(cs > os)
	{
		os = cs;
		oi = ci;
	}
	}
	cout<<"largest sum is \n"<<os<<" \n";
	return 0;
}