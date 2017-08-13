#include<iostream>
#include<math.h>
#include<string.h>
#include<queue>
#include<algorithm>
#include<cstdio>
#define rep(i,a,n) for(i=a;i<=n;i++)
#define per(i,a,n) for(i=n;i>=a;i--)
#define scd1(a) scanf("%d",&a)
#define scd2(a,b) scanf("%d%d",&a,&b)
#define ll long long
#define mem(a,b) memset(a,b,sizeof a);
using namespace std;

int num[105][105],t,h;
int dp[105][105];

int main(){
	scd1(t);
	while(t--){
		scd1(h);
		int i,j;
		rep(i,1,h){
			rep(j,1,i){
				scd1(num[i][j]);
			}
		}
		mem(dp,0);
		dp[1][1]=num[1][1];
		rep(i,2,h){
			rep(j,1,i){
				
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+num[i][j];

			}
		}
		int ans=0;
		rep(i,1,h){
			ans=max(ans,dp[h][i]);
		}
		printf("%d\n",ans);
	}
	
	
}
