#include<stdio.h>
 
int main(){
 
  FILE *accountFile;
 
  accountFile = fopen("account.txt","w");
 
  if(accountFile ==NULL)
  {
    printf("Cannot open file.\n");
    return -1;
  }
 
  int accNo;
  char nicNo[10];
  char name[20];
  double accBalance;
  int i;
 
  for(i=1;i<=4;i++)
    {
      printf("Enter account no :");
      scanf("%d", &accNo);
      printf("Enter NIC no :");
      scanf("%s", nicNo);
      printf("Enter customer name :");
      scanf("%s", name);
      printf("Enter account balance :");
      scanf("%lf", &accBalance);
 
      fprintf(accountFile,"%d %s %s %.2lf\n", accNo, nicNo, name ,accBalance);
    }
 
  fclose(accountFile);
 
  int currentAccNo;  // Changed from accNo
  int found = 0;
  
  printf("Enter the preferred account number :");
  scanf("%d", &currentAccNo);  // Changed from accNo
  
  accountFile = fopen("account.txt","r");
  
  if(accountFile ==NULL){
    printf("Cannot open file.\n");
    return -1;
  }
 
  double currentBalance; // Initialize this variable
  while(fscanf(accountFile,"%d %s %s %lf", &accNo, nicNo, name, &accBalance)==4)
    {
      if(currentAccNo == accNo)
      {
        printf("Account holder: %s\n", name); // Added \n for clarity
        printf("Account balance of the account holder: %.2lf\n", accBalance); // Added \n for clarity
        currentBalance = accBalance; // Initialize currentBalance here
        found = 1;
      }
    }
  fclose(accountFile);
 
  if(!found)
  {
    printf("Account not found.\n");
    return -1;
  }
  
  FILE * transactionFile;
 
  transactionFile = fopen("transaction.txt","r");
 
  if(transactionFile ==NULL)
  {
    printf("Cannot open file.\n");
    return -1;
  }
 
  char transactionType;
  double transactionAmount;
 
  while(fscanf(transactionFile,"%c %lf", &transactionType, &transactionAmount)==2){
    if(transactionType =='D')
    {
      currentBalance = currentBalance + transactionAmount;
    }
    else if(transactionType =='W')
    {
      if(currentBalance >= transactionAmount)
      {
        currentBalance = currentBalance - transactionAmount;
      }
      else
      {
        printf("Account balance is insufficient for withdrawal.\n");
      }
    }
  }
 
  fclose(transactionFile);
  
  printf("Updated Account balance: %.2lf\n", currentBalance);
  return 0;
}
