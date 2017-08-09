#include <iostream>
#include <vector>

using namespace std;
//Changed online in GitHub server AGAIN!!
//Added this line! and changed on the GitHub
int main(){
	cout << "Hi" << endl;
	
	vector<int> v (3,5);
	
	for (auto a=v.begin();a != v.end();a++)
		cout << *a << endl;
	
	return 0;
}
