// factorial of a number "n"

#include <iostream>

int main(){

    int i, n, fact;

    std::cout << "please enter a value for 'n' : ";
    std::cin >> n;

    fact = 1;

    for (i=1; i<=n; i++){

        fact *= i;

    }
        std::cout << "The factorial for " << n << " is " << fact << "\n";
        return 0;
}
