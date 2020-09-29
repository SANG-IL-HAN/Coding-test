/*

입력 예제 1
4 5 1
1 2
1 3
1 4
2 4
3 4

출력 예제 2

1 2 4 3
1 2 3 4

*/ 




#include<iostream>
#include<queue>
#define MAX_VALUE 1001 

using namespace std;
int N, M, V;                    
int list[MAX_VALUE][MAX_VALUE];   
int visit[MAX_VALUE];           

void dfs(int V)
{
	cout<<V<<' ';
	visit[V]=1;
	for(int i=1; i<N+1 ; i++)
	{
		if(visit[i]==1 || list[V][i]==0)continue;
		dfs(i);
	}
}

void bfs(int V)
{
	queue<int> q;
	q.push(V);
	visit[V]=0;
	while(!q.empty())
	{
		
		V=q.front();
		cout<<V<<' ';
		q.pop();
		for(int i=1;i<N+1;i++)
		{
			if(visit[i]==0 || list[V][i]==0)continue;
			visit[i]=0;
			q.push(i);	
		}
		
	}
}




int main() {
    int x, y;
    cin >> N >> M >> V;            
    for(int i=0; i<M; i++) 
	{   
        cin >> x >> y;            
        list[x][y] = list[y][x] = 1;    
    }
    dfs(V);            
    cout << '\n';
    bfs(V);
    return 0;
}

