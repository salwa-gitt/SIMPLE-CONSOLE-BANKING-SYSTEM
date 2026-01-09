#include <iostream>
using namespace std;

float checkBalance(float);
float deposit(float, float);
float withdraw(float, float);


int main()
{
	float balance = 1000;
	int user_choice;
	
	do
	{
		cout << "\n1. Check Balance" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdraw" << endl;
		cout << "4. Exit\n" << endl;
	
		cout << "Enter your choice: ";
		cin >> user_choice;
		
		
		if (user_choice == 1)
		{
			cout << "\nTotal Balance: " << checkBalance(balance) << endl;
		}
		
		
		
					
		else if (user_choice == 2)
		{
			float amount;
			
			cout << "\nEnter the amount: ";
			cin >> amount;
			
			
			balance = deposit(balance, amount);
				
			cout << "\nThe amount has been updated... " << endl;
				
			cout << "\nUpdated Balance: " << balance << endl;
		}
		
		
		
			
		else if (user_choice == 3)
		{
			float amount;
			
			cout << "\nEnter the amount: ";
			cin >> amount;
			
		
			// check if the amount is enough to withdraw
			// if yes then widthdraw else raise error and ask again
				
			if (amount <= checkBalance(balance))
			{
				balance = withdraw(balance, amount);
					
				cout << "\nThe amount has been withdrawn..." << endl;
					
				cout << "\nUpdated Balance: " << balance << endl;
			}
			else
				cout << "\nInsufficient Balance! " << endl;
					
		}
		
		
		
		
		else if (user_choice == 4)
		{
			break;
		}
		
		
		
		
		else
			cout << "\nInvalid choice Please choose from 1 to 4! " << endl;
	}

	while (user_choice != 4);
	
	
	
	return 0;
}

float checkBalance(float balance)
{
	return balance;
}


float deposit(float balance, float amount)
{
	return balance + amount;
}


float withdraw(float balance, float amount)
{
	return balance - amount;
}
