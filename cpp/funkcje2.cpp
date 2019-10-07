/*
 * funkcje2.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int b =10;

int dodaj(){
    int a=0;
    cout<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
    }
    
    
int dodaj2(int a,int b){
    //a=20;
    //cout<<"a="<<a<<endl;
    //b=50;
    //cout<<"b="<<b<<endl;
    //cout<<a+b<<endl;
    return a+b;
    }
void modyfikuj(int &a, int &b, int &suma){
    cout<< &suma <<endl;
    suma=a+b+50;
    a=2000;
    b=2000;
}
int main(int argc, char **argv)
{
    int a =1;
    int b=200; //zmienna lokalna
//	cout<<a<<endl;
//	cout<<b<<endl;
    int suma=dodaj2(a,b);
//    b=100;
//    dodaj();
//    cout<<"suma: "<<suma<<endl;
    
    modyfikuj(a,b,suma);
    
    cout<<a<<endl;
	cout<<b<<endl;
    cout<<"suma: "<<suma<<endl;
	return 0;
}

