/*
사람 n명과 식인종 m명을 섬 A에서 섬 B로 이동시키려 합니다. 섬 사이의 유일한 교통수단은 배이며,

 배에는 사람과 식인종을 합쳐 최대 p명이 탈 수 있습니다. 배는 처음에 섬 A에 있습니다. 
 
섬 또는 배에서 식인종들은 자신들의 수가 사람들의 수보다 많으면 사람들을 잡아먹습니다. 

사람 수 n, 식인종 수 m, 그리고 배에 탑승할 수 있는 최대 인원 p가 매개변수로 주어질 때, 

아무도 죽지 않고 안전하게 이동하기 위해 배를 이동 시키는 최소 횟수를 return 하도록 solution 함수를 완성해주세요.

&#8226; 사람의 수 n과 식인종의 수 m은 2 이상 100 이하인 자연수입니다.
&#8226; 배에 탈 수 있는 최대 인원 p는 1 이상 10 이하인 자연수입니다.
&#8226; 배가 이동하기 위해서는 사람 또는 식인종이 최소 1명 이상 탑승해야 합니다.
&#8226; 안전하게 이동할 수 없다면 -1을 return 하세요.

*/
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int n,m,p;
int answer=0;
bool island=true;
int save=0;

vector<pair<int,int>> movee;

int main()
{
	cin>>n>>m>>p;
	save=p;
	// A 이면 사람채우기 
	movee.push_back(make_pair(n,m));
	movee.push_back(make_pair(0,0));
	movee.push_back(make_pair(0,0));
	
	//move 0 1 2 는 순서대로 (섬 A -배- 섬 B) 임 3가지 스테이지를 계속 돌리면 됨  
	while(movee[2].first+movee[2].second<n+m)//b에 사람 식인종 같을시 종료 
	{
		while(movee[0].first>=movee[0].second && movee[1].first>=movee[1].second && movee[2].first >= movee[2].second)
		{
			movee[0].first--;
			movee[1].first++;
		}
	}
	
	
	
	return answer;	
}
