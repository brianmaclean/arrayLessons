#include <iostream>
using namespace std;

void showStatic();

int main(){
	for ( int count = 0; count < 5; count++ ){
		showStatic();
	}
	return 0;
}
void showStatic(){
	static int numCalls = 0;

	cout << "This function has been called " << ++numCalls << " times. " << endl;
}