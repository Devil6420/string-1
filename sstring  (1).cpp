#include<iostream>  
using namespace std;
int main(){
    char str [10]="site&tc";
    cout<<(str)<<endl;
    char str2[20] ;
    cout<<("Enter your name")<<endl;
    cin.get(str2,20);
    cout<<str2;
    int i;
    for(int i=0;str2[i];i++);
    {
    cout<<i<<endl;
    }


    
}