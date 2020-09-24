#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

int main()
{
	int N;
	int X;
	
	int mid;
	int insert;
    priority_queue<int,vector<int>,greater<int>> min;
    priority_queue<int> max;
    queue<int> arr1; 
	cin>>N;
    
	for(int i=0; i<N ; i++)
	{ 
	  cin>>X;
	  arr1.push(X);
	}
	
	for(int i=1; i<N+1; i++)
	{

    	//Ȧ 
	  if(i%2>0)
	  {
		
	  }
 		//¦
	  if(i%2==0)
	  {
	  	for(int j=0; j<i/2-1 ; j++)
        {
          arr3.pop();   
        }
	  	cout<<arr3.top()<<endl;
	  	continue;
	  }
	  arr3.clear();
	}
	
}

