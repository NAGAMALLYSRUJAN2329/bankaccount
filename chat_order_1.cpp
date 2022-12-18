#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s[t];
    string a[t];
    for(int i=0;i<t;i++){
        cin>>s[i];
    }for(int i=0;i<t;i++){
        a[i]=s[i];
        for(int j=0;j<i;j++){
            if(s[i]==a[j]){
                a[j]=" ";
            }
        }
    }for(int i=t-1;i>=0;i--){
        if(a[i]==" "){
            continue;
        }cout<<a[i]<<endl;
    }
    return 0;
}   