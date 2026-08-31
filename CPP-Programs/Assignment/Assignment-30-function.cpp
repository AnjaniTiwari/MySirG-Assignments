#include <iostream>

using namespace std;

//Q1
bool isPrime(int num) {
    
    int i;
    if(num > 1) {
        int h = num/2;
        for(i = 2; i <= h; ++i) {
            if(num%i == 0)
                return 0;
        }
    }
    return 1;
}

//Q2
int highestValueDigit(int num) {
    int max = 0, r;
    while(num) {
        r = num%10;
        if(r > max)
            max = r;
        num/=10;
    }
    return max;
}

//Q3
int xPowerY(int x, int y) {
    int total = 1;
    while(y--)
        total*=x;
    return total;
}

//Q4
int fact(int num) {
    int f = 1;
    while(num > 1) {
        f*=num;
        num--;
    }
    return f; 
}

int combination(int n, int r) {
    return fact(n)/fact(r)-fact(n-r)
}

void pascalTriangle(int line) {
    bool flag;
    for(int i = 0; i < line; ++i) {
        flag = true;
        for(int j = 0; j < 2*line-1; ++j) {
            if(j >= line-i-1 && j <= line+i-1 && flag) {
                cout << "*";
                flag = false;
            }
            else {
                cout << " ";
                flag = true;
            }
        }
        cout << endl;
    }
}

//Q5

int main() {
    system("clear");
    // cout << isPrime(11);
    //cout << highestValueDigit(92372);
    // cout << xPowerY(2, 4);
    pascalTriangle(4);
    cout << endl;
    return 0;
}