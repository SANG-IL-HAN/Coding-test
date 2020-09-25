#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
 
int n,k; //물품의 수 & 제한 무게
 
int w,v; //무게  & 가치  

pair<int,int> bag[100];

int dp[101][100001];

int go(int idx, int x)
{
	if(dp[idx][x] > 0 ) return dp[idx][x];
	if(idx==n) return 0;
	
	int n1=0;
	
	if(x+bag[idx].first <=k)
		n1=bag[idx].second + go(idx+1,x+bag[idx].first);
		
	int n2=go(idx+1,x);		
	
	return dp[idx][x]=max(n1,n2);
}

int main(void)
{
  int answer=0;
  
  scanf("%d %d", &n,&k);
  
  for(int i=0; i<n ; i++)
  {
  	scanf("%d %d", &w,&v);
  	bag[i]=make_pair(w,v);	
  }
  
  printf("%d \n" , go(0,0));
  
  return 0;
  
} 
