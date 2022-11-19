#include <bits/stdc++.h>
using namespace std;
 struct data
 {
 	int pid;
 	int bt;
 	int at;
 	int wt;
 	int tat;
};
 bool cmp( data x , data y)
	{
	return ( x.bt<y.bt);	
	}
	
	
 int main()
 {
 	data a[30];
 	
    int i,k,n;
	float wtavg , tatavg;
	float avgwt,avgtat;
	cout<<"Enter the Number of process"<<endl;
	cin>>n;
	for(i=0;i<n;i++)	
	{
	a[i].pid =i;
	//a[i].at=0;
		cout<<"Enter The Burst time for the process "<<i<<endl;
		cin>>a[i].bt;
		cout<<"Enter The Arrival time for the process "<<i<<endl;
		cin>>a[i].at;
	}
	
	sort( a , a+n , cmp);
	
	a[0].wt =0;
	a[0].tat = a[0].bt;
	
		
	for(i=1;i<n;i++)
	{
		a[i].wt = a[i-1].wt + a[i-1].bt;
		a[i].tat = a[i-1].tat + a[i].bt;
	}
cout<<endl<<"P.id\tAt\tBt\tWt\tTat"<<endl;
for(i=0;i<n;i++)
	{
		avgwt=avgwt+a[i].wt;
		avgtat=avgtat+a[i].tat;
		cout<<a[i].pid<<"\t"<<a[i].at<<"\t"<<a[i].bt<<"\t"<<a[i].wt<<"\t"<<a[i].tat<<endl;
	}
	avgwt=avgwt/n;
	avgtat=avgtat/n;
	cout<<"Average waiting time:"<<avgwt<<endl;
	cout<<"Average turn around time time:"<<avgtat<<endl;
		
 };
