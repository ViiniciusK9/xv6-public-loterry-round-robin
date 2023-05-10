#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
    //char *argv[] = { NULL};
    if (fork(3) == 0){
        //cprintf("pai\n");
        exit();
    }
    exit();
}