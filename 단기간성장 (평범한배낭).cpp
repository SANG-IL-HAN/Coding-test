#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
 
int n,k; //물품의 수 & 제한 무게
 
int w,v; //무게  & 가치  
 
bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second== b.second) {
    	return a.first > b.first;
	}
    else
	{
	 return a.second > b.second ;//내림차순
	}
}


int main()
{
  int answer=0;
  vector<pair<int,int>> bag;
  
  cin>>n>>k;
  
  for(int i=0; i<n ; i++)
  {
  	cin>>w>>v;
  	bag.push_back(make_pair(w,v));	
  }
  
  sort(bag.begin(),bag.end(),compare);
  

  for(int i=0 ;i<n;i++)
  {
  	if(bag[i].first+bag[i+1].first<=k)
  	{
  		bag[i+1].first=	bag[i].first+bag[i+1].first;
  		bag[i+1].second=bag[i].second+bag[i+1].second;
	}
  }
  sort(bag.begin(),bag.end(),compare);
  
 for(int i=0; i<bag.size();i++)
  {
      if(bag[i].first<=k)
      {
          cout<<bag[i].second;
          break;
      }
  }
      

} 
