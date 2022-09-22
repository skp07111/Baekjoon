#include <stdio.h>
#include <string.h>

int main() {
    int num, cnt1=0, cnt2=0;
    char arr[15];
    scanf("%d", &num);
    scanf("%s", arr);
    for (int i = 0; i < num; i++) {
        if (arr[i] == 'A') cnt1++;
        else if(arr[i] == 'B') cnt2++;
    }
    if (cnt1 > cnt2) printf("A");
    else if (cnt2 > cnt1) printf("B");
    else printf("Tie");
}