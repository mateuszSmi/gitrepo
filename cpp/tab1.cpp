/*
 * tab1.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int t[5];
    int t2[5];
    cout<<"Podaj pierwsze 5 liczb: "<<endl;
    for(int i=0;i<5;i++){
        cin>>t[i];}
    cout<<"Podaj drugie 5 liczb: "<<endl;
        for(int i=0;i<5;i++){
        cin>>t2[i];}
    int suma=0;
    for(int i=0;i<5;i++){
        suma+=t[i];}
    int suma2=0;
    for(int i=0;i<5;i++){
        suma2+=t2[i];}
    if (suma>suma2){
    cout<<"Pierwsza jest wieksza";}
    else {
    cout<<"Druga jest wieksza";}


	return 0;
}

