#include <bits/stdc++.h>
using namespace std;
  
string dopa = "life is limited";

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cout << dopa << "\n";
	
	
	cout << dopa.substr(0, 3) << "\n";
	// 부분 배열 출력하기
	
	//reverse
	reverse(dopa.begin(), dopa.end());
	cout << dopa << "\n";
	
	//add more string after output
	dopa += " dopa!";
	
	cout << dopa << "\n";
	
   return 0;

}

