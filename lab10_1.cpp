#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	cout << "Enter initial loan: ";
	double loan; cin>>loan;
	cout << "Enter interest rate per year (%): ";
	double rate; cin>>rate;
	cout << "Enter amount you can pay per year: ";
	double pay; cin>>pay;

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
	int i=1;
	do{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;				//PrevBalance 
	cout << setw(13) << left << loan/100*rate;		//Interest     
	cout << setw(13) << left << loan*(1+rate/100);	//Total 

	if(loan*(1+rate/100)<pay) pay=loan*(1+rate/100) ; 
	cout << setw(13) << left << pay;				//Payment

	loan = loan*(1+rate/100)-pay;	
	cout << setw(13) << left << loan;				//NewBalance 
	i++;
	cout << "\n";	
	}while(loan!=0);
	return 0;
}
