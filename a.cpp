#include <bits/stdc++.h>
using namespace std;

// split이 없기에 따로 만들어봤다

vector<string> split(string input, string delimeter) {
	
	vector<string> ret;
	long long pos = 0;
	string token= "";
	
	while((pos = input.find(delimeter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimeter.length());
	}
	
	ret.push_back(input);
	return ret;
}
int main(){
	string sentence = "뭐든 즐겁다면 ok입니다~";
	string divider = " ";
	vector<string> a = split(sentence, divider);
	for(string b : a)
		cout << b << "\n";
}