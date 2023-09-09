# Tutorial: Small C Executables

1. Provide optimizing flags to your C compiler
2. Use a nexecutable compressor (`UPX` used in these examples)

or if possible, use `TCC`.

## Cross platform compilation

```shell
gcc -Os -s -fno-ident -fno-asynchronous-unwind-tables -o out.exe hello_crossplatform.c
upx -9 -o out.compressed.exe out.exe
```

### With `TCC`

```shell
tcc -o out.exe hello_crossplatform.c
```

## Native compilation (Windows)

```shell
gcc -Os -s -fno-ident -fno-asynchronous-unwind-tables -nostdlib -o out.exe C:\Windows\System32\kernel32.dll hello_native.c
```
