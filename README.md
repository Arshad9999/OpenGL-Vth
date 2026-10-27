# OpenGL Graphics Labs

Fifteen independent C++ exercises demonstrating classic immediate-mode OpenGL and FreeGLUT: lines, letters, 2D shapes, interpolation, animation, and simple 3D objects.

## Lab index

| Labs | Topics |
| --- | --- |
| 01–02 | Lines, coordinates, and colors |
| 03–05 | Drawing letters from line segments |
| 06–10 | Triangles, polygons, a checkerboard, a tree, and a house |
| 11–13 | 2D scenes and animated transformations |
| 14–15 | Rotating 3D cube and pyramid |

Each `lab_*.cpp` file is a separate executable with its own `main` function. Portable lowercase filenames are used so the CMake project works consistently across Windows, Linux, and macOS filesystems.

## Requirements

- A C++11 compiler
- CMake 3.16 or newer
- OpenGL and GLU development libraries
- FreeGLUT development libraries
- A graphical desktop or X server for running the compiled programs

The programs use the compatibility-profile, immediate-mode API (`glBegin`, `glEnd`, and fixed-function transforms). They are educational examples rather than modern shader-based OpenGL applications.

## Linux build

On Ubuntu or Debian:

```bash
sudo apt-get update
sudo apt-get install freeglut3-dev libgl1-mesa-dev libglu1-mesa-dev cmake g++
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel
```

Run one lab from a graphical session, for example:

```bash
./build/lab_01
```

## Windows build

Install a compiler, CMake, OpenGL/GLU, and FreeGLUT. The original Dev-C++/MinGW environment used these linker flags:

```text
-lopengl32 -lfreeglut -lglu32
```

The CMake project is preferred because it builds all labs consistently. If CMake cannot locate FreeGLUT, set `GLUT_ROOT` to the library installation prefix before configuring.

## macOS note

Apple's system OpenGL framework is deprecated, and the examples include the FreeGLUT header directly. Use a package-managed FreeGLUT installation and pass its prefix to CMake. Platform-specific display behavior may differ from the Windows/Linux compatibility-profile environment.

## Validation scope

GitHub Actions compiles all 15 executables on Ubuntu. Compilation verifies headers, entry points, and linking, but it cannot validate rendering output. Visual checks still require a graphical environment: open each lab, confirm the expected scene, resize the window where supported, and close animated examples normally.

## License

This repository is distributed under the [MIT License](LICENSE). Preserve copyright and attribution notices when redistributing the code.
