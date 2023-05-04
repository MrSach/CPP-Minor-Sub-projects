# CPP-Minor-Sub-projects
Welcome to my C++ minor pet project repository, which is part of my software development portfolio.

As part of learning C++, I have developed some independent projects that perform small tasks.

Here there are various small programs that are designed to be compiled, linked and then executed in a command line, which demonstrate various basic, intermediate and advanced skills.

Please feel free to browse the subprojects and to read the commentary.

----

Compilation from source

- Hardware

The machine used to test the program binaries in this repository has the following:

  - AMD Ryzen 5 Pro 3500U

I have noted the CPU because benchmarking performance is important, especially for multithreading, which is covered by some of the example programs.
The CPU microarchitecture is x86_64.

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
  - MinGW-w64 

If using either of these two to compile the programs in this repository, that compiler collection is also needed to run the resultant program binaries.
So, for example, .exe files built using Cygwin requires execution through a Cygwin terminal.
The reason is that the libraries are built dynamically and not statically.
The compiler collection provides a runtime environment for the programs to be executed in.
In addition, some of these programs use the \<thread\> and \<mutex\> headers, which are implemented differently between POSIX and MS Windows OSes.


As a reminder, if building through Cygwin, then please run through a Cygwin terminal.
If building through MinGW-w64 then please run through a MinGW-w64 terminal.

