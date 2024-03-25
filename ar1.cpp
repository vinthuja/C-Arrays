#include <iostream>
using namespace std;
int main(){
    string cars[4] = {"volvo", "BMW", "ford", "mazda"};
    int num[4]={10,20,30,40};
    cout<<num[0]<<endl;
    cars[0]="opel";
    
    for(int i=0; i<4; i++){
        cout<<cars[i]<<"\t";
    }

   
    
}