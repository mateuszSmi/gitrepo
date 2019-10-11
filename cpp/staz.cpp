/*
 * staz.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int staz=1;
int zarobek=1000;

void drukuj(int &staz,int &zarobek,int &lata){
    int x,y;
    y=staz*lata;
    x=zarobek*lata;
cout<<"Pracujesz "<< y <<" lat i zarabiasz "<< x<<endl;
    }
    void awans(int &staz,int &zarobek,int &lata){
    int x,y;
    y=staz*lata+1;
    x=(zarobek*0.1+zarobek)*lata;
cout<<"Pracujesz "<< y <<" lat i zarabiasz "<< x<<endl;
    }
int main(int argc, char **argv)
{   int lata;
    cout<<"Ile przewidujesz ze bedziesz pracowac?"<<endl;
    cin>>lata;
    
    
	drukuj(staz,zarobek,lata);
    awans(staz,zarobek,lata);
	return 0;
}

