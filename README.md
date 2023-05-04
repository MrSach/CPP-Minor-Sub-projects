# CPP-Minor-Sub-projects
Welcome to my C++ minor pet project repository, which is part of my software development portfolio.

As part of learning C++, I have developed some independent projects that perform small tasks.

Here there are various small programs that are designed to be compiled, linked and then executed in a command line, which demonstrate various basic, intermediate and advanced skills.

Please feel free to browse the subprojects and to read the commentary in the header files/source code.

----

Compilation from source

- Hardware

The machine used to test the program binaries in this repository has the following:

  - AMD Ryzen 5 Pro 3500U

This CPU supports up to 8 simultaneous threads, but any modern x86_64 CPU should suffice for the programs that use concurrency.

----

- Linux x86_64

These programs were compiled and tested on a machine with the following specification:

  - Linux 6.2.14-100
  - Fedora 36
  - gcc (GCC) 12.2.1
  - g++ (GCC) 12.2.1
  - GNU Make 4.3
  - CMake 3.26.3

----

- Windows 11 Professional x86_64

After plenty of work I managed to compile and execute the programs in Windows 11 through 2 compiler collections:

  - Cygwin 3.4.6-1
    - gcc-g++ 11.3.0-1
    - make 4.4.1-2
    - cmake 3.23.2-1
  - MinGW-w64 

The CMake and makefile scripts in this repository were designed to link library files dynamically and not statically.
Therefore, if building using either of these compiler collections, then the resultant programs would need to be executed using the runtime environment provided by that respective compiler collection.
So, for example, .exe files built using Cygwin requires execution through a Cygwin terminal.
In addition, some of these programs use the \<thread\> and \<mutex\> headers, which are implemented differently between POSIX and MS Windows NT OSes.

I have investigated more lightweight solutions to dependencies, but so far this remains a work in progress.
