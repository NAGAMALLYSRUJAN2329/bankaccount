#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    long d[n];
    long l[m];
    long a[m];
    long b[m];
    d[-1]=0;
    for(int i=0;i<n;i++){
        cin>>d[i];
    }for(int i=0;i<m;i++){
        cin>>l[i];
    }for(int i=0;i<m;i++){
        int h=0;
        int k=0;
        int u=0;
        for(int j=0;j<n;j++){
            if(l[i]>h){
                k++;
                h=h+d[j];
                u=u+d[j-1];
            }
    }
        a[i]=k;
        b[i]=l[i]-u;
    }for(int i=0;i<m;i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }

    return 0;
}