
#include <stdio.h>

    int main() {
        int arr[10];
        for (int i = 0; i < 10; i++) {
            printf("Enter %d integers:",i);
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < 10; i++) {
            if (arr[i] == -1)
                continue;

            for (int j = i+1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    arr[j] = -1;
                }
            }
        }

        printf("Updated array: ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }

        return 0;
    }


