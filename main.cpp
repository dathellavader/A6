// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: 6
// Date ✅: 11/9/25
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 6
// Participation ✅: 88%
// Challenge ✅: 92%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: yes
// B. OUTPUT ✅: yes
// C. CALCULATIONS ✅: yes
// D. LOGIC and ALGORITHMS ✅: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  
  cout << "Welcome to my Coffee/Tea Vending Machine!" << endl;

  bool again = true;
  float total_USD = 0.0;
  float balance_USD = 0.0;
  int coin = 0;

    while(again) {

    do {
    cout << "Enter coins - 5, 10, or 25 only: ";
    cin >> coin;
while (coin != 5 && coin != 10 && coin != 25 && coin != 0) {
    cout << endl << "Invalid!";
    break;
}
while(coin != 0) {
    again = true;
}
    // Your balance is $0.30

    // Please pick an option ($0.25 each):
    //     C/c: Coffee
    //     T/t: Tea
    //     Q/q: Quit
    // >> c


    // How many would you like?
    // >> 2

    // Your total is $0.50
    // Your balance is $0.30
    if()

    // Not enough change!! Please add more coins.
  }






// Enter coins - 5, 10, or 25 only: 5
// Enter coins - 5, 10, or 25 only: 25
// Enter coins - 5, 10, or 25 only: 0

// Your balance: $0.60

// Please pick an option ($0.25 each):
//     C/c: Coffee
//     T/t: Tea
//     Q/q: Quit
// >> T

// How many would you like?
// >> 1

// Your total is $0.25
// Your balance is $0.35

  cout << "Thank you for using my Vending Machine Program!" << endl;
}


  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/