#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int c[t];
    int a[t][c[t]];
    int b[t][c[t]];
    int ans[t];
    for(int i=0;i<t;i++){
        ans[i]=0;
        a[i][0]=2;
    }
    for(int f=0;f<t;f++){
        cin>>c[f];
        for (int i=1;i<=c[f];i++){
            cin>>a[f][i];
        }for (int i=1;i<=c[f];i++){
            cin>>b[f][i];
        }for(int k=1;k<=c[f];k++){
            if(b[f][k]==1){
                if(a[f][k]==0){
                    ans[f]=ans[f]+1;
                    a[f][k]=2;
                }if(a[f][k-1]==1 && a[f][k]!=0){
                    ans[f]=ans[f]+1;
                    a[f][k-1]=2;
                }if (a[f][k-1]!=1 && a[f][k+1]==1){
                    ans[f]=ans[f]+1;
                    a[f][k+1]=2;
                }
            }
    }
}for(int i=0;i<t;i++){
    cout<<ans[i]<<endl;
}
    return 0;
}