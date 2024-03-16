```sh 
    echo 0 > /proc/sys/kernel/randomize_va_space

```

* compile 

```sh
    gcc -g -m32 -fno-stack-protector -z execstack -o try-hack try-hack.c

```