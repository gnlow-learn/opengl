## cpp

## preq

- MinGW64
- MSYS2
    - glfw: mingw-w64-x86_64-glfw
    - glew: mingw-w64-x86_64-glew
    - glm: mingw-w64-x86_64-glm
    - gcc: mingw-w64-ucrt-x86_64-gcc

### gcc + OpenGL 라이브러리 설치

```sh
# MSYS2 MINGW64 Shell
pacman -S mingw-w64-x86_64-glfw mingw-w64-x86_64-glew mingw-w64-x86_64-glm mingw-w64-ucrt-x86_64-gcc
```

### gcc 설치 후 환경 변수 설정

```sh
# MSYS2 MINGW64 Shell
export PATH="/ucrt64/bin:$PATH"
```
