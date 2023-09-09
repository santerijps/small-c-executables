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
      -nostdlib
          Omit the C standard library
      C:\Windows\System32\kernel32.dll
          Compile with the kernel32.dll to enable native Windows API.
  2. Compress with UPX
    upx -9

  gcc -Os -s -fno-ident -fno-asynchronous-unwind-tables -nostdlib -o out.exe C:\Windows\System32\kernel32.dll hello_native.c

*/

#include <windows.h>

void _start(void) {
  const char str[] = "Hello world!\n";
  HANDLE stdout = GetStdHandle(STD_OUTPUT_HANDLE);
  DWORD written;
  WriteFile(stdout, str, sizeof(str), &written, NULL);
  ExitProcess(EXIT_SUCCESS);
}
