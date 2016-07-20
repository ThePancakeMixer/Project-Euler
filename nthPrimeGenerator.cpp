#include <iostream>
#include <math.h>
using namespace std;


bool isPrime(int input){
    if(input==1){ //base case
        return false;
    }
    if(input==2) { //base case
        return true;
    }
    if(input%2==0) //no evens are prime
        return false;
    for(int i = 3; i<=sqrt(input); i+=2){ //check all odds to see if they are factor of input
        if(input%i==0) { //if they are return false
            return false;
        }
    }
    return true;
}

int primeNth(int input){ //generates the  input'th prime
    int mPrime = 0;//variable to guess prime
    int i=0;//store number of primes generated
    while(i<input){
        mPrime++;
        if(isPrime(mPrime)) { //check if guess is a prime
            i++;//update number of primes of generated
        }
    }
    return mPrime; //return latest prime generated
}

int main() {
    cout << primeNth(10001); //output 10001th primne #
}
