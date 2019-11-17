#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,duration[20],wait[20],tat[20],avwt=0,total_wait=0,i,j;

    cout<<"Enter total number of processes:";
    cin>>n;

    cout<<"\nEnter Process Burst Time\n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>duration[i];
    }

    wait[0]=0;
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnround time";
    for(i=0;i<n;i++){

            wait[i+1]=wait[i]+duration[i];
            tat[i]=wait[i]+duration[i];

        total_wait=total_wait+wait[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<duration[i]<<"\t\t"<<wait[i]<<"\t\t"<<tat[i];
    }
            avwt=total_wait/n;

    cout<<"\n\nAverage Waiting Time:"<<avwt;
    return 0;
}
