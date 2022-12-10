#include<iostream>
using namespace std;
int main(){
    int n,a,x,b,y,s1,s2;
    cin>>n;
    cin>>a;
    cin>>x;
    cin>>b;
    cin>>y;
    s1=a;
    s2=b;
    while(s1!=s2 && s1<=n && s2<=n ){
        s1++;
        s2--;
        if(s1==n+1){
        s1=1;
        }if(s2==0){
        s2=n;
        }
        if(s1==x || s2==y){
            break;
        }
    }if(s1==s2){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}