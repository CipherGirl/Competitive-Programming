1. Install compiler if you don’t have it. I would suggest use MinGW compiler for Windows because Windows doesn’t have a GNU compiler for C++ language.
2. After installing, set the path variable to the location where you have installed the compiler.
3. Now Open Sublime Text Editor. Go into Tools > Build System> New Build System.
4. Copy this code into the file.
{ 
"shell_cmd": "g++ \"${file}\" -o \"${file_path}\\\\${file_base_name}\"", "file_regex": "^(..[^:]):([0-9]+):?([0-9]+)?:? (.)$",
"working_dir": "${file_path}", 
"selector": "source.c, source.c++",
 
"variants": [
 { "name": "Run", "shell_cmd": "g++ -O2 -std=c++11 \"${file}\" -o \"${file_path}\\\\${file_base_name}\" && \"${file_path}\\\\${file_base_name}\" < input.txt" }
 ]
 }
5. Save it. Rename the file as “MyC++Build” or anything you want and save it.

6. Go into Tools > Build System and then Select your Build “MyC++Build”.

7. Later open any folder using Ctrl+O where you usually store your programs. In that folder create a file name “input.txt”.

8. Now start coding. Write a program and then save it in that folder only. The benefit of doing is that whenever you have to give inputs just open the created input.txt enter your input data and save it. Later perform Ctrl+B for compiling and Ctrl+Shift+B for Run.

9. For better usage just open your Sublime with 2 column view.

Just see below.
![Sublime Text](https://qph.fs.quoracdn.net/main-qimg-f3e7af4913bad2ef08dfe7be14e5dbf5)
