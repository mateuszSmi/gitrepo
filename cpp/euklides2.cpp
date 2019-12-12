/*
 * euklides2.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int NWD_re1(int a, int b){
    if(a!=0){
        return NWD_re1(a%b, b-a%b);}
    else
        return b;
    }

//NWD(a,b)=a dla b = 0
//NWD(a,b)={a=b,b= a%b}
//NWD(a,b)= NWD(b,a%b)

int NWD_re2(int a, int b){
    if(b!=0){
        return NWD_re2(b,a%b);
        }
    else return a;
    }
    
int NWD_it2(int a, int b){
    int i=0;
    while(b<0){
        a=a-b;
        b=a%b;
        i++;
        }
    return b;
    }

int main(int argc, char **argv)
{
    int a, b, i;
    a = b = i = 0;
    cout<<"Podaj dwie liczby calkowite: ";
    cin>>a>>b;
    cout<<"NWD to: "<<NWD_re1(a,b)<<endl;
    cout<<"NWD to: "<<NWD_re2(a,b)<<endl;
    cout<<"NWD tooo: "<<NWD_it2(a,b);
	return 0;
}

