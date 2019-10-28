/*
 * tab6.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int tab[20];
    int n=50;
    int max=0;
    int min=0;
    srand(time(NULL));
    for(int i=0;i<21;i++){
        tab[i]=rand()%n+1;
        cout<<tab[i]<<" ";
        if (max<tab[i]){
        max=tab[i];}
        if (min>tab[i]){
        min=tab[i];}}
    cout<<endl<<"Max:"<<max;
    cout<<endl<<"Min:"<<min;
        cout<<endl;
        
	return 0;
}

