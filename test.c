#include "types.h"
#include "param.h"
#include "user.h"

#define MAX 20000


int arr[MAX];

void fill(int *arr, int n) {
    int j = n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = j;
        j--; 
    }
}

void bubble_sort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void wastetime() {
    
    
    fill(arr, MAX);
    bubble_sort(arr, MAX);

}


int main(int argc, char *argv[]){ 
    
    int pid;
    for (int i = 0; i < 4; i++){
        if((pid=fork(0)) == 0){
            wastetime();
            
            printf(1, "Classe 0, pid: %d\n", pid);
            
            exit();
        }
    }
    for (int i = 0; i < 4; i++){
        if((pid=fork(1)) == 0){
            wastetime();
            
            printf(1, "Classe 1, pid: %d\n", pid);
            
            exit(); 
        }

    }
    for (int i = 0; i < 4; i++){
        if((pid=fork(2)) == 0){
            wastetime();
            
            printf(1, "Classe 2, pid: %d\n", pid);
            
            exit();
        }
    }
    for (int i = 0; i < 4; i++){
        if((pid=fork(3)) == 0){
            wastetime();
            
            printf(1, "Classe 3, pid: %d\n", pid);
            
            exit();
        }
    }

    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    wait();
    
    exit();
} 