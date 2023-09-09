/*

  1. Compile with GCC
    gcc
      -Os
          Optimize for size
      -s
          Strip the binary
      -fno-ident
          GCC outputs an entire section to advertise itself, which, once padded/aligned is significant in a small program
      -fno-asynchronous-unwind-tables
          Omit stack frame debug information stack that's not stripped otherwise
  2. Compress with UPX
    upx -9

  gcc -Os -s -fno-ident -fno-asynchronous-unwind-tables -o out.exe hello_crossplatform.c
  upx -9 -o out.compressed.exe out.exe

*/

#include <stdio.h>

int main(void) {
  puts("Hello, world!");
  return 0;
}
