#include<stdio.h>

int pow(const int x,const int y){
    int ans = x;
    for(int i=1;i<y;i++){
        ans *= x;
    }
    return ans;
}

int main(){
    int x = 0,y = 0;
    while(true){
        scanf("%d %d",&x,&y);
        printf("%d\n",pow(x,y));
    }
}