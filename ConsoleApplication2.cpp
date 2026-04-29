#include <iostream>
using namespace std;

class account {
private:
	int id;
	double balance;
public:
	void setid(int id) { this->id = id; }   // moved to public
	void setbalance(double balance) {
		this->balance = balance;
	}
	void withdraw(double amount) {
		if (amount > balance) {
			cout << "insufficient balance" << endl;
		}
		else {
			balance -= amount;
		}
	}
	void display() const {
		cout << "id : " << id << endl;
		cout << "balance : " << balance << endl;
	}
};
int main()
{
	account acc{};
	acc.setid(1);
	acc.setbalance(1000);
	acc.display();
	acc.withdraw(500);
	acc.display();

	return 0;
}
