//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main(){
   int arr[100], n, i, digit;
    int freq[10] = {0};  
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        int num = arr[i];
        if (num == 0) {
            freq[0]++;
        } else {
            while (num > 0) {
                digit = num % 10;
                freq[digit]++;
                num /= 10;
            }
        }
    }
    int maxf= 0, frequency = 0;
    for (i = 0; i < 10; i++) {
        if (freq[i] > maxf) {
            maxf = freq[i];
            frequency = i;
        }
    }
    printf("Digit that occurs most is: %d\n", frequency);
    return 0;
}
