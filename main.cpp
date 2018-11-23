#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int findLargest(int myArr[], int size);

int findSmallest(int myArr[], int size);

int findMiddle(int myArr[], int size);

int splitBuckets(int myArr[], int size);

int* makeSmallBucket(int myArr[], int size);

int main() {

	int size = 5;
	int myArr[] = { 1, 3, 7, 4, 5 };

	int * smallArr = makeSmallBucket(myArr, size);

	cout << smallArr[0] << " " << smallArr[1] << " " << smallArr[2] << endl;
	// 1 3 4
	
	return 0;
}

int findLargest(int myArr[], int size) {
	int largest = 0;
	for ( int i = 0; i < size; i++ ) {
		if ( myArr[i] > largest ) {
			largest = myArr[i];
		}
	}

	return largest;
}

int findSmallest(int myArr[], int size) {
	int smallest = myArr[0];
	for ( int i = 0; i < size; i++ ) {
		if ( myArr[i] < smallest ) {
			smallest = myArr[i];
		}
	}

	return smallest;
}

int findMiddle(int myArr[], int size) {
	int largest = findLargest(myArr, size);
	int smallest = findSmallest(myArr, size);

	int middle = largest - smallest;
	middle /= 2;
	middle += smallest;

	return middle;
}

int * makeSmallBucket(int myArr[], int size) {
	int middle = findMiddle(myArr, size);
	int newArr[size];
	int arrCounter = 0;

	for ( int i = 0; i < size; i++ ) {
		if ( myArr[i] <= middle ) {
			newArr[arrCounter] = myArr[i];
			arrCounter++;
		}
	}

	return newArr;
	
}