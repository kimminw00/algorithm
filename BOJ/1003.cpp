#include <stdio.h>
int fib[41][2];
int main (){
	int T,i,N;
	scanf("%d",&T);
	fib[0][0]=1;fib[0][1]=0;fib[1][0]=0;fib[1][1]=1;
	for(i=2;i<=40;i++){
		fib[i][0] = fib[i-1][0]+fib[i-2][0];
		fib[i][1] = fib[i-1][1]+fib[i-2][1];
	}
	for(i=0;i<T;i++){
		scanf("%d",&N);
		printf("%d %d\n",fib[N][0],fib[N][1]);
	}
	return 0;
}
