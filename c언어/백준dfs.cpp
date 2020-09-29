#include<iostream>
#include<queue>
#define MAX_VAL 101 
using namespace std;

int visited[MAX_VAL];

int list[MAX_VAL][MAX_VAL];

//c=computer, n=network  x,y =간선의 표현  
int x,y,c,n;
int sum=0; //결과값을 저장할 값

void dfs(int start)
{ 
	cout<<start;		
	visited[start]=1;
	sum++;
	for(int i=1; i<c+1; i++)
	{
		if(visited[i]==1 || list[start][i]==0 )continue;
		dfs(i);	
	}
}


int main()
{
	cin>>c;
	cin>>n;
	
    for(int i=1; i<c+1 ; i++)
	{
		cin>>x>>y;
		list[x][y]=list[y][x]=1;
	}	
	
	dfs(1);
	
	cout<<sum-1<<endl;
	
	return 0;
}
