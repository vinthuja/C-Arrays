#include<iostream>
using namespace std;
int main(){
    string letters[2][4]={{"A","B","C","D"},{"E","F","G","H"}};
 
    for(int y=0; y<2; y++){
        
        
        for(int x=0; x<4; x++){
            cout<<letters[y][x]<<"\t";
            
               //0  0
        }
      cout<<endl;
    }          
 cout<<letters[0][0]<<endl;        //A
    cout << letters[0][1] << endl;    //B
    cout << letters[0][2] << endl;        //C
    cout << letters[0][3] << endl;        //D
    cout << letters[1][0] << endl;        //E
    cout << letters[1][1] << endl;
    cout << letters[1][2] << endl;
    cout << letters[1][3] << endl;
   

return 0;}   