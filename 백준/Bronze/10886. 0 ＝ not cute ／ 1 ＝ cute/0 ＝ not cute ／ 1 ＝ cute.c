#include <stdio.h>

int main() {
    int num, cnt1 = 0, cnt2 = 0;
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        int stu;
        scanf("%d", &stu);
        if(stu == 0) cnt1++;
        else if (stu == 1) cnt2++;
    }
    if (cnt1 > cnt2) printf("Junhee is not cute!");
    else if (cnt1 < cnt2) printf("Junhee is cute!");
}