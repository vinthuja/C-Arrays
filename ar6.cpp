#include<iostream>
using namespace std;
int main(){
    int number[]={1,3,4,6,1};
    int length=sizeof(number)/sizeof(int);   //5
    int reverse[length];  //5
    int flag=0;
    int j=length-1; //4
    int i=0;
    while(i<length &&j>=0){  //o<5 and  4>=0      //1<5 and 3>=0      //2<5 && 2>=0 //3<5 && 1>=0   //4<5  &&0>=0       5<5 && -1>=0wrong
        reverse[j]=number[i];     //{1}  //{6} //4     //3      //1
        i++;
        j--;
    }
    cout<<"original array elements:"<<endl;
    for(int i=0;i<length;i++){      //0<5    //1<5 //2<5   3<5         4<5
        cout<<number[i]<<" ";        //1      //3   //4   //6     //1
    }
    cout<<endl;
    cout<<"reverse array elements:"<<endl;
    for(int i=0;i<length;i++){          //0<5 1<5  2<5 3<5   4<5
        cout<<reverse[i]<<"  "<<endl;       //1 //3 //4   6 1
    }
    for(int k=0;k<length; k++){          //0<5 //1<5   //2<5 3<5     4<5
        if(number[k]!=reverse[k]){       //1!=1  //3!=6 4!=4  6!=3  1!=1
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"not a palindome"<<endl;
    }
    else 
    cout<<"this is a palindrome"<<endl;

return 0;
}