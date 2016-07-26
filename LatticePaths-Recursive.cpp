#include <iostream>

long long int paths = 0; //global variable to hold

using namespace std;

void calculatePaths(int row, int col) { //increments paths every time a path is found
    if (row == 20) { //bottom-edge->only 1 path to end
        paths=paths+1; //increment paths
    }
    else if (col == 20) {  //right-most edge->only 1 path to end
        paths=paths+1; //increment paths
    }
    else { //go down then right recursively until an edge is hit
        calculatePaths(row + 1, col);
        calculatePaths(row, col + 1);
    }
    return;
}

int main(){ //returns # of lattice paths in 20x20 grid
    calculatePaths(0,0);
    cout<<paths;
}
