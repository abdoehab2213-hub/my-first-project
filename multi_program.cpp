#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
void menuofprograms() {
	cout << "Choice Number Of Program Who Do You Want: "<<endl;
	cout << "1.Calculate Your GPA: "<<endl;
}
double calcgpa(double arr[], int numofarr) {
	int total_degree=numofarr*100;
	double degree = 0;
	for (int i = 0; i < numofarr; i++) {
		degree += arr[i];
	}
	return (degree / total_degree) * 4;
}
int main() {
	menuofprograms();
	int numberofprogram; cin >> numberofprogram;
	switch (numberofprogram) {
	case 1:
		cout << "Enter Number Of Material ";
		int numofarr; cin >> numofarr;
		cout << "Enter Your Degree ";
		double* arr = new double[numofarr];
		for (int i = 0; i < numofarr; i++)cin >> arr[i];
		double gpa = calcgpa(arr, numofarr);
		cout << "Your GPA is: " << gpa << endl;
	}

	return 0;
}