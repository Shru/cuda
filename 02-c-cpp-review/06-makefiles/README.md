## Makefiles:

``` Makefile
targets: prerequisites
    bash command 1
    bash command 2?
```

## Differences between CMake and Make:

https://earthly.dev/blog/cmake-vs-make-diff/

## Purpose of CMakeLists.txt:

CMake is a tool that generates Makefiles using `CMakeLists.txt`. It is a build system generator, also capable of cross platform builds. 

## What does .PHONY do?

By default, Makefile targets are "file targets" - they are used to build files from other files. Make assumes its target is a file. However, sometimes, you want your Makefile to run commands that do not represent physical files in the file system. Good examples of this are the common targets "clean" and "all". Chances are this isn't the case, but you may potentially have a file named clean in your main directory. In such a case Make will be confused because by default the clean target would be associated with this file and Make will only run it when the file doesn't appear to be up-to-date with regards to its dependencies.

These special targets are called phony and you can explicitly tell Make they're not associated with files, e.g.:

``` Makefile
.PHONY: clean
clean:
  rm -rf *.o
```

Now `make clean` will run as expected even if you do have a file named `clean`.

In terms of Make, a phony target is simply a target that is always out-of-date, so whenever you ask `make <phony_target>`, it will run, independent from the state of the file system. Some common `make` targets that are often phony are: `all`, `install`, `clean`, `distclean`, `TAGS`, `info`, `check`.

## := vs = in Makefiles

`=` is used for defining variables. It is called a recursive assignment. The value of the variable is re-evaluated each time the variable is used.

`:=` is used for defining variables. It is called a simple assignment or immediate assignment. The value of the variable is evaluated only once, at the point of definition.

``` Makefile
A = $(B)
B = hello
C := $(B)
B = world

all:
    @echo A is $(A)  # Outputs: A is world
    @echo C is $(C)  # Outputs: C is hello
```

## What is the purpose of @ in Makefiles?

The @ symbol prevents the command itself from being echoed to the console when the Makefile is executed.

Example:

``` Makefile
clean:
    rm -rf build/*
```

``` Makefile
$ make clean
rm -rf build/*
```

``` Makefile
clean:
    @rm -rf build/*
```

``` Makefile
$ make clean
$
```

## To run the code using Makefile, use the following command: `make target`
For example:

``` Makefile
$ make 01
```