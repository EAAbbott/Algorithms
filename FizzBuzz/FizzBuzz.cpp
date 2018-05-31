#include <iostream>
using namespace std;

int main(){
    int nIters;
    cout << "Enter # iterations: ";
    cin >> nIters;
    cout << endl;

    for (int i = 1; i <= nIters; ++i){

        printf("%3d : \t", i);
        if (i%15 == 0){
            cout << "FizzBuzz";
        }
        else if (i%3 == 0){
            cout << "Fizz";
        }
        else if (i%5 == 0){
            cout << "Buzz";
        }
        else{
            cout << i;
        }
        cout << "\n";
    }
    cout << endl;
    return 0;
}
