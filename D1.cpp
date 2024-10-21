#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    cout << "The maximum number is: " << max << endl;
    
    return 0;
}
