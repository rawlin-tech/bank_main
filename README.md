# Simple C Banking App

## Description
This is a simple command-line banking application written in C. It allows a user to perform basic financial transactions, including checking the balance, making a deposit, and making a withdrawal. The application is built to demonstrate basic programming concepts, including functions, loops, and conditional statements.

## Features
*   **Check Balance:** Displays the user's current account balance.
*   **Deposit:** Allows the user to add funds to their account.
*   **Withdraw:** Enables the user to withdraw funds from their account, with a check for sufficient balance.
*   **Interactive Menu:** Provides a simple menu-based interface for easy navigation.

## How to Compile and Run
### Prerequisites
*   A C compiler (e.g., GCC)

### Compilation
1.  Navigate to the directory where the `banking_app.c` file is located.
2.  Use the following command to compile the source code:
    ```sh
    gcc banking_app.c -o banking_app
    ```

### Running the Application
1.  After successful compilation, run the executable with the following command:
    ```sh
    ./banking_app
    ```
2.  Follow the on-screen instructions to interact with the application.

## How It Works
The program uses a `switch` statement within a main loop to handle user input. Each case in the switch corresponds to a menu option, which calls a function to perform the specified action. For example:
*   `check_balance()` displays the current balance.
*   `deposit()` adds a user-specified amount to the balance.
*   `withdrawal()` subtracts a user-specified amount after verifying there are sufficient funds.

## Author

## License
This project is open-source and available under the [License Name] License. See the `LICENSE` file for details.
