/*
��� n��� ������ m���� �� A���� �� B�� �̵���Ű�� �մϴ�. �� ������ ������ ��������� ���̸�,

 �迡�� ����� �������� ���� �ִ� p���� Ż �� �ֽ��ϴ�. ��� ó���� �� A�� �ֽ��ϴ�. 
 
�� �Ǵ� �迡�� ���������� �ڽŵ��� ���� ������� ������ ������ ������� ��ƸԽ��ϴ�. 

��� �� n, ������ �� m, �׸��� �迡 ž���� �� �ִ� �ִ� �ο� p�� �Ű������� �־��� ��, 

�ƹ��� ���� �ʰ� �����ϰ� �̵��ϱ� ���� �踦 �̵� ��Ű�� �ּ� Ƚ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.

&#8226; ����� �� n�� �������� �� m�� 2 �̻� 100 ������ �ڿ����Դϴ�.
&#8226; �迡 Ż �� �ִ� �ִ� �ο� p�� 1 �̻� 10 ������ �ڿ����Դϴ�.
&#8226; �谡 �̵��ϱ� ���ؼ��� ��� �Ǵ� �������� �ּ� 1�� �̻� ž���ؾ� �մϴ�.
&#8226; �����ϰ� �̵��� �� ���ٸ� -1�� return �ϼ���.

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
	// A �̸� ���ä��� 
	movee.push_back(make_pair(n,m));
	movee.push_back(make_pair(0,0));
	movee.push_back(make_pair(0,0));
	
	//move 0 1 2 �� ������� (�� A -��- �� B) �� 3���� ���������� ��� ������ ��  
	while(movee[2].first+movee[2].second<n+m)//b�� ��� ������ ������ ���� 
	{
		while(movee[0].first>=movee[0].second && movee[1].first>=movee[1].second && movee[2].first >= movee[2].second)
		{
			movee[0].first--;
			movee[1].first++;
		}
	}
	
	
	
	return answer;	
}
