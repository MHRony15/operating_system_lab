#include<bits/stdc++.h>
using namespace std;
int main(){
 int rs,ref_str[100],fs,memo[100],pf=0;
 cout<<"Enter the number of reference string: ";
 cin>>rs;
 cout<<"Enter the reference string: ";
 for(int i=0;i<rs;i++){
    cin>>ref_str[i];
 }
 cout<<"Enter the number of Frame in memory: ";
    cin>>fs;
    for(int i=0;i<rs;i++){
        if(i<fs-1){
            memo[i]=ref_str[i];
            pf++;
        }
        else{
                for(int j=0;j<fs-1;j++){
                        int flag=0;
                    if(memo[j]==ref_str[i]){
                        flag=1;
                    }
                    if(flag==0){
                        memo[0]=ref_str[i];
                        pf++;
                    }
                }

        }

    }
    cout<<"Page fault :"<<pf;



return 0;
}
