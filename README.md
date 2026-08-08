# C++ 学习仓库

C++ 基础项目，使用 **CMake** 构建。仓库按主题分为多个独立的小项目，各自拥有自己的 `CMakeLists.txt`。

## 目录结构

```
cpp-study/
├── test/                  # 示例项目：四则运算函数拆分
│   ├── CMakeLists.txt
│   ├── src/               # 源码（.cpp）
│   ├── include/           # 头文件（.h/.hpp）
│   ├── build/             # CMake 构建产物（已 gitignore）
│   └── bin/               # 生成的可执行文件（已 gitignore）
└── practice/              # 指针与引用练习
    ├── CMakeLists.txt
    ├── src/
    ├── include/
    ├── build/
    └── bin/
```

## 环境要求

- CMake ≥ 3.0
- 支持 C++17 的编译器（g++ / clang++）
- make

## 编译与运行（以 test 为例）

```bash
cd test/build

# 1. 配置项目（生成构建文件到 build/）
cmake ..

# 2. 编译
make

# 3. 运行（可执行文件输出到 bin/）
./bin/app


## 补充说明

- `CMakeLists.txt` 中通过 `file(GLOB ...)` 收集 `src/` 下的所有 `.cpp`，**新增源文件后需要重新执行 `cmake -S . -B build`** 才会被包含进编译。
- 可执行文件通过 `EXECUTABLE_OUTPUT_PATH` 输出到各项目自己的 `bin/` 目录；`build/` 与 `bin/` 均已加入 `.gitignore`，不会进入版本控制。
- 想要重新干净地构建：删除 `build/` 目录后重新执行上面的配置命令即可。
