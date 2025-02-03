# C-Programming
Mini project in C



---

# SDN Bank Account Management System

This project is a basic **Bank Account Management System** that allows users to perform various operations like creating an account, viewing account balance, depositing money, and withdrawing money. The application is implemented in **C** and supports a maximum of 20 bank accounts.

## Features

1. **Create Account**: Users can create a new account with personal details (Name, Aadhar Card, PAN Card) and an initial deposit amount.
2. **View Balance**: Users can view the current balance in their account by providing the account number.
3. **Deposit Amount**: Users can deposit money into their account.
4. **Withdraw Amount**: Users can withdraw money from their account if sufficient funds are available.
5. **Exit**: Exit the application.

## Structure

The program is designed to allow a maximum of 20 bank accounts. The account data for each user is stored in the `Account` structure, which includes the following fields:

- `accountNum`: Unique identifier for each account.
- `name`: Name of the account holder.
- `balance`: Current balance in the account.
- `aadharNum`: Aadhar card number of the account holder.
- `pan`: PAN card number of the account holder.

## Files

- **bank.c**: Contains the main logic and functions for the bank operations.
- **README.md**: This file with project information.

## Compilation and Execution

1. **Compilation**:
   - To compile the project, you can use `gcc` (GNU Compiler Collection) in your terminal:
     ```bash
     gcc -o bank bank.c
     ```
2. **Execution**:
   - After compiling, you can run the program by executing:
     ```bash
     ./bank
     ```

## Sample Interaction

### Example 1: Create Account
```bash
Enter Account Holder Name: John Doe
Enter Initial Deposit Amount: 5000
Enter Aadhar Card Number: 123456789012
Enter Pan Card Number: ABCDE1234F
Account Creation is Successful!!! Your Account Number: 1
```

### Example 2: View Balance
```bash
Enter account number: 1
Account holder: John Doe
Current balance: 5000.00
```

### Example 3: Deposit Amount
```bash
Enter account number: 1
Enter deposit Amount: 2000
Your balance: 7000.00
```

### Example 4: Withdraw Amount
```bash
Enter account number: 1
Enter withdraw Amount: 1000
Current Balance: 6000.00
```

## Limitations

- The application can only handle up to 20 accounts.
- Account balance cannot go below zero.
- The application does not support advanced features like transaction history, loan facilities, or multi-user access.

