#include <stdio.h>

int main() {
    auto int a = 10;
    {
        printf("%d", a);
        {
            auto int b = 20;
        }
    }
    return 0;
}
