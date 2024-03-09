#include<iostream>
using namespace std;
int main()
{
    float sum,perc;
    int a=10;
    int b=20;
    int c=30;
    int d=40;
    int e=50;
    sum=a+b+c+d+e;
    perc = (sum/500)*100;
    cout<<"\nPercentage Marks = "<<perc<<"%";
    cout<<endl;
    return 0;
}