 #include <stdio.h>
 
 int main(){
	
	FILE * account;
	
	int i;
	int accountBalance;
	char accountNo[20];
	char customerName[20], NICNo[20];
	int currentAccNo = 0;
	
	account = fopen("account.txt", "w");
	
	if(account == NULL){
 		printf("The file does not exist!\n");
 		return -1;
	}
	
	for(i=0; i<4; i++){
		printf("Account No: ");
		scanf("%s", accountNo);
		
		printf("NIC No: ");
		scanf("%s", NICNo);
		
		printf("Customer Name: ");
		scanf("%s", customerName);
		
		printf("Account Balance: ");
		scanf("%d", &accountBalance);
		
		fprintf(account, "%s\t%s\t%s\t%d\n" , accountNo, NICNo, customerName, accountBalance);	

		printf("\n");
		
	}
	
	fclose(account);
	
	printf("Enter the preferred account number : ");
	scanf("%d", &currentAccNo);
	
	account = fopen("account.txt", "r");
	
	while(fscanf(account, "%s\t%s\t%s\t%d\n" , accountNo, NICNo, customerName, &accountBalance) == 4){

		if(currentAccNo == accountBalance){
			printf("Customer Name: %s\n", customerName);
			printf("Account balance : %.2f\n", accountBalance);
			currentAccNo = accountBalance;
		}
	}
	
	fclose(account);
	
	FILE * transaction;
	
	transaction = fopen("transaction.txt","r");
	
	char transactionType;
	int  transactionAmount;
	
	if(transaction == NULL){
 		printf("The file does not exist!\n");
 		return -1;
	}
	
	fscanf(transaction, "%c %d", &transactionType, &transactionAmount);
	
	if (transactionType == 'D'){
		currentAccNo += transactionAmount;
	}
	 else if(transactionType == 'W')
    {
      if(currentAccNo >= transactionAmount)
      {
        currentAccNo = currentAccNo - transactionAmount;
      }
      else
      {
        printf("Account balance is insufficient for withdrawal.\n");
      }
    }
	
	fclose(transaction);
	
	printf("Updated balance is : %d\n",currentAccNo );
	

	return 0;	

 }