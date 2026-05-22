# Banking Management System (C++)

A simple console-based Banking Management System developed in C++ that allows users to perform basic banking operations such as checking balance, depositing money, and withdrawing funds.

## Features

- Check current account balance
- Deposit money into account
- Withdraw money from account
- Insufficient balance validation
- Interactive menu-driven interface
- Function-based modular programming

## Technologies Used

- C++
- Standard Input/Output Library (`iostream`)

## Project Structure

```bash
├── main.cpp
└── README.md
```

## How It Works

The program starts with an initial account balance of:

```cpp
1000
```

Users can choose from the following options:

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit Program

The system validates withdrawals to prevent overdrawing from the account.

## Functions Used

### `checkBalance(float balance)`
Returns the current account balance.

### `deposit(float balance, float amount)`
Adds the entered amount to the existing balance.

### `withdraw(float balance, float amount)`
Subtracts the entered amount from the balance.

## Sample Output

```bash
1. Check Balance
2. Deposit
3. Withdraw
4. Exit

Enter your choice: 1

Total Balance: 1000
```

## Concepts Practiced

- Functions in C++
- Conditional statements
- Loops (`do-while`)
- User input handling
- Basic banking logic
- Modular programming

## Future Improvements

- Add PIN authentication
- Store user data using files
- Transaction history
- Multiple account support
- Object-Oriented Programming (OOP) version
- GUI implementation

## Learning Purpose

This project was created as a beginner-friendly practice project to strengthen core C++ programming concepts and problem-solving skills.

## Author

Developed by Salwa
