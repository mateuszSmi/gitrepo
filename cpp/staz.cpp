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
cout<<"Pracujesz "<< staz <<" lat i zarabiasz "<< zarobek<<endl;
    }

int main(int argc, char **argv)
{   int lata;
    cout<<"Ile lat pracujesz?"<<endl;
    cin>>lata;
    
    
	drukuj(staz,zarobek,lata);
	return 0;
}

