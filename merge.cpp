
#include<bits/stdc++.h>

using namespace std;


void arrangem(int b[] , int m, int a[] , int n){
	int i , j;
	for( i = 0 ; i < m ; i++)
	{
		if(b[i] != -1){
		b[i] = b[i];
		}
		else if(b[i] == -1){
		j = i;
		while(b[j] == -1 && j < m){
		j++;
		}
		if(j < m){
		b[i] = b[j];
		b[j] = -1;
		}

		if(j == m)
		break;
		}
	}
	j = 0;
	int t , k=0 , l=0;
	for( i = 0 ; i < n ;){
        if(a[i] > b[j] && b[j]!=-1)
        {
           for( l = 0 ; l < m ; l++)
			cout<<b[l]<<" ";
            j++;
        }

        else if(a[i] <= b[j]){

            t = b[j];
           // b[j] = a[i];
            k = m-1;
            while(k != j){
            b[k] = b[k-1];
            k--;
            }
            b[k] = a[i];
            i++;

			for( l = 0 ; l < m ; l++)
			cout<<b[l]<<" ";
        }
        if(b[j] == -1 && i < n){
        	while(j < m && i < n){
        		b[j] = a[i];
        		i++;
        		j++;
        	}
        }
        cout<<"\n";
	}

	for( i = 0 ; i < m ; i++)
	cout<<b[i]<<" ";
}
int main(){
	int n;
	cin>>n;
	int a[n] , i  , j;
	for( i = 0 ; i < n ; i++)
	cin>>a[i];
	int m ;
	cin>>m;
	int b[m];
	for(j = 0 ; j < m ; j++)
	cin>>b[j];
	arrangem(b,m,a,n);
	return 0;
}
