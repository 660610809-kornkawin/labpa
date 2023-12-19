#include<iostream>
using namespace std;

int main(){
	int i = 0;
	char grade;
	int N,M;
	int count[5] = {};
	int A[N]={}, B[M]={};
	cout << "Please input grade of each student (A-F) or input 0 to exit.";
	do{
		cout << "Student [" <<i+1<< "]: ";
		cin >> grade;
		if(grade == 'A'){
			N += 1;
			A[N]=A[N]+1;
		}else if(grade == 'B') {
		B[M]=B[M]+1;
		}else{ 
			cout << "Wrong input. Please input again.";
		} 
	}while(grade != '0');
	cout << "In total ? students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
