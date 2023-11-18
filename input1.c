#include<stdio.h>
#include<string.h>

int main() {
    int b;
    int x=12;
    int y;
    int z=4;
    x=41;
    y=65;
    if(x>40) {
        for(int k=0; k<10; k++) {
            y = x+3;
            printf("Hello world");
        }
    }
    for(int i=0; i<1022; i++) {
        printf("Hello world");
        scanf("%d", &x);
        if (x>10) {
            for(int j =0; j<50; j++) {
                printf("Hello world");
            }
        }
        for(int j=0; j<z; j++) {
            b=1;
        }
    }
    return 1;
}
