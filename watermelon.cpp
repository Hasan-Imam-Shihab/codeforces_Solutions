#include <iostream>
using namespace std;
int main(){
    //declare variable 
    int w;
    //take int input
    cin >> w;
    //compare if the number is between 1 to 100
    if(w>=0 &&w<=100){
        //check if it is devided into even except 2
        if(w%2==0 && w!=2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}