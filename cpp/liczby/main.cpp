#include <iostream>

using namespace std;

int main()
{
    float a,b,c ;
    cout <<"podaj pierwsza liczbe: ";
    cin >> a;
    cout <<"podaj druga liczbe: ";
    cin >> b;
    cout <<"podaj trzecia liczbe: ";
    cin >> c;
    if (a>=b && a>=c){
        if (b>=c){
            cout<<a<<" "<<b<<" "<<c;}
        else{
            cout<<a<<" "<<c<<" "<<b;}
    }
    else if (b>=c && b>a){
        if (a>=c){
            cout << b<<" "<<a<<" "<<c;}
        else{
            cout << b <<" "<<c<<" "<<a;}
    }
    else if (c>b && c>a && a>=b){
        cout << c<<" "<<a<<" "<<b;}
    else{
        cout << c<<" "<<b<<" "<<a;}
    cout <<endl;
        if (a<=b && a<=c){
        if (b<=c){
            cout<<a<<" "<<b<<" "<<c;}
        else{
            cout<<a<<" "<<c<<" "<<b;}
    }
    else if (b<=c && b<a){
        if (a<=c){
            cout << b<<" "<<a<<" "<<c;}
        else{
            cout << b <<" "<<c<<" "<<a;}
    }
    else if (c<b && c<a && a<=b){
        cout << c<<" "<<a<<" "<<b;}
    else{
        cout << c<<" "<<b<<" "<<a;}


    return 0;
}
