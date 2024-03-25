#include<iostream>
using namespace std;
int main(){
    int array[3][3]={{3,5,4},{7,6,9},{2,1,8}};
    int row=3;
     int column=3;
    int y;
    for(int row=0; row<3; row++){
        y=(row % 2);
        if(1==y){
        cout<<"middle row: ";
        for(int j=0; j<3; j++){
            cout<<array[row][j]<<" ";
            
        }
        cout<<endl;
        y=(column%2);
        if(y==1){
            cout<<"middle colomn: ";
        for(int j=0; j<3; j++){
            cout<<array[row][j]<<" ";
            
        }
        }}
    }
}