# basic autoconf c project demo

## How to init this project

```bash
mkdir src
touch Makefile.am
touch configure.ac
touch src/Makefile.am
autoscan
cp configure.scan configure.ac
.... just like project code
```

## How to run

```bash
./autogen.sh
./configure
make
src/dalongdemoapp
```