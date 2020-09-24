#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n=4;
	vector<vector<int>> arr;
	vector<int> save;
	for(int a=0; a<n; a++)
    {
        for(int b=0; b<a+1 ; b++ )
        {
           save.push_back(0);
        }
        
        arr.push_back(save);
        save.clear();
    }
    
	
	int sum=1;
    //¾Æ·¡
    for(int i=0;i<arr.size();i++)
    {
        arr[i][0]=sum;
        sum++;
    }
    
    
    for(int i=0 ; i<n ; i++)
    {
    	cout<<arr[i][0]<<endl;
	}
}
