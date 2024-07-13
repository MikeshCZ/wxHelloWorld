# wxHelloWorld
Template for Visual Studio Code with wxWidgets library using CMake, optimized for macOS.

## Requirements
- C++17 or later
- [wxWidgets](https://www.wxwidgets.org/)

## Homebrew Installation (macOS)
[Homebrew](https://brew.sh/) installation is the recommended way to manage your libraries, including wxWidgets.

### Install Homebrew:

```sh
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```
### Install wxWidgets:

```sh
brew install wxwidgets
```

## Using the Template

If you open the folder in VSCode, you can press `F5` to debug the application immediately. This will generate a `/build` folder and an application named `wxHelloWorld` within it.

## Build wxHelloWorld Application Bundle (macOS)

You can run `./build.sh` to create an Application Bundle for macOS in the `/build` folder. This will execute `cmake` with the `Release` option first, followed by the `make` command and create wxHelloWorld.app in `/build` folder.
