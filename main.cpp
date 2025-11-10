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
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {
  
  cout << "Welcome to my Coffee/Tea Vending Machine!" << endl;

  bool again = true;
  double total_USD = 0.0;
  double balance_USD = 0.0;
  char c_t_or_q = ' ';
  int coin = 0;
  int amount = 0;

while (again) {
    do {
    cout << "Enter coins - 5, 10, or 25 only: ";
    cin >> coin;
while (coin != 5 && coin != 10 && coin != 25 && coin != 0) {
    cout << endl << "Invalid!" << endl;
    cout << "Enter coins - 5, 10, or 25 only: ";
    cin >> coin;
}
if (coin == 5 || coin == 10 || coin == 25) {
  balance_USD += coin;
}
if (coin == 0) {
    again = false;
}

   } while (coin != 0);
  

    balance_USD = balance_USD / 100;
    cout << "\nYour balance is: $" << fixed << setprecision(2) << balance_USD << endl << endl;

  cout << "Please pick an option: ($0.25 each):" << endl;
  cout << "C/c: Coffee" << endl;
  cout << "T/t: Tea" << endl;
  cout << "Q/q: Quit" << endl;
    cin >> c_t_or_q;
c_t_or_q = tolower(c_t_or_q);

while (c_t_or_q != 'c' && c_t_or_q != 't' && c_t_or_q != 'q') {
  cout << "Invalid Option! Please choose a valid option." << endl;
  cout << ">>";
  cin >> c_t_or_q;
  c_t_or_q = tolower(c_t_or_q);
}


if (c_t_or_q == 'q') {
  cout << "Your total is: $0.00" << endl;
  cout << "Your balance is: $" << balance_USD << endl << endl;
  cout << "Thank your for using my Vending Machine Program!" << endl;
  exit(1);
}
 else if (c_t_or_q == 'c' || c_t_or_q == 't') {
  cout << "How many would you like? ";
  cin >> amount;
  }
  
    total_USD = amount * 0.25;


  if (total_USD > balance_USD) {
    cout << "Not enough change! Please add more coins." << endl;
    again = true;
  }
}

  balance_USD -= total_USD;
  cout << fixed << setprecision(2);
  cout << "\nYour total is: $" << total_USD << endl;
  cout << "Your balance is: $" << balance_USD << endl;
  cout << "\nThank your for using my Vending Machine Program!" << endl;
  again = false;


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

Welcome to my Coffee/Tea Vending Machine!

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 10
Enter coins - 5, 10, or 25 only: 10
Enter coins - 5, 10, or 25 only: 0

Your balance is $0.80

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> k
Invalid Option! Please choose a valid option!
>> 9
Invalid Option! Please choose a valid option!
>> c
How many would you like?
>> f
Invalid Option!
How many would you like?
>> 2

Your total: $0.50
Your balance: $0.30
Thank you for using my Vending Machine Program!



Welcome to my Coffee/Tea Vending Machine!

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0

Your balance is $0.30

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> c

How many would you like?
>> 2

Your total is $0.50
Your balance is $0.30
Not enough change!! Please add more coins.

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0

Your balance: $0.60

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> T

How many would you like?
>> 1

Your total is $0.25
Your balance is $0.35

Thank you for using my Vending Machine Program!




Welcome to my Coffee/Tea Vending Machine!

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0
Your balance is $0.30

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> q

Your total is $0
Your balance is $0.30

Thank you for using my Vending Machine Program!
*/