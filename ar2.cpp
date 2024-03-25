#include<iostream>
using namespace std;
int main(){
    string cars[5]={"volvo","bmw","ford","mazda","tesla"};
    for(int i=1; i<5;i++){
        cout<<i<<"="<<cars[i]<<"\n";
    }
    
    //foreach loop
    int num[5]={10,20,30,40,50};
    for(int i :num){
        cout<<i<<"\n";
    }
    
return 0;}