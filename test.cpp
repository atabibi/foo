#include <iostream>
#include <vector>

using namespace std;

int main(){
	cout << "Hi" << endl;
	
	vector<int> v (3,5);
	
	for (auto a=v.begin();a != v.end();a++)
		cout << *a << endl;
	
	return 0;
}