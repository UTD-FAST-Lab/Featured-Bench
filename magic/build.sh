cd $FUZZ/equal
# CFLAGS="-O0 $CFLAGS" make
CC=$HOME/AFLplusplus/afl-clang-fast CXX=$HOME/AFLplusplus/afl-clang-fast++ CFLAGS="-O0 $CFLAGS" make

