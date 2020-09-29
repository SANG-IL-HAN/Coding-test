/*  �ֿ��� ������ ����� �ִ� ��� �κ������� ����ϴ�  ���α׷��� ������ ���ÿ�  */

#include <iostream>
#include <cstring>
#include <vector>
#include<algorithm>
using namespace std;

vector<string> menu;

//��͸� �̿��� ���� ����  
//���ڿ��� �� string ���� list, �� ��ġ�� 0�Ǵ� 1�� ������ flag, �ε��� ������ ���� IDX 
void recall(string &list,vector<int> &flag,int idx) 
{	
	if(idx==list.size()) //��� 0�Ǵ� 1�� �ִٰ� idx����  list�� �������� �����. 
	{
		string sum=""; //sum���� ���ڷ� �̷���� flag�� ���ڷ� ������ ���� ������ ���� 
		
		for(int i=0;i<flag.size();i++) 
		{
			if(flag[i]!=0) //0�̸� �ƹ��͵� ���� �ʰ� 1�̸� ���ڸ� ���� �ִ´�. 
			{
				sum.push_back(list[i]);  //���� sum �� ����  
			}
		}
		
		menu.push_back(sum); //���������� sum ���� ���� string �����̳ʿ� ���� 
		return; //����  
	}
	
	else//�� �κп��� �Լ��� ��������� 2���� �þ��. 
	{   //�б��� 1 
		flag[idx] = 1;
		recall(list,flag,idx+1);
		//�б��� 2 
		flag[idx] = 0 ;	
		recall(list,flag,idx+1);
	}

}
//������ ������ (��°��� �̻ڰ� ���⿡ �ϱ� ���� ���ĵ� �غ��Ҵ�. �ʼ��� �ƴ� )  
bool compare(string s1,string s2)
{
	if(s1.size()==s2.size())	
	{
		return s1<s2;
	}
	else
		return s1.size()<s2.size();
}

int main()
{
	//�־��� ���ڿ�  
	string inputs = "abc";
	//flag������ ũ�⸦  inputs���� �����ؼ� ���� �ϱ� !  
	vector<int> flag(inputs.size());
	//����Լ� ��� 
	recall(inputs,flag,0);
	
	sort(menu.begin(),menu.end(),compare);
	//����� ���  
	for(int i=0; i<menu.size();i++)
	{
		cout<<menu[i]<<endl;
	}
	
}
