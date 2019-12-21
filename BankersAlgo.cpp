#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    int Allocation[100][100],Max[100][100],Need[100][100],Available[100],in=0,indx[100];
    cout<<"Enter the number of Process: ";
    cin>>n;
    cout<<"Enter the number of Resource: ";
    cin>>m;
    cout<<"\n ::Enter The allocation matrix:: "<<endl;
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++)
            cin>>Allocation[i][j];
    }
     cout<<"\n ::Enter The Max matrix:: "<<endl;
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++)
            cin>>Max[i][j];
    }
     cout<<"\nEnter The Available matrix: ";
    for(int i=0;i<m;i++){
            cin>>Available[i];
    }
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++)
            Need[i][j]=Max[i][j]-Allocation[i][j];
    }
    int Finish[100],wark[100],chack;
    for(int i=0;i<n;i++){
        Finish[i]==false;
    }

    for(int l=0;l<5;l++){
    for(int i=0;i<n;i++){
        if(Finish==false) {
            int  chack=0;
            for(int j=0;j<m;j++){
                if(Need[i][j]>Available[j]){
                    chack=1;
                    break;
                }
            }
            if(chack==0){
                    indx[in++]=i;
                for(int k=0;k<m;k++)
                    Available[k]=Allocation[i][k];
                    Finish[i]==true;

            }
        }


    }
}
for(int i=0;i<n-1;i++){
    cout<<"P"<<indx[i]<<" -> ";
}



return 0;
}
