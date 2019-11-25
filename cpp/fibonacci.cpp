/*
 * fibonacci.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a=0;
    int b=1;
    int n=0;
    cout<<"Który wyraz ciągu? ";
    cin>>n;
    if(n==0){
        a=0;}
        else
    for(int i = 0;i<=n-1;i++){
        a=a+b;
        b=a-b;
        }
        cout<<a;
	return 0;
}

