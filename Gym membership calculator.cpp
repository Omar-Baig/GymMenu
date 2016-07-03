//Programmed By: Omar Baig
#include<iostream>
#include<iomanip>
using namespace std;
//All the functions used in the program
void display();
void information(int& r,int& p,int& s,int& m,char& c);
void calculation(int r, int p, int s, int m, char c);

int main()
{	//Main function only calls the other functions.
	cout << fixed << showpoint;
	cout << setprecision(2); //2 decimal places
	int r, p, s, m;
	char c;
	display(); //Call menu
	information(r, p, s, m, c); //Call inputs
	calculation(r, p, s, m,c); //Call calculation and output
}

void display()
{
	cout << "Welcome to Stay Healty and Fit center." << endl
		<< "This program determines the cost of a new membership." << endl
		<< "If you are a senior citizen, then the discount is 30% of regular" << endl
		<< "   membership price." << endl
		<< "If you buy membership for twelve months and pay today, the discount is 15%." << endl
		<< "If you buy and pay for 6 or more personal training session today, the discount" << endl
		<< "   on each session is 20%." << endl;
} //Function to show the menu to the user
void information(int& r,int& p,int& s,int& m,char& c)
{
	cout << "Enter the cost of a regular membership per month: ";
	cin >> r;
	cout << endl;
	cout << "Enter the cost of one personal training session: ";
	cin >> p;
	cout << endl;
	cout << "Are you a senior citizen (Y,y,N,n): ";
	cin >> c;
	cout << endl;
	cout << "Enter the number of personal training sessions bought: ";
	cin >> s;
	cout << endl;
	cout << "Enter the number of month(s) you are paying for: ";
	cin >> m;
} //Function to take user's inputs
void calculation(int r, int p, int s, int m,char c)
{
	double t;

	if (m > 12|| c == 'y' || c == 'Y'){
		t = ((r*m)*.595 + (p*s));
	}
	if (c == 'y' || c == 'Y'){
		t = ((r*m)*(.70) + (p*s));
	}
	if (m > 12){
		t = ((r*m)*(.85) + (p*s));
	}
	if (s >= 6|| c == 'y' || c == 'Y' || m > 12) {
		t = ((r*m)*.595 + (p*s)*.80);
	}

	
	cout << "The membership cost = $" << t << endl;
} //Formulas for the different ways to obtain memberships