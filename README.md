# dmenu-neo64
dmenu is an efficient dynamic menu for X by suckless.org. This is usually used with dwm and standalone window managers. It is very scriptable as it follows the suckless and Unix philosophy. This build is a little bit bloated and follows the color scheme of my dwm build.

## Patches used in this build:
* border
* case 
* center
* fullwidth & vertfull (modified)
* fuzzyhightlight
* fuzzymatch
* instant
* lineheight
* mouse
* numbers

## Parts of dmenu
* /usr/local/bin/dmenu (binary file)
* /usr/local/bin/dmenu_path (lists programs in PATH)
* /usr/local/bin/dmenu_run (shell wrapper to run programs in PATH)
* /usr/local/bin/stest (filter for a list of files)

## Dependencies
* libxft-bgra (Displaying emojis)
* noto-fonts-emoji (Emoji font)
* ttf-jetbrains-mono (JetBrains Mono font)
* ttf-material-design-icons-extended (Material Icons font)

## Installation guide

### 1. Cloning this repository
Run this command:
```
git clone https://github.com/neo64yt/dmenu-neo64.git
```

### 2. Installing dwm
cd into the build directory and run:
```
./install.sh
```

## Customizing dmenu
dmenu is customizable by editing the source code (mainly config.def.h) and patching. To apply a patch, go to this build directory and execute:
```
patch < /directory/to/patch/file.diff
# Change the placeholder with a valid file location
```
If the patch has failed hunks, manually patch by reading the REJ files in this build directory to guide you.
Make sure you executed cleandir.sh file before recompiling dwm (executing install.sh)

## Example scripts
You can find it in my [dotfiles](https://github.com/neo64yt/dotfiles/) repository! (inside scripts/.local/bin/)

