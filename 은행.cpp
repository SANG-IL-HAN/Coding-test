#include<iostream>
#include<algorithm>
#include<queue>
#include<string> 

using namespace std;

int answer=0;
int N;//â����  
int time=0;

//�ùķ��̼� ������ 
//vector<vector<int>>arr1={{0,3},{2,5},{4,2},{5,3}};

vector<vector<int>>arr1={{2,3},{5,4},{6,3},{7,4}};

int main()
{
	//���� 2�� ...������� pair Ȱ�� �䱸�ϴ� ���� ���� ..���� 
	queue<pair<int,int>> q;
	//��� ����ť�� �־��� ���� �ִ´�. 
	for(int i=0; i<arr1.size();i++)
	{
		q.push(make_pair(arr1[i][0],arr1[i][1]));
	}
	//â���� �Է�  
	cin>>N;
	//â���� ��ŭ �ڳ� �����  
	vector<int> corner(N,0);
	
	
	while(!q.empty())//���ð��� ���ϴ� ������ ������ ť�� ����� !  
	{
	
		//�ڳʰ� ����� �ð��� ���ų� ũ��  �� �ֱ� 
		//���� ������ 1�� ����  
		for(int i=0; i<N;i++)
		{
			if(corner[i]==0&&time>=q.front().first)
			{
				if(time>q.front().first)//���� �ð��� ��ũ�� ����Ѱ� !  
				{
					answer=answer+time-q.front().first;
				}
				corner[i]=q.front().second;//�ڳʿ� �� �ֱ�  
				q.pop();//�־����� ť ����  
			}
			
			if(corner[i]!=0)
			{
				corner[i]--;
			}		
		}
		
		time++;//�ð��� �帥�� ~~~~  
		
	}
	
	
	cout<<answer; //�� ���  
}
