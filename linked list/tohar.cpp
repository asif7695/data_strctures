#include<iostream>
using namespace std;

int main(){
int n=5,m=5;
// while(n!=0 || m!=0){
//     cin>>n>>m;
    
    int ar[m]={1,2,3,4,5};
    int j,i,k,pos,key,fake=0;
    for(i=0; i<m; i++){
        for(j=1; j<m; j++){
            if(ar[i]==ar[j]){
                for(k=j; k<m; k++){
                    ar[k]=ar[k+1];
                }
            } 
        }
        
    }
    //finding index;
    // for(i=0; i<=m; i++){
    //     if(ar[i]==4){
    //         pos=i;
    //     }
    // }
for(i=0; i<m; i++){
    cout<<ar[i]<<endl;
}

cout<<"succsecful!";

return 0;
}


