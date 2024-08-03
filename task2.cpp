//////banking system
////#include<iostream>
////using namespace std;
////class customer {
////private:
////	int customerID;
////	string name;
////	int* ListOfAccounts;
////	int Count;
////public:
////	customer() {
////		customerID = 0;
////		name = "";
////		ListOfAccounts = nullptr;
////		Count = 0;
////
////	}
////	void addCustomer() {
////		ListOfAccounts = new int[10];
////		if (Count < 10) {
////			ListOfAccounts[Count++] = customerID;
////		}
////	}
////	void updateCustomerInfo() {
////
////	}
////	void viewAccounts() {
////		for (int i = 0; i < Count; ++i) {
////			std::cout << "Account ID: " << ListOfAccounts[i] << endl;
////		}
////	}
////	~customer() {
////
////	}
////};
////class Transactions {
////private:
////	int transactionID;
////	double amount;
////	string transactionType;
////public:
////	Transactions(int id, double amount, const std::string& type): transactionID(id), amount(amount), transactionType(type) {}
////
////	void viewTransactionDetails() const {
////		std::cout << "Transaction ID: " << transactionID << std::endl;
////		std::cout << "Amount: " << amount << std::endl;
////		std::cout << "Type: " << transactionType << std::endl;
////	}
////
////	int getTransactionID() const { return transactionID; }
////	double getAmount() const { return amount; }
////	string getTransactionType() const { return transactionType; }
////};
////class accounts {
////private:
////	int accountID;
////	string accountType;
////	int balance;
////	int* TransactionID;
////	int TransCount;
////public:
////	accounts() {
////		int accountID;
////		string accountType;
////		int balance;
////		int* TransactionID;
////		int TransCount;
////	}
////	void addTransaction(int transactionID) {
////		if (TransCount < 50) {
////			TransactionID[TransCount++] = transactionID;
////		}
////	}
////	void deposit(double amount) {
////		balance += amount;
////		// Add transaction ID to transactionIDs
////	}
////
////	bool withdraw(double amount) {
////		if (amount > balance) return false;
////		balance -= amount;
////		// Add transaction ID to transactionIDs
////		return true;
////	}
////
////	bool transfer(accounts& toAccount, double amount) {
////		if (withdraw(amount)) {
////			toAccount.deposit(amount);
////			// Add transaction ID to transactionIDs
////			return true;
////		}
////		return false;
////	}
////
////	~accounts() {
////
////	}
////};
////
////class bankingServices {
////public:
////	bool performWithdrawal(accounts& account, double amount){ return account.withdraw(amount); }
////	bool performDeposit(accounts& account, double amount){
////		account.deposit(amount);
////		return true;
////	}
////	bool performTransfer(accounts& fromAccount, accounts& toAccount, double amount){ return fromAccount.transfer(toAccount, amount); }
////};
////int main(){
////
////
////
////
////
////
////	return 0;
////}
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Transactions {
//private:
//    int transactionID;
//    double amount;
//    string transactionType;
//
//public:
//    Transactions(int id, double amount, const string& type)
//        : transactionID(id), amount(amount), transactionType(type) {}
//
//    void viewTransactionDetails()  {
//       cout << "Transaction ID: " << transactionID << endl;
//       cout << "Amount: " << amount << endl;
//       cout << "Type: " << transactionType << endl;
//    }
//
//   
//};
//
//class Customer {
//private:
//    int customerID;
//    string name;
//    int* ListOfAccounts;
//    int Count;
//
//public:
//    //constructor
//    Customer() {
//        customerID = 0;
//        name = "";
//        ListOfAccounts = new int[10]; // Allocate memory for the array
//        Count = 0;
//    }
//   //intiliazing data
//    void addCustomer(int id, const string& newName) {
//        customerID = id; 
//        name = newName;  
//    }
//    //adding a customer to bank
//    void addAccount(int accountID) {
//        if (Count < 10) {
//            ListOfAccounts[Count++] = accountID;
//        }
//    }
//    //view account
//    void viewAccounts()  {
//        for (int i = 0; i < Count; ++i) {
//            std::cout << "Account ID: " << ListOfAccounts[i] << endl;
//        }
//    }
//
//    ~Customer() {
//        delete[] ListOfAccounts; // Release allocated memory
//    }
//};
//
//class Accounts {
//private:
//    int accountID;
//    string accountType;
//    double balance;
//    Transactions* transactions[10]; // Array of pointers to Transactions
//    int TransCount;
//
//public:
//    Accounts(int id, const string& type) : accountID(id), accountType(type), balance(0.0), TransCount(0) 
//    {}
//
//    void addTransaction(int id, double amount, const string& type) {
//        if (TransCount < 10) {
//            transactions[TransCount++] = new Transactions(id, amount, type);
//        }
//    }
//
//    void deposit(double amount) {
//        balance += amount;
//        addTransaction(TransCount + 1, amount, "Deposit");
//    }
//
//    bool withdraw(double amount) {
//        if (amount > balance)
//            return false;
//        balance -= amount;
//        addTransaction(TransCount + 1, amount, "Withdrawal");
//        return true;
//    }
//
//    bool transfer(Accounts& toAccount, double amount) {
//        if (withdraw(amount)) {
//            toAccount.deposit(amount);
//            addTransaction(TransCount + 1, amount, "Transfer Out");
//            
//            return true;
//        }
//        return false;
//    }
//
//    double viewBalance() 
//    { return balance; }
//
//    void viewRecentTransactions() const {
//        for (int i = 0; i < TransCount; ++i) {
//            transactions[i]->viewTransactionDetails();
//        }
//    }
//
//    void viewAccountDetails() const {
//        std::cout << "Account ID: " << accountID << endl;
//        std::cout << "Account Type: " << accountType <<endl;
//        std::cout << "Current Balance: " << balance << endl;
//        viewRecentTransactions();
//    }
//
//    ~Accounts() {
//        for (int i = 0; i < TransCount; ++i) {
//            delete transactions[i]; 
//        }
//    }
//};
//
//class BankingServices {
//public:
//    bool performWithdrawal(Accounts& account, double amount) {
//        return account.withdraw(amount);
//    }
//
//    bool performDeposit(Accounts& account, double amount) {
//        account.deposit(amount);
//        return true;
//    }
//
//    bool performTransfer(Accounts& fromAccount, Accounts& toAccount, double amount) {
//        return fromAccount.transfer(toAccount, amount);
//    }
//};
//
//int main() {
//    // Create a customer
//    Customer customer1;
//    customer1.addCustomer(1, "John Doe");
//
//    // Create accounts
//    Accounts account1(101, "Savings");
//    Accounts account2(102, "Checking");
//
//    customer1.addAccount(101);
//    customer1.addAccount(102);
//
//    // Perform some transactions
//    BankingServices bankService;
//    bankService.performDeposit(account1, 500.0);
//    bankService.performWithdrawal(account1, 200.0);
//    bankService.performTransfer(account1, account2, 100.0);
//
//    // View account details
//    customer1.viewAccounts();
//
//    // View transactions and balance for account1
//    cout << "Details for account 1:" << endl;
//    account1.viewAccountDetails();
//
//    // View transactions and balance for account2
//    cout << "Details for account 2:" << endl;
//    account2.viewAccountDetails();
//
//    return 0;
//}
