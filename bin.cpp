
int test( int r, int c1, int c2, int x, int y){
	c1 = c1 - ( r/y - r/(x*y) );
	c2 = c2 - ( r/x - r/(x*y));
	r = r - r/x - r/y  + r/(x*y);
	if((c1+c2)>=r)
	return 1;
	return 0;  
}

int binary( int c1, int c2, int x, int y){
	int l = 0 ,h = 2*(c1+c2);
	while(l<=h){
		int mid = (l+h)/2;
		if(test(mid,c1,c2,x,y)==1){
			pos=mid;
			h=mid-1;
		}
		else
			l=mid+1;
	}
	
}

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int x, y, c1, c2;
		scanf("%d%d%d%d",&x,&y,&c1,&c2);
		printf("%d\n",binary(c1,c2,x,y));
	}
	return 0;
}