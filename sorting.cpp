#how to sort a multidimensional array base on any index you want

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 4; 
	vector<array<int, 4> s;
	for(int i=0;i<n;i++){
		int a, b, c;
		cin >> a >> b >> c;
		s.push_back({c, b, a});
	}
	sort(begin(s), end(s));
	for(auto i:s){
		cout << i[2] << " " << i[1] << " " << i[0] << endl;
	}
}
