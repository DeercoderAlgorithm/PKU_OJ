#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

// calculate days.
int calculate_index(const char* str1, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (str1[i] > str1[j]){
                sum++;
            }
        }
    }
    return sum;
}

int bubble_sort(int* p, int n){

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (p[j] > p[j+1]){
                int temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }

        }

    }

}

int test_bubble_sort(){

    int a[] = {12, 2, 5, 65, 23, 21, 100};
    bubble_sort(a, 7);
    for (int i = 0; i < 7; i++){
        printf("%d ", a[i]);
    }
}


int main(){
    int line = 0;
    int length = 0;
    // read input parameters.
    scanf("%d %d", &length, &line);

    // read lines of string
    string* str = new string[line];
    int* index = new int[line];
    int* index_copy = new int[line];

    for (int i = 0; i < line; i++){
        cin >> str[i];
        index[i] = calculate_index(str[i].data(), str[i].size());
        index_copy[i] = index[i];
    }

    bubble_sort(index_copy, line);
    for (int i = 0; i < line; i++){
        for (int j = 0; j < line; j++){
            if (index_copy[i] == index[j]){
                cout << str[j] << endl;
            }

        }
    }

    return 0;
}
