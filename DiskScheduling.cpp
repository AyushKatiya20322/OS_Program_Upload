#include<bits/stdc++.h>
using namespace std;

	class DiskSched{
	public:
float fcfs(int arr[],int n,int init)
{
float answer=abs(init-arr[0]);
	 for(int i=1;i<n;i++)
    	{
      answer=answer+abs(arr[i]-arr[i-1]);
    	}
	return answer/n;
}
};
int main()
{
  int disk[]={55,58,39,18,90,160,100,38,184};
  DiskSched test;
  cout<<test.fcfs(disk,9,100);
}