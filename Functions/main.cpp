//
//  main.cpp
//  Functions
//
//  Created by Richard Cheesman on 02/04/2020.
//  Copyright © 2020 Richard Cheesman. All rights reserved.
//

#include <iostream>
using namespace std;

int addition (int a, int b){
    int r;
    r=a+b;
    return r;
}

int subtraction (int a, int b){
    int r;
    r=a-b;
    return r;
}

int main(int argc, const char * argv[]) {
    int z;
    // Add two integers together.
    z = addition(5,3);
    cout << "The addition result is " << z << "\n";
    
    // Subtract two integers together.
    int x;
    x = subtraction(7, 4);
    cout << "The subtraction result is " << x << "\n";
    
    return 0;
}
