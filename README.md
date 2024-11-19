# GTlab example modules to demonstrate module developement

This repository provides some simplistic modules, that should guide developers through module development.

| Example                 | Module Features                 |
|-------------------------|---------------------------------|
| Community Days Schedule | Data Modeling, UI-Customization |


## Building

To build an example, you'll need a recent version of __CMake__ (3.15 or higher) and a GTlab installation.
Enter the example directory, then build the code via

```
cmake -S . -B build -DCMAKE_PREFIX_PATH=<path/to/gtlab> -DCMAKE_INSTALL_PREFIX=<path/to/gtlab>
cmake --build build
cmake --build build --target install
```

## License

The GTlab examples are licensed under the __Apache 2.0 License__, making it free to use, modify, and distribute in both personal and commercial projects.

