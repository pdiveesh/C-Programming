#include <stdio.h>
#define MAX_ACCOUNTS 20

void createAccount();
void viewBalance();
void depositAmount();

struct Account {
    int accountNum;
    char name[100];
    float balance;
    int aadharNum;
    char pan[20];
};

struct Account accounts[MAX_ACCOUNTS];
int accountCount = 0;  
 
int main()
{
  
    int choice;
    
    printf("Welcome to SDN Bank!!\n");
    
    
    //Main logic
    while(1){
        
    printf("How may I help you?\n");
    printf("1. Create Account\n 2. ViewBalance\n 3. Deposit Amount\n 4. Withdraw Amount\n 5. Exit\n");
    printf("\n Enter your choice\n");
    scanf("%d", &choice);
    
    switch(choice){
        
        case 1: createAccount();
                break;
        case 2: viewBalance();
                break;
        case 3: depositAmount();
                break;
        
        
    }
    
    }
}


void createAccount(){
    struct Account newacc;
    
    if (accountCount >= MAX_ACCOUNTS) {
        printf("Sorry, account limit reached.\n");
        return;
    }
    
    newacc.accountNum = accountCount+1;
    
    printf("Enter Account Holder Name:\t");
    scanf("%s", newacc.name);
    
    printf("Enter Initial Deposit Amount:\t");
    scanf("%f", &newacc.balance);
    
    printf("Enter Aadhar Card Number:\t");
    scanf("%d", &newacc.aadharNum);
    
    printf("Enter Pan Card Number:\t");
    scanf("%s", newacc.pan);
    
    accounts[accountCount] = newacc;
    accountCount++;
    
    
    printf("Account Creation is Successful!!! Your Account Number: %d\n", newacc.accountNum);
}

void viewBalance() {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    
    if (accountNumber <= 0 || accountNumber > accountCount) {
        printf("Account not found!\n");
        return;
    }

    printf("Account holder: %s\n", accounts[accountNumber-1].name);
    printf("Current balance: %.2f\n", accounts[accountNumber-1].balance);
}

void depositAmount(){
    int accountNumber;
    int depAmount;
    printf("Enter account number: ");
    scanf("%d",&accountNumber);
    
    if (accountNumber <= 0 || accountNumber > accountCount) {
        printf("Account not found!\n");
        return;
    }
    
    printf("Enter deposit Amount: ");
    scanf("%d",&depAmount);
    accounts[accountNumber-1].balance+=depAmount;
    printf("Your balance: %.2f\n",accounts[accountNumber-1].balance );
}
