# CPP-Minor-Sub-projects
Welcome to my C++ minor pet project repository, which is part of my software development portfolio.

As part of learning C++, I have developed some independent projects that perform small tasks.

Here there are various small programs that are designed to be compiled, linked and then executed in a command line, which demonstrate various basic, intermediate and advanced skills.

Please feel free to browse the subprojects and to read the commentary in the header files/source code.

----

# Compilation from source

First, clone the repository to a folder of your choice.
This should become the root folder.
For example, if using Linux, one may clone to the directory:
> /home/username/git/CPP-Minor-Sub-projects

This can be accomplished through the git command line utility, or through downloading a .zip file and extracting the contents to a chosen directory.

----

Linux x86_64

These programs were compiled and tested on a machine with the following specification:

- Linux 6.2.14-100
- Fedora 36
- gcc (GCC) 12.2.1
- g++ (GCC) 12.2.1
- GNU Make 4.3
- CMake 3.26.3
- GNOME Terminal 3.44.1



Using a terminal shell, change to the root directory of the project.
Next, run:

>./make.sh



This should invoke a small bash script to create a folder called 'build'.
Next, the script creates another folder called 'bin' within the 'build folder'.
The script enters the 'build' folder.
So, now there are two folders:

>./build

and

>./build/bin

The script then runs the following CMake command:

>cmake -S ../ -B .

This invokes cmake with one argument to determine the parent folder to use to scan for source files.
The -B argument is used to specify the current ('build') folder as the target folder to prepare the data for the GNU makefile to be generated.

Afterwards, if all runs successfully, then GNU make is invoked within 'build':

>make



----

Windows 11 Professional x86_64

After plenty of work I managed to compile and execute the programs in Windows 11 through 2 different compiler collections:

- Cygwin 3.4.6-1
  - gcc-g++ 11.3.0-1
  - make 4.4.1-2
  - cmake 3.23.2-1
- MinGW-w64 10.0.22000
  - gcc 12.2.0
  - g++ 12.2.0
  - mingw32-make (with GNU Make 4.2.1)
  - CMake-GUI was installed separately from MinGW-W64.
    - The CMake backend version used was 3.26.3.

Using either Cygwin or MinGW-w64 is fine.
It is not necessary to use both.
If using Cygwin, please feel free to follow the instructions for compiling on Linux.
If using MinGW-w64, the process may differ.
It may be necessary to modify a batch script file in order to accommodate some additional arguments to override compiler and make binary file paths.

The CMake and makefile scripts in this repository were designed to link library files dynamically and not statically.
Therefore, if building using either of these compiler collections, then the resultant programs would need to be executed using the runtime environment provided by that respective compiler collection.
So, for example, .exe files built using Cygwin requires execution through a Cygwin terminal.
In addition, some of these programs use the \<thread\> and \<mutex\> headers, which are implemented differently between POSIX and MS Windows NT OSes.

I have investigated more lightweight solutions to dependencies, but so far this remains a work in progress.

----

# Program Execution

Hardware
- Any modern x86_64 CPU should run these programs just fine. There are some programs that use concurrency, which may potentially see variable performance, depending on the hardware and compilation methods used.
- Tested on AMD Ryzen 5 Pro 3500U.

The executables should have generated in the build/bin folder.
The filenames of the executables should be similar to the corresponding program names in the main project root folder, but have underscores instead of spaces.
This is normal behaviour for various build systems, which are often not whitespace-friendly with filenames.


Linux: After compiling, executables should work natively in any Linux terminal shell. Simply enter the path of the executable that you would like to run into the terminal shell and then enter.
Windows: If using Cygwin or MinGW-w64 to compile, please open a shell in that same compiler collection. This provides the runtime required to execute the binaries. Then enter the file path of the desired executable program within the Cygwin/MinGW terminal shell.


----

# Examples

Here are some screeenshots that demonstrate some of these programs in action:

-  Joker Game Joke

[![Joker Game Joke](https://github.com/MrSach/CPP-Minor-Sub-projects/blob/main/Joker%20Game%20Joke/Joker_Game_Joke.png)]()
