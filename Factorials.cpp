#include <iostream>
using namespace std;

int main() {
    cout<<"Number\tFactorial"<<endl;
    for(int n = 1; n<=20;n++){
        long long factorial = 1.0;
    	for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << n << "\t" << factorial<<endl;    
    }
    return 0;
}
