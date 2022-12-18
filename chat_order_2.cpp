#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s[t];
    string a[t];
    for(int i=0;i<t;i++){
        cin>>s[i];
        a[i]=s[i];
    }int k=1;
    for(int j=0;j<k && k<t;j++){
            if(s[k]==a[j]){
                a[j]=" ";
        }
        if(j==k-1){
            k=k+1;
            j=-1;
        }
    }for(int i=t-1;i>=0;i--){
        if(a[i]==" "){
            continue;
        }cout<<a[i]<<endl;
    }
    return 0;
}   