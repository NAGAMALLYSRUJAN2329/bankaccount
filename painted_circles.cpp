#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double pi=3.1415926536;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    double ans=0;
    double area;
    int c,d;
    c=n-1;
    d=n-1;
    if(n%2==0){
        while(c>0){
            area=pi*a[c]*a[c]-pi*a[c-1]*a[c-1];
            ans=ans+area;
            c=c-2;
        }
    }if(n%2==1){
        while(d>1){
            area=pi*a[d]*a[d]-pi*a[d-1]*a[d-1];
            ans=ans+area;
            d=d-2;
        }double area1;
        area1=pi*a[0]*a[0];
        ans=ans+area1;
        while(d=0){
            ans=pi*a[0]*a[0];
        }
    }cout<<ans;
    
    return 0;
}