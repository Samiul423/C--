#include<iostream>
using namespace std;
 void addition(int a, int b)
 {
    int sum=a+b;
    cout<< "sum = "<<sum<<endl;
 }
 int main()
 {
    addition(10,20);
    addition(20,20);
    addition(30,20);
    addition(10,40);
    addition(10,50);
 }