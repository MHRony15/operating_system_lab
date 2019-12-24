#include<bits/stdc++.h>
#define MaxIn 100
using namespace std;


int main(){
    int n,m,Count=0,ind=0;
    int allocation[MaxIn][MaxIn],Max[MaxIn][MaxIn],Need[MaxIn][MaxIn],Finish[MaxIn],Avilable[MaxIn],Ans[MaxIn];
    freopen("banker.txt","r",stdin);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>allocation[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>Max[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            Need[i][j]=Max[i][j]-allocation[i][j];
        }
    }


    for(int i=0;i<m;i++){
       cin>> Avilable[i];
    }
    for(int i=0;i<n;i++){
       Finish[i]=false;
    }
for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        if(Finish==false){
           for(int j=0;j<m;j++){
                if(Need[i][j]<=Avilable[j]);
            }
            Finish[i]=true;
            Count++;
            Ans[ind++]=i;
        }

    }
}

        if(Count==n){
            for(int i=0;i<n-1;i++){
                cout<<"P"<<Ans[i]<<"-> ";
            }
        }




return 0;
}
