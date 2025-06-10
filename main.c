#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    int numbers[100];
    srand(time(NULL));
    for (int i=0;i<100;i++){
        int num = rand()%100;
        numbers[i] = num;
    }
    for (int i=0;i<100;i++){
        bool changed = false;
        for (int j=0;j<99;j++){
            if (numbers[j]<numbers[j+1]){
                changed=true;
                int between = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = between;
            }
        }
        if (changed==false){
            break;
        }
    }
    for (int i=99;i>=0;i--){
        printf("%d\n",numbers[i]);
    }
    return 0;
}