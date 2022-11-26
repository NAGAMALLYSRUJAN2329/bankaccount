#include <iostream>

using namespace std;

int main(){
    cout<<"For Normal Calculator enter '1' "<<endl;
     cout<<"For Trignometric Calculator enter '2' "<<endl;
     cout<<"To Exit '3' "<<endl;
    char a;
    cout<<"Enter: ";
    cin>>a;

    if (a =='1'){
        cout<<"For addition '+' "<<endl;
        cout<<"For subraction '-' "<<endl;
        cout<<"For multiplication '*' "<<endl;
        cout<<"For division '/' "<<endl;
        cout<<"For exponent '^' "<<endl;
        int num1,num2;
        char op;
        int answer;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter the operator: ";
        cin>>op;
        cout<<"Enter second number: ";
        cin>>num2;
        if (op == '+'){
            answer=num1+num2;
        }else if(op =='-'){
            answer=num1-num2;
        }else if(op =='*'){
            answer=num1*num2;
        }else if(op =='/'){
            answer=num1/num2;
        }else if(op =='^'){
            int result;
        result=1;
            for(int i=0;i < num2;i++){
                result=result*num1;
        }
            answer=result;

        }else{
            cout<<"invalid"<<endl;
        }
    cout<<answer;
    }
    if(a=='2'){
        cout<<"For sine function enter 'sin' "<<endl;
        cout<<"For cosine function enter 'cos' "<<endl;
        cout<<"For tangent function enter 'tan' "<<endl;
        string op;
        double x,num;
        double answer;
        cout<<"enter the function: ";
        cin>>op;
        cout<<"enter a number:";
        cin>>num;
        x=num/57.296;
        if(op=="sin"){
           answer=x-x*x*x/6+x*x*x*x*x/120-x*x*x*x*x*x*x/5040;
        }else if(op =="cos"){
            answer=1-x*x/2+x*x*x*x/24-x*x*x*x*x*x*x/720;
        }else if(op =="tan"){
            answer=x+x*x*x/3+2*x*x*x*x*x/15+17*x*x*x*x*x*x*x/315+62*x*x*x*x*x*x*x*x*x/2835;
    }else{
            cout<<"invalid"<<endl;
        }cout<<answer<<endl;
    }
    if(a=='3'){
        exit(0);
    }
    return 0;
}