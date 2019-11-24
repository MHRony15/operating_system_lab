#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,duration[20],wait[20],ct[20],avwt=0,total_wait=0,i,j,p[20],priority[20], temp;;

    cout<<"Enter total number of processes:";
    cin>>n;

    cout<<"\nEnter Process Burst Time and priority\n";
    for(i=0;i<n;i++)
    {
        cout<<"Burst time of P["<<i+1<<"]:";
        cin>>duration[i];
        cout<<"Priority  of P["<<i+1<<"]:";
        cin>>priority[i];
        p[i]=i+1;

    }
    for(i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            if(priority[j]<priority[i]){

                temp=priority[i];
                priority[i]=priority[j];
                priority[j]=temp;

                temp=duration[i];
                duration[i]=duration[j];
                duration[j]=temp;

                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    wait[0]=0;
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tCompletion Time";
    for(i=0;i<n;i++){

            wait[i+1]=wait[i]+duration[i];
            ct[i]=wait[i]+duration[i];
        total_wait=total_wait+wait[i];
        cout<<"\nP["<<p[i]<<"]"<<"\t\t"<<duration[i]<<"\t\t"<<wait[i]<<"\t\t"<<ct[i];
    }
            avwt=total_wait/n;

    cout<<"\n\nAverage Waiting Time:"<<avwt;
    return 0;
}


