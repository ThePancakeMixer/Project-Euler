#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int countChain(double n){ //returns # of numbers in sequence w/ starting # n
    int numbers=1; //holds # of digits: 1 for first digit

    while(n>1){ //until end of sequence is reached
        if(fmod(n,2) == 0){ //there is a better way to do this
            n/=2;  //do even stuff
            numbers++;
        }
        else{ //do odd stuff
            n = 3*n + 1;
            numbers++;
        }
    }//update digits until it stops

    return numbers; //return numbers in sequecne
}

int largestChain() {
    int temp; //var to hold #s in sequence that is being calculated
    int final = 0; //largest digits the program has found so far
    int rValue = 0; //holds the number with largest sequence to return
    int i; //var to test every number below 1000000
    for(i=2; i<1000000; i++){
        temp = countChain(i); //save # of numbers in sequence i produced
        if(temp>final){ //if its the highest so far
            final = temp; //save the #s produced for next check
            rValue = i; //save the i that produced this
        }
    }
   return rValue;//return the largest # sequence produced by a starting number under 1,000,000
}

int main() {
    cout<<largestChain(); //returns the number that produces the longest collatz sequence under that is under 1million
    return 1;
}
