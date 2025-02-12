#include <stdio.h>

// Function prototype
int average(int N);

int main(void)
{
    const int N = 4;
    average(N);
}

int average(int N)
{

    int sum  = 0;

    int scores[N];
    scores[0] = 78;
    scores[1] = 98;
    scores[2] = 34;
    scores[3] = 62;

    for(int i = 0; i < N; i++)
    {
        sum += scores[i];
    }

    printf("Average: %.2f\n", (float) sum / N);

}