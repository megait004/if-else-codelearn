#include<iostream>
using namespace std;
int main(){
	int point;
	cin >> point;
	if(point>=0&&point<=10){
		cout << " The score is valid";
	}
	else
		cout << " The score is not valid";
		return 0;
}