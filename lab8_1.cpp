#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	float loan , interest , canpay ;
	cout << "Enter initial loan: " ;
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> interest ;
	interest /= 100;
	cout << "Enter amount you can pay per year: ";
	cin >> canpay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	/*cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	*/

	int year=1 ;
	float total , payment;
	while(loan > 0){
		cout << setw(13) << left << year ;
		cout << setw(13) << left << loan ;
		cout << setw(13) << left << interest*loan;
		total = loan + (interest*loan);
		cout << setw(13) << left << total;
		if(total > canpay){
			payment = canpay;
		}else{
			payment = total;
		}
		cout << setw(13) << left << payment;
		loan = total - payment;
		cout << setw(13) << left << loan;
		cout << "\n";
		year++;
	}
	
	return 0;
}
