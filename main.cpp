//
//  main.cpp
//  learningpointers
//
//  Created by Adam Abid on 1/28/22.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
  
    int x;
    
    cout << " how many ints are in your arrays "  << endl;
    
    
    
    cin >> x;
    
    int array[x];
    int y;
    
    for (int i = 0; i < x; i++){
        cin >> y ;
        array[i] = y;
    }
    for (int i = 0; i < x; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    
    
    
    
    
    
  return 0;
}
