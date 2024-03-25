#include<iostream>
using namespace std;
int main(){
    int num[5]={10,20,30,40,50};
    cout<<sizeof(num)<<endl;
   cout<< sizeof(int)<<endl;
   //cout<<sizeof(num)/sizeof(int)<<end l;
    cout<<sizeof(num)/sizeof(int)<<endl; //20/4


    char x[]={'r','t'};
    cout<<sizeof(x)<<endl;
    int size= sizeof(x)/sizeof(char);
    cout<<size;




    string z[]={"vinthu","abi"};    // 20  /4
return 0;}