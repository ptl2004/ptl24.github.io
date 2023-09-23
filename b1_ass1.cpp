#include <iostream>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	int l=str.length();
	for (int i=l-1; i>=0; i--){
		cout << str[i];
		}
	return 0;
	}
