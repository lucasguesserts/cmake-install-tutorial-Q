# CMake Install Tutorial - Q

This is one of three repositories which "teach"es how to setup cmake to install the targets and its dependencies. The other two parts are:

1. [cmake-install-tutorial-P](https://github.com/lucasguesserts/cmake-install-tutorial-P)
2. [cmake-install-tutorial-R](https://github.com/lucasguesserts/cmake-install-tutorial-R)

The dependency tree is: `Q -> P -> R`, where `X -> Y` means that `Y` depends on `X`.

## Installing this project

This project was designed to be installed locally (although I am pretty sure it works with [CPM](https://github.com/cpm-cmake/CPM.cmake) version 0.38). So, in order to install it, run:

```sh
make install
```

By default, it is installed in `$HOME/goo`. Yes, it is a stupid dir, but that is the point, the only way to find it is by manually pointing to it. If you want to install it in another dir, change the variable `INSTALL_LOCATION` in the [Makefile](./Makefile).

## References

This project would not be possible without the [modern-cpp-template](https://github.com/filipdutescu/modern-cpp-template).
