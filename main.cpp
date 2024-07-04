#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

double pi = (22/7);

int sum(int x,int y){
    return x + y;
}
int sub(int x,int y){
    return x - y;
}
int mul(int x,int y){
    return x * y;
}
int diva(int x,int y){
    return x / y;
}
double sinn(double x){
    double y = (x *(pi/180));
    return sin(y);
}
double coss(double x){
    double y = (x *(pi/180));
    return cos(y);
}
double tann(double x){
    double y = (x *(pi/180));
    return tan(y);
}

int main()
{
    int a,c,test;
    char b;
    cout <<"Enter system : \n"<<"1- Basic operations(+ - * /)\n"<<"2- Trigonometric operations\n";
    cin >>test;
    system("cls");
    if(test==1){
        cin>>a>>b>>c;
        system("cls");
        if(b=='+'){
     cout<<"The result is : "<<sum(a,c);
    }
    else if(b=='-'){
     cout<<"The result is : "<<sub(a,c);
    }
    else if(b=='*'){
     cout<<"The result is : "<<mul(a,c);
    }
    else if(b=='/'){
     cout<<"The result is : "<<diva(a,c);
    }
    else{
        cout<<"Error!\n";
       }

    }
    if(test==2){
       cout <<"choose : \n"<<"(1) sin(x)\n"<<"(2) cos(x)\n"<<"(3) tan(x)\n";
       int t;
       double angle;
       cin>>t;
       system("cls");
       if(t==1){
        cout<<"sin ";
        cin>>angle;
        system("cls");
        cout<< sinn(angle);
       }
       else if(t==2){
        cout<<"cos ";
        cin>>angle;
        system("cls");
        cout<< coss(angle);

       }
       else if(t==3){
        cout<<"tan ";
        cin>>angle;
        system("cls");
        cout<< tann(angle);

       }
       else{
        cout<<"Error!\n";
       }
    }

    return 0;
}
