#include <stdio.h>
#include <stdlib.h>


// calculate days.
int caldays(int a, int b, int c, int d){
    for (int i = 21252; i > 0; i--){
        int total = i + d;
        int lefta = (total - a) % 23;
        int leftb = (total - b) % 28;
        int leftc = (total - c) % 33;
        if ((lefta == 0) && (leftb == 0) && (leftc == 0)){
            return i;
        }
    }
    return -1;
}



int main(){
    int a, b, c, d;
    int size = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    while ((a != -1) && (b != -1) && (c != -1) && (d != -1)){
        size++;
        printf("Case %d: the next triple peak occurs in %d days.\n", size, caldays(a, b, c, d));
        scanf("%d %d %d %d", &a, &b, &c, &d);
    }
    return 0;
}
