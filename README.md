# Shooter
A 2D shooter game built with C++ and [SFML 3](https://www.sfml-dev.org/). The project is in early development — it currently opens a window and runs a basic game loop with an FPS counter in the title bar.
## Requirements
- **C++17** compiler (GCC, Clang, or MSVC)
- **CMake** 3.20 or newer
- **SFML 3.1** (Graphics, Window, System modules)
- **CLion** (optional, but recommended)
## Getting SFML
Download SFML 3 for your platform from the [SFML download page](https://www.sfml-dev.org/download.php).
On Windows with MinGW, grab the pre-built binaries that match your compiler version.
## Building
### CLion
1. Clone the repository and open the project folder in CLion.
2. Set the SFML path in `CMakeLists.txt` (see [SFML configuration](#sfml-configuration)) or pass it via CMake options.
3. Build and run the `Shooter` target.
CLion will create a `cmake-build-debug` (or `cmake-build-release`) folder for build output. These directories are ignored by git.
### Command line
```bash
cmake -B build -DSFML_DIR=/path/to/SFML/lib/cmake/SFML
cmake --build build
```
The executable will be in the build directory (e.g. `build/Shooter.exe` on Windows).
## SFML configuration
`CMakeLists.txt` uses `find_package` to locate SFML. You need to point CMake at your SFML installation.
**Option A — edit `CMakeLists.txt`**
Update the `SFML_DIR` variable to match where SFML is installed on your machine:
```cmake
set(SFML_DIR "C:/path/to/SFML/lib/cmake/SFML")
```
**Option B — pass it when configuring**
```bash
cmake -B build -DSFML_DIR=/path/to/SFML/lib/cmake/SFML
```
On Windows, you may also need SFML's `bin` folder on your `PATH` so the game can find its DLLs at runtime.
## Project structure
```
Shooter/
├── CMakeLists.txt
├── src/
│   ├── main/
│   │   └── main.cpp          # Entry point
│   ├── window/
│   │   ├── Window.h          # Game window and main loop
│   │   └── Window.cpp
│   └── constants/
│       └── Constants.h       # Window size, title, FPS limit
└── README.md
```
## Controls
No gameplay controls yet. Close the window to exit.
## License
No license specified.
