#include<iostream>
#include<math.h>
#define  e 0.001
using namespace std ;
double f(double x ,int choice ){
    switch(choice){
        case 1 : return (x*log10(x)-1.2);
        break;
        case 2 :return(sin (x)-(1/x));
        break;
        case 3 :return(pow(x,3)-4*x+9);
        break;
        }
}
double derf(double x ,int choice )
{
    switch(choice){
        case 1:return (log10(x)+0.43429 );
        break;
        case 2 :return(cos(x)+(1/(x*x)));
        break;
        case 3 :return(3*x*x-4);
        break;
    }
}
void secant(int choice ){
    cout<< "    SECANT METHOD -----VAIBHAV AGGARWAL \n";
    cout<< "enter x0 and x1 \n";
    double  x0,x1,xn2;
    cin>> x0>>x1;
    cout<<"enter the iterations ";
    int itr ;
    cin>>itr ;
    xn2=(x0*f(x1,choice )-x1*f(x0,choice ))/(f(x1,choice )-f(x0,choice ));
    while(itr !=0){
        cout<< "root  is "<<abs(xn2)<<"\n";
        int a =xn2 ;
        x0=x1;
        x1=xn2;
        xn2=(x0*f(x1,choice )-x1*f(x0,choice ))/(f(x1,choice )-f(x0,choice ));
        itr--;       
    }
}
void bis(int choice ){
    cout<<"        BISECTION METHOD-----VAIBHAV AGGARWAL \n" ;
    double a ,b,x;
    int itr=0;
    cout<<  "enter a and b \n";
    cin>>a>>b;
    int maxitr;
    cout<< "enter maximum itertations \n";
    cin>>maxitr;
    while (itr<maxitr){
        x=(a+b)/2;
        if(abs(f(x-a,choice))<e){
            cout<<"final root after " <<itr<<" iterations is "<< abs(x) <<"\n";
            itr=maxitr;
        }
        else{
            if(f(a,choice)*f(x,choice)>0){
                a=x;
                cout<<"root in "<<itr<< " iteration is "<<abs(x)<<"\n";
            }
            else {
                b=x;
                cout<<"root in "<<itr<< " iteration is "<<abs(x)<<"\n";
            }
        } 
        itr++;
    }
}
void newton(int choice ){
    cout<<"         NEWTON RAPHSON METHOD ---- VAIBHAV AGGARWAL \n";
    double xn,xn1,h;
    cout<< "enter the value of xn ";
    cin>> xn ;
    h=f(xn,choice)/derf(xn,choice);
    xn1= xn-h;
    while(abs(xn1-xn)>=e ){
        xn=xn1 ;
        h=f(xn,choice)/derf(xn,choice);
        xn1= xn-h;
        cout<<abs(xn)<<"\n";
    }
    cout<<"root is "<< abs(xn1) ;
}
int main(){
    cout<<"           VAIBHAV CM coding \n";
    cout<< " 1- bisection method  2- newton raphson method  3- secant method \n";
    cout<<"ENTER CHOICE  1 OR 2 OR 3 TO CHOOSE ABOVE METHOD ";
    int c ;
    cin>> c ;
    cout<<" FUNCTIONS HAI = (1)-> x*log10(x)-1.2 & (2)-> sin (x)-(1/x)  & (3)-> x^3-4x+9 \n";
    cout<<"ENTER 1 OR 2 OR 3 TO CHOOSE ABOVE  FUNCTION ";
    int choice ;
    cin>>choice;
    switch(c ){
        case 1 :bis(choice);
        break;
        case 2:newton(choice);
        break;
        case 3:secant(choice);
        break;
        default:cout<<"   correct your choice ";
    }
    return 0;
}