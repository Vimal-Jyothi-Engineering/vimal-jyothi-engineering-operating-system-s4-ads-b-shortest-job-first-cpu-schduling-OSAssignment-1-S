#include <stdio.h>

struct process {
    char pid[10];
    int at, bt, rt;
    int ct, wt, tat;
};

int main() {
    int n;
    scanf("%d", &n);

    struct process p[20];

    for(int i = 0; i < n; i++) {
        scanf("%s %d %d", p[i].pid, &p[i].at, &p[i].bt);
        p[i].rt = p[i].bt;
    }

    ..
      .
      ..
      .
      ..
      .
      ..
      

    printf("Average Waiting Time: %.1f\n", avg_wt/n);
    printf("Average Turnaround Time: %.1f\n", avg_tat/n);

    return 0;
}
