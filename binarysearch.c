#include <stdio.h>

int search(int tab[], int a, int val) {
    int left = 0, right = a - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (tab[mid] == val) {
            return mid;
        } else if (tab[mid] < val) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int tab[10],i;
    printf("enter element of array:-");
    for(i=0;i<10;i++){
        scanf("%d",&tab[i]);
    }
    int a = sizeof(tab) / sizeof(tab[0]);
    int val;
    printf("Enter element to be search:-");
    scanf("%d",&val);

    int result = search(tab, a, val);

    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }

    return 0;
}
