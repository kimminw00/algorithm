#include <stdio.h>
int main (){int N,M,i,j,ary[50][50],length,min,area = 1,tempArea;char temp;scanf("%d %d",&N,&M);for(i=0;i<N;i++){for(j=0;j<M;j++){while(1){scanf("%c",&temp);if(temp!='\n')break;}ary[i][j] = temp - '0';}}if(M>N)min = N;else min = M;for(length=2;length<=min;length++){for(i=0;i<N-length+1;i++){for(j=0;j<M-length+1;j++){if(ary[i][j] == ary[i][j+length-1] && ary[i][j] == ary[i+length-1][j] && ary[i][j] == ary[i+length-1][j+length-1]){tempArea = length * length;if(tempArea > area)area = tempArea;}}}}printf("%d\n",area);return 0;}
