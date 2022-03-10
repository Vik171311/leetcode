#include<stdio.h>

int next_n(int n) {
    int r = 0;
    while (n != 0) {
        int d = n % 10;
        n /= 10;
        r += d * d;
    }
    return r;
}
bool contains(int* history, int size, int n) {
    for (int i = 0; i < size; i++) {
        if (history[i] == n) {
            return true;
        }
    }
    return false;
}

bool isHappy1(int n) {
    int history[1000];
    int size = 0;

    while (!contains(history, size, n)) {
        history[size] = n;
        size++;
        n = next_n(n);
    }
    return n == 1;
}
bool isHappy2(int n){
    int fast = n;
    int slow = n;

    do{
        slow = next_n(slow);
        fast = next_n(next_n(fast));
    }while(slow != fast);

    return fast == 1;
}


int  main() {
    int n = 19;

     if (isHappy1(n))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    //查找1000以内的快乐数
    int i = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (isHappy1(i)) 
            printf("%d\n",i);
    }
    return 0;
   
}