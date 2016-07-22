#include <iostream>
#include <cmath>

using namespace std;


int countFactors(int input){ //counts factors in input
    int factors = 1; //always includes itself
    if(input==1)
        return 1;
    for(int i = 1; i<=input/2;i++){//count up all factors up to the square root
        if(input%i == 0)
            factors++;
    }
    return factors;
}

int nDivisibleTriangle(int n){ //returns triangle number divisible by n-factors
    int j = 1; //first number
    int z = 2; //number to add to generate next triangle number
    while(countFactors(j)<n){
        j = j+z;
        z++;
        cout<<j<<endl;
    }
    return j;
}

int main() {
    cout << nDivisibleTriangle(500);
    return 0;
}

