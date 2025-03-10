#include <iostream>
#include <iomanip>
#include <random>

using namespace std;


void generateArray(int arr[], int size, int min_value, int max_value) {
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(min_value, max_value);

    for (int i = 0; i < size; i++) {
        arr[i] = distribution(generator);
    }
}


void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}


void countAndSumElements(const int arr[], int size, int& count, int& sum) {
    count = 0;
    sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && i % 5 != 0) {
            count++;
            sum += arr[i];
        }
    }
}


void replaceSpecificElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && i % 5 != 0) {
            arr[i] = 0;
        }
    }
}


int main() {
    const int SIZE = 20;
    const int MIN_VALUE = -20;
    const int MAX_VALUE = 50;

    int array[SIZE];
    int count, sum;

    generateArray(array, SIZE, MIN_VALUE, MAX_VALUE);
    printArray(array, SIZE);
    countAndSumElements(array, SIZE, count, sum);
    cout << "Count of element = " << count << endl;
    cout << "S =" << sum << endl;
    replaceSpecificElements(array, SIZE);
    printArray(array, SIZE);

    return 0;
}