#include <iostream>

using namespace std;


void print() {
    cout << "Hello MySirG" << endl; //Q1
    cout << "Hello << endl << MySirG" << endl; //Q2
}

//Q3
int add(int n1, int n2) {
    return  n1 + n2;
}

//Q4
float areaOfCircle(int r) {
    return 3.14 * r * r;
}

//Q5
int areaOfCuboid(int l, int b, int h) {
    return l*b*h;
}

//Q6
float averageOfThreeNum(int n1, int n2, int n3) {
    return n1+n2+n3/3.0f;
}

//Q7
int square(int num) {
    return num*num;
}

//Q8
void swap(int &n1, int &n2) {
    n1 = n1^n2;
    n2 = n1^n2;
    n1 = n1^n2;
}

//Q9
void max(int n1, int n2) {
    if(n1 > n2)
        cout << n1 << " is grater." << endl;
    else
        cout << n2 << " is grater." << endl;
}

//Q10
void sumOfArr(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; ++i)
        sum+=arr[i];
    cout << "Sum is " << sum << endl;
}

int main() {
    system("clear");
}