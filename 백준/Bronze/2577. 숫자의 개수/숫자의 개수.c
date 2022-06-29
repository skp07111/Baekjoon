#include <stdio.h>

int main() {
    int A, B, C, answer;
    scanf("%d %d %d", &A, &B, &C);
    answer = A * B * C;
    char ans[10], arr[10] = {0};
    sprintf(ans, "%d", answer);
	for (int i = 0; i < 10; i++) {
        if (ans[i] == '0') arr[0]++;
        else if (ans[i] == '1') arr[1]++;
        else if (ans[i] == '2') arr[2]++;
        else if (ans[i] == '3') arr[3]++;
        else if (ans[i] == '4') arr[4]++;
        else if (ans[i] == '5') arr[5]++;
        else if (ans[i] == '6') arr[6]++;
        else if (ans[i] == '7') arr[7]++;
        else if (ans[i] == '8') arr[8]++;
        else if (ans[i] == '9') arr[9]++;
    }
    for (int i = 0; i < 10; i++) printf("%d\n", arr[i]);
}