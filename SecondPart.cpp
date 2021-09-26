//
// Created by undefined on 26.09.2021.
//

#include "SecondPart.h"
#include <bits/stdc++.h>

using namespace std;

void SecondPart::cacheFriendly() {
    //cache friendly code it is when we everytime take data located close to our current location in memory.

    // Two examples

    // 1)
    // when we declare two dimensioned array, in memory it created something like, if array is sized as NxM, n continues memory's of size m,
    // this some continous memory is our row in array

    // X,Y located next to X,Y-1 and so on.
    // to achieve N,M from 1,1 we should travel for NxM distance, while to reach 1,2 we can just travel for 1 distance.

    int a[10][10];


    // Example of cache friendly code
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    //Example of cache unfriendly code
    for(int j = 0; j < 9; j++){
        for(int i = 0; i < 9; i++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    // Example Two

    /*


     // 2)
     // Creating one global variable is much more effective than creating temporal local variable

     //Friendly code
     int x;
     for(int i = 1; i <= 1000; i++){
        cin >> x;
     }

     //Unfriendly code
     for(int i = 1; i <= 1000; i++){
        int x;
        cin >> x;
     }

    // One more example when we may need extern C, is when we writing some code which can be used by both C and C++ languages.
    // If don't write extern C, C++ don't understand function.


     const keyword means constant. It is used when we don't need access to edit value of variable.
     For example when passing parameter to a function, If we pass variable by reference, we can simply edit value of parameter,
     if we want not to edit, we write const. And compiler shows us error if we try.

     */



}
