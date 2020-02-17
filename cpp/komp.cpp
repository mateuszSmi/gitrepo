#include <iostream>

using namespace std;

int main()
{
    float x=0;
    float y=0;
    float a;
    float b;
    cout<<"Podaj Vnk: ";
    cin>> x;
    cout<<"Podaj Vk: ";
    cin>> y;
    if(x>y){
    a = y/x*100;
    b = (1 - (y/x))*100;
    cout<<"Wspolczynnik kompresji wynosi: "<<a<<"%"<<endl;
    cout<<"Wspolczynnik kompresji wynosi`: "<<b<<"%";}
    else{
        cout<<"bledne dane";}

    return 0;
}
