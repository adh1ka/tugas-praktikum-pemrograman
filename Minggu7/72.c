#include <stdio.h>

int main() {
    int array[100];
    int n, temp;

    printf("INSERT N ARRAY : \n");
    scanf("%d", &n);
    printf("N ARRAY = %d\n", n);

    for (int i = 0; i < n; i++) {
        printf("Input data ke-%d = ", i + 1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("DATA DALAM KEADAAN TERURUT : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
