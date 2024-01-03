#include<stdio.h>
int main() {
    int arr[4];
    int i,n,a = 0;
    n = 0;
    for(i = 0;i < 5;i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < 5;i++){
        if (arr[i]%2 == 0){
            n = n + 1;
        }
        else a = a + 1;
    }
    printf("%d valores pares\n", n);
    return 0;
}
