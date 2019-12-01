#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main(){
    queue <int>myq;
    int n,i,j,time=-1,time_quantum1,time_quantum2;
    int BT[20],temp[20],WT[20],TT[20],avwt=0,total_wait=0;

    cout<<"Enter total number of processes: ";
    cin>>n;
    cout<<"\nEnter the time quantum for q1:";
    cin>>time_quantum1;
    cout<<"\nEnter the time quantum for q2:";
    cin>>time_quantum2;
    cout<<"\nEnter Process Burst Time\n";
    for(i=1;i<=n;i++)
    {
        cout<<"P["<<i<<"]:";
        cin>>BT[i];
        temp[i]=BT[i];
        myq.push(i);
    }
    int c=0;
    cout<<"Gantt Chart :"
    while(!myq.empty()){
        i=myq.front();
        c++;
         if(temp[i]>time_quantum ){
            temp[i]=temp[i]-time_quantum;
            if(c==1){
               time=time+time_quantum1;
            }
            el

            cout<<"P"<<i<<" | ";
            myq.push(i);
            myq.pop();
         }
         else{
            cout<<"P"<<i<<" | ";
            time=time+temp[i];
            TT[i]=time;
            myq.pop();
         }
    }
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    for(i=1;i<=n;i++){
        WT[i]=TT[i]-BT[i];
        total_wait=total_wait+WT[i];
        cout<<"\nP["<<i<<"]\t\t"<<BT[i]<<"\t\t"<<WT[i]<<"\t\t"<<TT[i];
    }
    cout<<"\n\nAverage Waiting Time : "<<total_wait/n;
    cout<<"\nAverage Turnaround Time : "<<time/n;
    return 0;
}









