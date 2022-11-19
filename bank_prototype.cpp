#include <iostream>
using namespace std;
int accno[10];
string name[10];
string pass[10];
int bal[10];
int a,useracc;
string userpass;
int j=0;
int main() {
    cout<<"To Register:Enter:1"<<endl;
    cout<<"To Login:Enter:2"<<endl;
    cout<<"Input:";
    cin>>a;
    for(int i=0;i<10;i++){
        accno[i]=100+i;
    }
    if(a==1){
        system("cls");
        cout<<"Enter your Name:";
        cin>>name[j];
        cout<<"Enter the Password:";
        cin>>pass[j];
        cout<<"Enter the Balance:";
        cin>>bal[j];
        cout<<"Note your Account Number:"<<accno[j]<<endl;
        j++;
        system("cls");
    }
    if(a==2){
        system("cls");
        cout<<"Username:";
        cin>>useracc;
        cout<<"Password:";
        cin>>userpass;
        system("cls");
        for(int b=0;b<10;b++){
            if(accno[b]==useracc){
                if(pass[b]==userpass){
                    cout<<"Login Sucessfull!"<<endl;
                    cout<<"To Transfer Money:Enter:1"<<endl;
                    cout<<"To Withdraw Money:Enter:2"<<endl;
                    cout<<"To know your Balance:Enter:3"<<endl;
                    cout<<"For Main Menu:Enter:4"<<endl;
                    int c;
                    cout<<"Input:";
                    cin>>c;
                    system("cls");
                    if(c==2){
                        int wdr;
                        cout<<"Enter the Amount you want to Withdraw:";
                        cin>>wdr;
                        bal[b]=bal[b]-wdr;
                        cout<<"Your current balance is "<<bal[b]<<endl;
                        char e;
                        cout<<"After checking the balance press k:"<<endl;
                        cin>>e;
                        system("cls");
                    }
                    if(c==1){
                        int ta,acc;
                        cout<<"Enter the account number you want to transfer:";
                        cin>>acc;
                        cout<<"Enter the amount you want to transfer:";
                        cin>>ta;
                        for(int d=0;d<10;d++){
                            if(accno[d]==acc){
                                bal[b]=bal[b]-ta;
                                bal[d]=bal[d]+ta;
                                cout<<"Transfer sucessfull!"<<endl;
                                cout<<"Your balance is "<<bal[b]<<endl;
                                char e;
                                cout<<"After checking the balance press k:"<<endl;
                                cin>>e;
                                system("cls");
                            }
                        }
                    }
                    if(c==3){
                        
                        cout<<"Your Balance is "<<bal[b]<<endl;
                        char e;
                        cout<<"After checking the balance press k:"<<endl;
                        cin>>e;
                        system("cls");
                    }
                }else{
                    cout<<"Invalid Password"<<endl;
                }
            }
        }
    }system("cls");
    main();
   return 0;
}