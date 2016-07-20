#include <iostream>
#include <math.h>

using namespace std;



bool isPrime(__int64 input) { //lets you know if input is prime
    if(input==2 || input==1)
        return true;
    if(input%2==0){
        return false;
    }
    __int64 i;
    for(i=3;i<=sqrt(input);i++){ //check all factors up to the sqr root of input to see if evenly divisible
        if(input%i==0)
            return false;
    }
    return true;
}


__int64 sumOfPrimes(__int64 limit){ //returns summation of all primes that are below limit
    __int64 i;
    __int64 total = 0; //store sum of Primes in here
    for(i=2;i<limit;i++){ //iterate through every # 1-limit
        if(isPrime(i)) {
            total += i; //if i is prime add it to total
        }
    }
    return total; //return summation of all primes below limit
}

int main() {
    cout << sumOfPrimes(2000000);
}