# hello world / quick start for conan 2.0 package manager

See also: https://docs.conan.io/2/tutorial/consuming_packages/build_simple_cmake_project.html for the original tutorial


# Files:
- [conanfile.txt](conanfile.txt)
- [CMakeFile.txt](CMakeLists.txt)
- [main.cpp](main.cpp)


# Example `conanfile.txt` 
```
[requires]
# You may have multiple lines like the one below, if you have many dependencies.
$library/$version
$library/$version@$owner/$branch

[generators]
CMakeDeps
CMakeToolchain
```

```shell
$ conan --version
Conan version 2.7.0

$ conan profile show
Host profile:
[settings]
arch=armv8
build_type=Release
compiler=apple-clang
compiler.cppstd=20
compiler.libcxx=libc++
compiler.version=15
os=Macos

Build profile:
[settings]
arch=armv8
build_type=Release
compiler=apple-clang
compiler.cppstd=20
compiler.libcxx=libc++
compiler.version=15
os=Macos
```


```shell
$ cmake --version
cmake version 3.30.0

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```

```shell
$ gcc --version
Apple clang version 15.0.0 (clang-1500.3.9.4)
Target: arm64-apple-darwin23.5.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```

```shell
$ g++ --version
Apple clang version 15.0.0 (clang-1500.3.9.4)
Target: arm64-apple-darwin23.5.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```

编译

```shell
$ ./build.sh
```

运行

```shell
$ ./run.sh
```

