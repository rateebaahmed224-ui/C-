#include<iostream>
using namespace std;

void add(int a[3][3], int b[3][3]) {
    int sum[3][3];
    cout << "Addition:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

void multiply(int a[3][3], int b[3][3]) {
    int mul[3][3] = {0};
    cout << "Multiplication:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                mul[i][j] += a[i][k] * b[k][j];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << mul[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int a[3][3], b[3][3];

    cout << "Enter first matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    add(a, b);
    multiply(a, b);

    return 0;
}

}