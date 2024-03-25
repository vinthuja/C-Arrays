#include <iostream>
using namespace std;
int main(){
    int array[5][5]={{2,3,1,5,0},{7,1,5,3,1},{2,5,7,8,1},{0,1,5,0,1},{3,4,9,1,5}};
    int j = 0 , y=0;

        for (int i = 1; i < 5; i++){
            j=y;
           if(i>j){
            cout<<"\t";
             while (j < 5)
            {
               
                cout << "\t" << array[i][j];
                j++;
               
            }
            }
            
            y++;
            cout<<"\t"<< endl;
        }
        

        
            
        
    return 0;}
