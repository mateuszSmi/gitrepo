/*
 * tab4.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int tab[5][7];
    int a,r=0;
    cout<<"Podaj wartość początkową: ";
    cin>>a;
    cout<<"Podaj wartość o jaką ma być powiększona: ";
    cin>>r;
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            tab[i][j]=a;
            cout<<tab[i][j];
            a+=r;
            }
            cout<<endl;
        }
	return 0;
}

