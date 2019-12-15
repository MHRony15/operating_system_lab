#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef struct proccess
{
	int at,bt,ct,ta,wt,btt;
	string pro_id;
}Schedule;

bool compare(Schedule a,Schedule b)
{
	return a.at<b.at;
}
bool compare2(Schedule a,Schedule b)
{
	return a.bt<b.bt;
}

int main()
{
	Schedule pro[10];
	int n,i,j,pcom;
	//n = number of processes, i= iteration variable,pcom=number of complete program

	cout<<"Enter the number of Process::";
	cin>>n;

	cout<<"Enter the Process id arrival time burst time :::";

	for(i=0;i<n;i++)
	{
		cin>>pro[i].pro_id;
		cin>>pro[i].at;
		cin>>pro[i].bt;
		pro[i].btt=pro[i].bt;
	}

	sort(pro,pro+n,compare);




	int ctime=0;//current time
	pcom=0;
	while(pcom<n)
	{
		for(j=0;j<n;j++)
		{
			if(pro[j].at>ctime)
			break;
		}

		sort(pro,pro+j,compare2);



		if(j>0)
		{

			for(j=0;j<n;j++)

			{
				if(pro[j].bt!=0)
				break;
			}

			if(pro[j].at>ctime)

			{
				ctime=pro[j].at;

			}
			pro[j].ct=ctime+1;
			pro[j].bt--;
		}
		ctime++;
		pcom=0;
		for(j=0;j<n;j++)
		{
			if(pro[j].bt==0)
			pcom++;
		}
	}
	double awt;//averageWaitingTime

	cout<<"ProID\tAtime\tBtime\tCtime\tTtime\tWtime\n";

	for(i=0;i<n;i++)
	{
		pro[i].ta=pro[i].ct-pro[i].at;
		pro[i].wt=pro[i].ta-pro[i].btt;

        awt=awt+pro[i].wt;

		cout<<pro[i].pro_id<<"\t"<<pro[i].at<<"\t"<<pro[i].btt<<"\t"<<pro[i].ct<<"\t"<<pro[i].ta<<"\t"<<pro[i].wt;
		cout<<endl;
	}
	cout<<" AVERAGE WAITING TIME:"<<awt/n<<endl;
	return 0;
}
