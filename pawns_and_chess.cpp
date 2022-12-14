#include<iostream>
using namespace std;
    void chess();
void chess(){
    int n,ans;
    int a[n];
    int b[n];
    a[0]=2;
    ans=0;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }for (int i=1;i<=n;i++){
        cin>>b[i];
    }for(int k=1;k<=n;k++){
        if(b[k]==1){
            if(a[k]==0){
                ans++;
                a[k]=2;
            }if(a[k-1]==1 && a[k]!=0){
                ans++;
                a[k-1]=2;
            }if (a[k-1]!=1 && a[k+1]==1){
                ans++;
                a[k+1]=2;
            }
        }
    }cout<<" "<<ans<<" "<<endl;
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        chess();
    }
    
    return 0;
}
