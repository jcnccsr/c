#include <unistd.h>

int main() {

  char s[] = "Hello, World !\n";
  int len  = sizeof(s);
  write(1, s, len);

  return 0;
}
