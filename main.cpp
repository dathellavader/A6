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
// (Optional) Additional tests count: 4  


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {
  
  cout << "Welcome to my Coffee/Tea Vending Machine!" << endl;

  bool again = true;
  double total_USD = 0.0;
  double balance_USD = 0.0; // balance in cents
  char c_t_or_q = ' ';
  int coin = 0;
  int amount = 0;

  while (again) {
    // Coin input
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

    cout << "\nYour balance is: $" << fixed << setprecision(2) << (balance_USD / 100) << endl << endl;

    
    cout << "Please pick an option: ($0.25 each):" << endl;
    cout << "C/c: Coffee" << endl;
    cout << "T/t: Tea" << endl;
    cout << "Q/q: Quit" << endl;
    cin >> c_t_or_q;
    c_t_or_q = tolower(c_t_or_q);

    while (c_t_or_q != 'c' && c_t_or_q != 't' && c_t_or_q != 'q') {
        cout << "Invalid Option! Please choose a valid option." << endl;
        cout << ">> ";
        cin >> c_t_or_q;
        c_t_or_q = tolower(c_t_or_q);
    }

    if (c_t_or_q == 'q') {
        again = false;
    }
    else if (c_t_or_q == 'c' || c_t_or_q == 't') {
        amount = 0;
        while (amount <= 0) {
            cout << "How many would you like? ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Invalid input! Amount must be positive." << endl;
            }
        }
    }

    total_USD = amount * 0.25;

    
    if (total_USD > balance_USD / 100) {
        cout << "Your total is: $" << total_USD << endl;
        cout << "Your balance is: $" << fixed << setprecision(2) << (balance_USD / 100) << endl;
        cout << "Not enough change! Please add more coins." << endl;
        again = true;
    }
  }

  balance_USD = (balance_USD / 100) - total_USD;
  cout << fixed << setprecision(2);
  cout << "\nYour total is: $" << total_USD << endl;
  cout << "Your balance is: $" << balance_USD << endl;
  cout << "\nThank you for using my Vending Machine Program!" << endl;

  return 0;
}




// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Coffee/Tea Vending Machine

Program Description:

Design:
A. INPUT
int coin
char c_t_or_q
int amount

B. OUTPUT
double balance_USD
double total_USD

C. CALCULATIONS
total_USD = amount * 0.25
balance_USD = (balance_USD / 100) - total_USD


D. LOGIC and ALGORITHMS
MESSAGE "Welcome to my Coffee/Tea Vending Machine!"

SET again = true

WHILE (again) {
    
    DO {
        PROMPT "Enter coins - 5, 10, or 25 only: "
        INPUT coin
        while (coin != 5 AND coin != 10 AND coin != 25 AND coin != 0) {
            DISPLAY "Invalid!"
            PROMPT "Enter coins - 5, 10, or 25 only: "
            INPUT coin
        }
        IF (coin == 5 OR coin == 10 OR coin == 25) {
            balance_USD = balance_USD + coin
        }
        IF (coin == 0) {
            again = false
        }
    } while (coin != 0)

    DISPLAY "Your balance is: $" << (balance_USD / 100)

    PROMPT "Please pick an option: ($0.25 each):"
    DISPLAY "C/c: Coffee"
    DISPLAY "T/t: Tea"
    DISPLAY "Q/q: Quit"
    INPUT c_t_or_q
    c_t_or_q = tolower(c_t_or_q)

    while (c_t_or_q != 'c' AND c_t_or_q != 't' AND c_t_or_q != 'q') {
        DISPLAY "Invalid Option! Please choose a valid option."
        INPUT c_t_or_q
        c_t_or_q = tolower(c_t_or_q)
    }

    IF (c_t_or_q == 'q') {
        again = false
    }
    ELSE IF (c_t_or_q == 'c' OR c_t_or_q == 't') {
        SET amount = 0
        while (amount <= 0) {
            PROMPT "How many would you like? "
            INPUT amount
            IF (amount <= 0) {
                DISPLAY "Invalid input! Amount must be positive."
            }
        }
    }

    // do total calculation

    IF (total_USD > (balance_USD / 100)) {
        DISPLAY "Your total is: $" << total_USD
        DISPLAY "Your balance is: $" << (balance_USD / 100)
        DISPLAY "Not enough change! Please add more coins."
        again = true
    }
}

// do balance calculation

DISPLAY "Your total is: $" << total_USD
DISPLAY "Your balance is: $" << balance_USD
MESSAGE "Thank you for using my Vending Machine Program!"



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