#include <stdio.h>

int main()
{
    long bytes;


    printf("Enter the number of bytes: ");
    scanf("%lld", &bytes);

    double kb = (double)bytes / 1024;
    double mb = (double)bytes / (1024 * 1024);
    double gb = (double)bytes / (1024 * 1024 * 1024);

    printf("%.2f bytes is equal to:\n", (double)bytes);
    printf("%.2f KB\n", kb);
    printf("%.2f MB\n", mb);
    printf("%.2f GB\n", gb);

    return 0;
}
