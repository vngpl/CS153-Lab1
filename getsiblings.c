#include "types.h"
#include "stat.h"
#include "user.h"

// #define NUM_CHILDREN 2

int main(void) {
  int child1_pid = fork();
  if (child1_pid == 0) {
    sleep(100);
    getsiblings();
    exit(0);
  }

  int child2_pid = fork();
  if (child2_pid == 0) {
    sleep(100);
    getsiblings();
    exit(0);
  }

  int child3_pid = fork();
  if (child3_pid == 0) {
    sleep(100);
    getsiblings();
    exit(0);
  }

  wait();
  wait();
  wait();

  exit(0);

  // int child_pid;

  // for (int i = 0; i < NUM_CHILDREN; i++) {
  //   child_pid = fork();
  //   if (child_pid < 0) {
  //     printf(1, "Fork failed\n");
  //     exit(1);
  //   }
  //   else if (child_pid == 0) {
  //     getsiblings();
  //     exit(0);
  //   }
  //   else {
  //     printf(1, "Parent created a child with PID: %d\n", child_pid);
  //   }
  // }

  // for (int i = 0; i < NUM_CHILDREN; i++) {
  //   wait();
  // }

  // exit(0);
}