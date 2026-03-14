#include <stdio.h>

struct Time {
    int hour;
    int minute;
    int second;
};

struct Time addTime(struct Time t1, struct Time t2) {
    struct Time t3;
    t3.second = t1.second + t2.second;
    t3.minute = t1.minute + t2.minute + t3.second / 60;
    t3.second = t3.second % 60;
    t3.hour = t1.hour + t2.hour + t3.minute / 60;
    t3.minute = t3.minute % 60;
    return t3;
}

int main() {
    struct Time t1, t2, t3;
    printf("Enter first time (hour minute second):\n");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);

    printf("Enter second time (hour minute second):\n");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

    t3 = addTime(t1, t2);

    printf("Sum = %d hour(s), %d minute(s), %d second(s)\n", t3.hour, t3.minute, t3.second);

    return 0;
}

