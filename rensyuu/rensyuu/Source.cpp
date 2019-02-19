#include <iostream>
#include <string>
#include<algorithm>
using namespace std;


int main(){
	string str;
	string com;
	string k;
	int q, a, b, p = 0;
	cin >> str >> q;

	for (int i = 0; i < q; i++){
		cin >> com;
		if (com == "print"){
			cin >> a >> b;
			cout << str.substr(a, b-a+1) << endl;
		}
		else if (com == "reverse"){
			cin >> a >> b;
			k = str.substr(a,b-a+1);
			reverse(k.begin(), k.end());
			str = str.substr(0,a)+k+str.substr(b+1,str.size()-a-1);
		}
		else if (com == "replace"){
			cin >> a >>  b;
			cin >> k;
			str = str.substr(0, a) + k + str.substr(b+1, str.size() - a - 1);
		}
	}
}