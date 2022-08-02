#include<bits/stdc++.h>
using namespace std;
string dopa = "amumu is best";
int main(){
cout << dopa << "\n";
if(dopa.find("amumu") != string::npos){
cout << "dopa속에 아무무있다!\n";
}
cout << dopa.substr(0, 3) << "\n";
reverse(dopa.begin(), dopa.end());
cout << dopa << "\n";
return 0;
}
/*
amumu is best
dopa속에 아무무있다!
amu
tseb si umuma

reverse : 원래의 문자열을 바꿔버립니다. begin과 end를 통해 전체를 바꿔도 되고 dopa.begin(),
dopa.begin() + 3 이런식으로 부분만 바꿔버릴 수도 있습니다.
- substr : 시작지점으로부터 몇개의 문자열을 뽑아냅니다.
- find : 어떠한 문자열이 들어있나 찾습니다. 만약 찾지 못한다면 문자열의 끝 위치인 string::npos를
반환합니다
*/