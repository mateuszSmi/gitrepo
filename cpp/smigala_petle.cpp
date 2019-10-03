/*
 * petle2.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
#include <iomanip>
using namespace std;

void drukujTabliczke(int x, int y){
    	int i, j;
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            cout<< setw(4)<<i*j<<" ";
        }
        cout<<endl;
    }
    }
void prostokat1(int a, int b){
    for(a=1;a<=5;a++){
        for(b=1;b<=12;b++){
            cout<<"#";
            
            }
        cout<<endl;
        }
    
    }
void prostokat2(int a, int b){
    for(a=1;a<=5;a++){
        for(b=1;b<=12;b++){
            if(a>=2&&a<=4&&b>=2&&b<=11){
            cout<<" ";
        }
        else{
            cout<<"#";
        }
            }
        cout<<endl;
        }
    
    }

void choinka(int x){
    cout<<"Podaj x:";
    cin>>x;
    cout<<endl;
    int i,j;
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
            }
            cout<<endl;
    }
}
int main(int argc, char **argv)
{
    prostokat1(5,12);
    cout<<endl;
    prostokat2(5,12);
    cout<<endl;
    choinka(1);
	return 0;
}

