#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
	int n;
    int a[100];
    cin >> n;
    for (int i=0;i<n;i++){
    	cin >> a[i];
    	}
    sort (a,a+n);
    for (int i=0; i<n; i++){
    	cout << a[i] << " ";
        }
    return 0;
    }
