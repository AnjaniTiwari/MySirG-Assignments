#include <iostream>
#include <cmath>
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
double power(double x, double y) {
    double total = 1;
    if(y > 0) {
        while(y--)
            total*=x;
    }
    else if(y < 0) {
        while(y++) 
            total*=x;
        total = 1/total;
    }
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
    return fact(n)/(fact(r)*fact(n-r));
}

void pascalTriangle(int lines) {
    bool flag;
    int r;
    for(int i = 0; i < lines; ++i) {
        flag = true;
        r = 0;
        for(int j = 0; j < 2*lines-1; ++j) {
            if(j >= lines-i-1 && j <= lines+i-1 && flag) {
                cout << combination(i, r++);
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
int isFibonacciTerm(int num) {
    int firstTerm = 1, secondTerm = 1, temp;

    while(secondTerm <= num) {
        if(secondTerm == num)
            return 1;
        temp = secondTerm;
        secondTerm = firstTerm + secondTerm;
        firstTerm = temp;
        
    }
    return 0;
}

//Q6
void swap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

//Q7
int add(int n1, int n2, int n3 = 0) {
    return n1+n2+n3; 
}

//Q8
double area(int radius) {
    return 3.14*radius*radius; 
} 

int area(int l, int b) {
    return l*b;
} 

double area(int a, int b, int c) {
    double s = a+b+c/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

//Q9
int big(int n1, int n2) {
    if(n1 > n2)
        return n1;
    else
        return n2;
}

int big(double n1, double n2) {
    if(n1 > n2)
        return n1;
    else
        return n2;
}

//Q10
int add(int n1, int n2) {
    return n1+n2;
}

int add(double n1, double n2) {
    return n1+n2;
}

int main() {
    system("clear");
    // cout << isPrime(11);
    //cout << highestValueDigit(92372);
    cout << power(2, 3);
    // pascalTriangle(7);
    // cout << isFibonacciTerm(14);
    // int x = 5, y = 10;
    // swap(x, y);
    // cout << x << " " << y;

    cout << endl;
    return 0;
}