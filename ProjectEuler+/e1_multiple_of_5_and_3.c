#include <stdio.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a = 0; a < t; a++){
        int n; 
        scanf("%d",&n);
        long long int three = (n - 1) / 3;
        long long int five = (n - 1) / 5;
        long long int fifteen = (n - 1)/15;
        long long sum = (3 * three * (three + 1) + 5 * five * (five + 1) - 15 * fifteen * (fifteen + 1)) / 2;
        printf("%lld\n",sum);
    }
    return 0;
}
