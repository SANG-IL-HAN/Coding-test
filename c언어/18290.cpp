#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

int pan[11][11];
int visited[11][11]={0};
int maxx=0;
int N,M,K;
int save[6];
int save2=0;
//Àç±Í Å½»ö  
void go(int x,int y, int target,int idx)
{	

	if(x==0 || y==0 || x>N || y>M || visited[x][y]==1)return;
	
	save[idx]=pan[x][y];
 	
	if(idx==target)
 	{
 		for(int i=1; i<target+1; i++)
 		{
 			save2=save2+save[i];		
		}
		
 		if(save2 > maxx)
		 {
		 	maxx=save2;	
		 }	 
		 
		 save2=0;
		 
		 return;
	}
		

		
		
	  	go(x+1,y-1,target,idx+1);
	  	go(x-1,y+1,target,idx+1);
	  	go(x+1,y+1,target,idx+1);
	  	go(x-1,y-1,target,idx+1);
}


int main()
{


  cin>>N>>M>>K;
  int x;	
  
  for(int i=1; i<N+1 ; i++)
  {
  		for(int j=1;j<M+1 ; j++)
  		{
  			cin>>x;
			pan[i][j]=x;		
		}
  }
  
  
  for(int i=1; i<N+1 ; i++)
  {
  		for(int j=1;j<M+1 ; j++)
  		{
  			go(i,j,K,1);
  			visited[i][j]=1;
		}
  }
  
  cout<<maxx;
  
}
