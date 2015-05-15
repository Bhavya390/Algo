#include<bits/stdc++.h>
using namespace std;
//normal method O(n)
int main(){
int i , j , n ;
cin>>n;
int a[n];
for(i = 0 ; i < n ; i++)
cin>>a[i];
int flag = 0 , e,count =1;
sort(a,a+n);
int m= n/2;
for( i = 0 ; i < n-1 ; i++){
	if(a[i] == a[i+1])
	count++;
else if(a[i] != a[i+1])
	count = 1;
	if(count > m)
	{
	flag = 1;
	e = a[i];
	break;
	}
}

if(flag==1){
	cout<<e<<"\n";

}else
cout<<"NONE\n";
	return 0;
}
