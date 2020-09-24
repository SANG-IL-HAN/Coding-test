/*  주여진 수열로 만들수 있는 모든 부분집합을 출력하는  프로그램을 제작해 보시오  */

#include <iostream>
#include <cstring>
#include <vector>
#include<algorithm>
using namespace std;

vector<string> menu;

//재귀를 이용해 숫자 추출  
//문자열이 들어갈 string 변수 list, 각 위치에 0또는 1을 저장할 flag, 인덱스 역할을 해줄 IDX 
void recall(string &list,vector<int> &flag,int idx) 
{	
	if(idx==list.size()) //계속 0또는 1을 넣다가 idx값이  list와 같아지면 멈춘다. 
	{
		string sum=""; //sum에는 숫자로 이루어진 flag를 문자로 변경한 것을 저장할 변수 
		
		for(int i=0;i<flag.size();i++) 
		{
			if(flag[i]!=0) //0이면 아무것도 넣지 않고 1이면 그자리 값을 넣는다. 
			{
				sum.push_back(list[i]);  //변수 sum 에 저장  
			}
		}
		
		menu.push_back(sum); //마지막으로 sum 값을 백터 string 컨테이너에 저장 
		return; //종료  
	}
	
	else//이 부분에서 함수의 저장공간이 2개로 늘어난다. 
	{   //분기점 1 
		flag[idx] = 1;
		recall(list,flag,idx+1);
		//분기점 2 
		flag[idx] = 0 ;	
		recall(list,flag,idx+1);
	}

}
//작은게 앞으로 (출력값을 이쁘게 보기에 하기 위해 정렬도 해보았다. 필수는 아님 )  
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
	//주어진 문자열  
	string inputs = "abc";
	//flag벡터의 크기를  inputs값과 같개해서 선언 하기 !  
	vector<int> flag(inputs.size());
	//재귀함수 출력 
	recall(inputs,flag,0);
	
	sort(menu.begin(),menu.end(),compare);
	//결과값 출력  
	for(int i=0; i<menu.size();i++)
	{
		cout<<menu[i]<<endl;
	}
	
}
