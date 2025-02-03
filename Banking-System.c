#include <stdio.h>

void createAccount();


struct Account {
    int accountNum;
    char name[100];
    float balance;
    int aadharNum;
    char pan[20];
};

int accountCount =0;
 
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
        
    }
    
    }
}


void createAccount(){
    struct Account newacc;
    
    newacc.accountNum = accountCount+1;
    
    printf("Enter Account Holder Name:\t");
    scanf("%s", newacc.name);
    
    printf("Enter Initial Deposit Amount:\t");
    scanf("%f", &newacc.balance);
    
    printf("Enter Aadhar Card Number:\t");
    scanf("%d", &newacc.aadharNum);
    
    printf("Enter Pan Card Number:\t");
    scanf("%s", newacc.pan);
    
    printf("Account Creation is Successful!!! Your Account Number: %d\n", newacc.accountNum);
}
