#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        int st = 2;
        int end = 8;
        long long int sum = 0;

        while(st < n){;
            sum += st;
            long long int next = 4 * end + st;
            st = end;
            end = next;
        }
        printf("%lld\n",sum);
    }
    return 0;
}