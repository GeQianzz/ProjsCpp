#include <stdio.h>

int isPrime(int num){
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            return 0; // 不是素数
        }
    }
    return 1; // 是素数
}

int main(){

    int num;
    scanf("%d", &num);

    for(int i = 2; i < num; i++){
        // 如果第1个分量和第2个分量都是素数
        if(isPrime(i) && isPrime(num - i)){
            printf("%d %d", i, num - i);
            break;
        }
    }
    return 0;
}
