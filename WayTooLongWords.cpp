#include <iostream>
using namespace std;
int main(){
    //declare variables
    int n, length;
    string word, words, l;
    //input of number of elements
    cin >> n;
    for(int i=1; i<=n; i++){
         //insert words string
        cin>> word;
        //Find word length
        length=word.length();
        if(length>10){
            l=to_string(length-2);
            //creating word format
            words=word[0]+l+ word[length-1];
        }
        else{
            words=word;
        }
        cout <<words<< endl;

     
    }

    return 0;
}