#include<bits/stdc++.h>
using namespace std;
queue <int>myq;
int main(){
 int rs,ref_str[100],fs,pf=0;
 cout<<"Enter the number of reference string: ";
 cin>>rs;
 cout<<"Enter the reference string: ";
 for(int i=0;i<rs;i++){
    cin>>ref_str[i];
 }
 cout<<"Enter the number of Frame in memory: ";
    cin>>fs;
    for(int i=0;i<rs;i++){
        if(myq.size()>fs){
            myq.push(ref_str[i]);
            pf++;
        }
        else{
                for(int j=0;j<fs;j++){
                    if( myq.queue()==ref_str[i]);
                }

        }

    }
return 0;
}

