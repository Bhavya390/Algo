//http://www.geeksforgeeks.org/write-a-c-program-that-given-a-set-a-of-n-numbers-and-another-number-x-determines-whether-or-not-there-exist-two-elements-in-s-whose-sum-is-exactly-x/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int i , j ,n;
	cin>>n >>j;
	int a[n];
	for( i = 0 ; i < n ; i++)
	cin>>a[i];
	sort(a,a+n);
	int f , r,s=0 ,flag=0;
	f = 0 , r = n-1;
	while(f <= r){
	s = a[r]+a[f];
	if(s > j)
	r--;
	else
	if( s < j)
	f++;
	else if(s==j)
	{
	flag = 1;
	break;
	}
	}
	if(flag==1)
	cout<<"found\n";
	else
	cout<<"-1\n";
	return 0;
}
