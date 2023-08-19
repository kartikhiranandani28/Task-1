#include <iostream>
using namespace std;
float sin (double a){

    return a - a*a*a/6 +a*a*a*a*a/120 -a*a*a*a*a*a*a/5040+a*a*a*a*a*a*a*a*a/362880 ;
}
float cos (double a){
    return 1 - a*a/2 +a*a*a*a/24 -a*a*a*a*a*a/720+a*a*a*a*a*a*a*a/40320;
}
float tan (double a){
    return a + a*a*a/3 +2*a*a*a*a*a/15+17*a*a*a*a*a*a*a/315+62*a*a*a*a*a*a*a*a*a/2835;
}
float exponent(float base, int exp){
    float result = 1;
    for (int i=0; i < exp; i++ ){
        result *=base;

         }
         return result;

}
int main(){
    float num1, num2;
    char op;

    cout<<"enter first number (specify angle in radians )";
    cin >> num1;
    cout<<"enter the operator(use initials for sin, cos and tan)";
    cin >> op;

    if (op=='+'){
        cout<<"enter second number ";
        cin>> num2;
        cout<<num1+num2;
        
        
        
    }
else if(op=='-'){
    
        cout<<"enter second number ";
        cin>> num2;
        cout<<num1-num2;
        

}
else if(op=='*'){
    
        cout<<"enter second number ";
        cin>> num2;
        cout<<num1*num2;
        
}
else if(op=='/'){
    
        cout<<"enter second number ";
        cin>> num2;
        cout<<num1/num2;
        
}

else if (op=='s'){
    cout<<sin (num1);
        
} 
else if(op=='c'){

    cout<< cos(num1);

}
else if(op=='t'){
    cout<< tan(num1);


}

else if(op=='^')
{
    cout <<"enter exponent";
    cin>> num2;
    cout << exponent(num1, num2);

}
    return 0;
}
