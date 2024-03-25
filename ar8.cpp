#include <iostream>
using namespace std;
int main(){

    string word;
    int num=0 ;
    int i=0 ;

    cout << "enter the word : " << endl;
    cin >> word;
    int length =word.length();
    int j=length-1;
    int reverse[length];
    
    
    for(int i=0; i<length; i++){
        cout<<word[i]<<endl;
        
    }
        
        while (i < length && j >= 0)
        {
        reverse[j] = word[i];
        i++;
        j--;
    }
    //for(int y=0; y<length; y++){
     //   cout<<reverse[y];
    
    
    for(int z=0; z<length; z++){
        if(reverse[z] != word[z])
            num=1;
            break;
    }
    if(num==1){
        cout<<"not a palindrome";
    }
    else{
        cout<<"this ia a palindrome";
    }
    return 0;
    }