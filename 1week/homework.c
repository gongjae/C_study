#include <stdio.h>

int main(){
    int name = 0;
    int name2 = 0;
    printf("입력: ");
    scanf("%d %d",&name,&name2);
    (name<=name2)?(printf("%d\n",name2)):(printf("%d\n",name));
}