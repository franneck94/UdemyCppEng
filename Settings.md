# Tooling

## Compiler

Any GCC, Clang or MSVC compiler

## IDE: Visual Studio Code

- [Visual Studio Code](https://code.visualstudio.com/)

### VSCode Extensions

- Coding Tools Extension Pack (franneck94)
- C/C++ Extension Pack (franneck94)

### Extra settings

```json
  "C_Cpp_Runner.cppStandard": "c++20",
```

## C/C++ Runner Extension

## Single File Compile (Build) or Execute (Run)

### Windows and Linux

- Compile (Build) Single File: Ctrl+Alt+B
- Execute (Run) Single File: Ctrl+Alt+R

### MacOS

For the Compile (Build) Single File and Execute (Run) Single File command you can see the key combinations here:

![alt](./media/vscode_mac_keybindings.png)

### Windows User mit MSVC Compiler

You are also free to use the MSVC compiler (from e.g. VS2022) in my C/C++ Runner extension.  
To do this, you must have the following line in the .vscode/settings.json file:

```json
"C_Cpp_Runner.useMsvc": true,
```
