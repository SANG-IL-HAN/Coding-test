#include<iostream>
#include<algorithm>
#include<queue>
#include<string> 

using namespace std;

int answer=0;
int N;//창구수  
int time=0;

//시뮬레이션 데이터 
//vector<vector<int>>arr1={{0,3},{2,5},{4,2},{5,3}};

vector<vector<int>>arr1={{2,3},{5,4},{6,3},{7,4}};

int main()
{
	//값은 2개 ...노골적인 pair 활용 요구하는 문제 였네 ..ㅋㅋ 
	queue<pair<int,int>> q;
	//페어 넣은큐에 주어진 값을 넣는다. 
	for(int i=0; i<arr1.size();i++)
	{
		q.push(make_pair(arr1[i][0],arr1[i][1]));
	}
	//창구수 입력  
	cin>>N;
	//창구수 만큼 코너 만들기  
	vector<int> corner(N,0);
	
	
	while(!q.empty())//대기시간을 구하는 문제기 때문에 큐만 비우면됨 !  
	{
	
		//코너가 비었고 시간이 같거나 크면  값 넣기 
		//값이 있으면 1씩 뺴기  
		for(int i=0; i<N;i++)
		{
			if(corner[i]==0&&time>=q.front().first)
			{
				if(time>q.front().first)//만약 시간이 더크면 대기한것 !  
				{
					answer=answer+time-q.front().first;
				}
				corner[i]=q.front().second;//코너에 값 넣기  
				q.pop();//넣었으면 큐 삭제  
			}
			
			if(corner[i]!=0)
			{
				corner[i]--;
			}		
		}
		
		time++;//시간은 흐른다 ~~~~  
		
	}
	
	
	cout<<answer; //답 출력  
}
