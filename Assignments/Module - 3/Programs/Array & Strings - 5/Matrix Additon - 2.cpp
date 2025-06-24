//Write a C++ program to perform matrix addition on two 2x2 matrices.
//Objective: Practice multi-dimensional arrays.
#include<iostream>
using namespace std;

class Mat_addition {
    public:
    int arr1[2][2] = {{8,5},{5,2}};
    int arr2[2][2] = {{2,5},{5,8}};
    int i,j;
    int ans[2][2];
    
    
    void addition() {
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                ans[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
    }
    
    void display() {
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 2; j++) {
                cout<<" "<< ans[i][j];
            }
            cout<<endl;
        }
    }
    
};

int main() {
    Mat_addition ma = Mat_addition();
    ma.addition();
    ma.display();
}