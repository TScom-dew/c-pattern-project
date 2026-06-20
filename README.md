# C Pattern Project 🔥
A console-based C program designed to generate various geometric and mathematical patterns. This project serves as a great tool for understanding nested loops and logic in C programming.

## 🚀 Features
- Diverse Patterns: Generates 8 different types of patterns (Triangle, Reverse Triangle, Pascal Triangle, Pyramid, Diamond, Butterfly, Circle, and Square).
- Interactive Menu: User-friendly console interface to select and generate patterns on the fly.
- Cross-Platform: Designed to work on both Windows and Linux environments.
- Modular Code: Organized into header and source files for better maintainability.


## 📁 Project Structure

| File | Description |
| :--- | :--- |
| `main.c` | Contains the main driver code and the interactive menu system. |
| `patterns.c` | Implementation of all pattern-printing logic. |
| `patterns.h` | Header file containing function declarations. |
| `CMakeLists.txt` | Configuration file for building the project using CMake. |

---
## 🛠️ How to Build and Run
Using GCC (Standard Method)
Compile the source files and run the resulting program:

```base
# Compile
gcc main.c patterns.c -o program

# Run
# On Windows:
.\program.exe

# On Linux/macOS:
./program

```                                 

## 🛠️ Using CMake
If you prefer using CMake to manage your build:

```Bash
mkdir build
cd build
cmake ..
cmake --build .
./program

```


## 📝 Usage
1. Run the program.
2. Select a pattern from the menu (1-8).
3. Enter the required dimensions (size, height, or radius) when prompted.
4. Choose whether to generate another pattern or exit the program.



## 🤖 CI/CD Status
This repository uses GitHub Actions to automate the build and testing process on every push to the main branch.

- Automatic Compilation: The code is compiled using gcc with -Wall to ensure no warnings or errors exist.
- Automated Testing: The program is executed automatically to verify stability and check for runtime errors.
- Build Status: Check the badge at the top of the repository or visit the Actions tab to see live build logs.


---


## 🤝 Contributing
Contributions are welcome! If you have ideas for new patterns or improvements to the current logic, feel free to fork this repository and submit a pull request.

Made with ❤️ by [TScom-dew](https://github.com/TScom-dew)


**Happy Coding! ❤️**
