#include <iostream>

using namespace std;


bool isTriple(int a, int b, int c){ //returns true if a^2+b^2=c^2 
    a*=a;
    b*=b;
    c*=c;
    return (a + b == c);
}

int productOfTriplet (int input) { //finds product of pythagorean triplets whose sum equals input
    int i,j,k;
    int sum; //variable to store the sum
    for(i=1;i<input-2;i++){
        for(j=1;j<input-2;j++){
            for(k=1;k<input-2;k++){ //loop to find all combination of 3 digits 
                sum=i+j+k;
                if( sum == input){ //check if the sum of the 3 digits is equal to input
                    if(isTriple(i,j,k)){ //check if the 3 digits is a triple
                            return i*j*k; //if it is return the product
                        }
                }
            }
        }
    }
}

int main() {
    cout<<productOfTriplet(1000); //prints product of triple whose sum equals 1000 
}
