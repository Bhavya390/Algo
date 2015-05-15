
#include<bits/stdc++.h>

using namespace std;
/*
method -1
int main(){
	int n , i, j;
	cin>>n;
	int a[n];
	for( i = 0 ; i < n ; i++)
	cin>>a[i];
	int flag = 0 , pos;
	sort(a,a+n);
	for( i = 0 ; i < n ; i++)
	{
		if( a[i] != i+1)
		{
			flag = 1;
			pos = i+1;
			break;
		}
	}
	if(flag == 1)
	cout<<pos<<"\n";
	return 0;
}
*/
//method -2
int main(){
int n;
cin>>n;
int a[n] , i ,j;
for( i = 0 ; i < n ; i++)
cin>>a[i];
int m  = (n+2)*(n+1)/2;
for( i = 0 ; i < n ; i++)
{

    m = m - a[i];
}
cout<<m<<"\n";
return 0;
}
