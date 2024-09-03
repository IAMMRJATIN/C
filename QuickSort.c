#include<stdio.h>
#include<stdlib.h>

#include<time.h>    

void Exch(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void QuickSort(int a[], int low, int high){
    int i, j, key, k;
    if (low >= high)
        return;
    key = low + 1;
    j = high;
    while(i <= j){
        while(a[i] <= a[key])
            i = i+1;
        while (a[j] > a[key])
            j = j-1;
        if (i<j){
            Exch(&a[i], &a[j]);
        }
    }
    Exch(&a[j], &a[key]);
    QuickSort(a, low, j-1);
    QuickSort(a, j+1, high);
}

void main(){
    int n, a[100], k;
    clock_t st, et;
    double ts;

    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("The random number are: ");

    for (k = 1; k <= n; k++){
        // a[k] = rand();
        scanf("%d", &a[k]);
        printf("%d\t", a[k]);
    }

    st = clock();
    QuickSort(a, 1, n);
    et = clock();
    ts = (et-st)/CLOCKS_PER_SEC;
    printf("The stored numbens are : ");
    for ( k = 1; k <= n; k++){
        printf("%d\t", a[k]);
    }
    printf("The time taken is %e", ts);
}





