#include<bits/stdc++.h>
#include<queue>

using namespace std;
queue < int > myq;
int n,duration[20],AT[20],wait[20],tat[20],avwt=0,total_wait=0,i,j,p[20];

void proc_sort(int arr[]){
    for(i=1;i<=n;i++){
        for(int j= i;j<=n;j++){
            if(duration[j]<duration[i]){
                int temp;
                temp=duration[i];
                duration[i]=duration[j];
                duration[j]=temp;

                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }


 }

int main()
{


    cout<<"Enter total number of processes :";
    cin>>n;

    cout<<"\nEnter Process Burst Time and Arrival Time \n";
    for(i=1;i<=n;i++)
    {
        cout<<"P["<<i<<"]:";
        cout<<"\nBurst Time :";
        cin>>duration[i];
        cout<<"Arrival Time :";
        cin>>AT[i];
        p[i]=i;

    }

    cout<<"Gantt Chart : ";

    proc_sort(AT);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){}
        if(AT[P[i]]==AT[P[j]]){
            myq.push(P[i])
        }
    }

//    proc_sort(duration);
//    for(i=1;i<=n;i++){
//        cout<<"P"<<p[i]<<" | ";
//    }


    /*cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnround time";
    wait[0]=0;
    for(i=0;i<n;i++){

            wait[i+1]=wait[i]+duration[i];
            tat[i]=wait[i]+duration[i];
        total_wait=total_wait+wait[i];
        cout<<"\nP["<<p[i]<<"]"<<"\t\t"<<duration[i]<<"\t\t"<<wait[i]<<"\t\t"<<tat[i];
    }
            avwt=total_wait/n;

    cout<<"\n\nAverage Waiting Time:"<<avwt;*/
    return 0;
}

