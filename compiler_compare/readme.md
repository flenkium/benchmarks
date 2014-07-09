## Compiler Compare

### program
compiled was the stimuli generator tool 'crave' by the University of Bremen ([see](http://www.informatik.uni-bremen.de/agra/systemc-verification/crave.html))
make tool was ninja
compared compilers and linkers are
crave build type was debug

#### clang++ --version (prebuild)
clang version 3.4 (trunk)
Target: x86_64-unknown-linux-gnu
Thread model: posix

#### clang++ --version (own build)
clang version 3.5 (trunk 199817)
Target: x86_64-unknown-linux-gnu
Thread model: posix

#### gcc --version (prebuild)
gcc (GCC) 4.8.2 20131219 (prerelease)

#### gcc --version (own build)


#### ld --version
GNU ld (GNU Binutils) 2.24

#### ld.gold --version
GNU gold (GNU Binutils 2.24) 1.11

#### ninja --version
1.3.4

### results
// own clang build (3.4) + ld
// ninja  174,19s user 8,77s system 266% cpu 1:08,56 total
// 816.2 MiB (855 805 446)

// own clang build (3.4) + gold
// ninja  177,80s user 11,20s system 259% cpu 1:12,88 total
// 816.2 MiB (855 803 244)

// prebuild clang 3.4 + ld
// ninja  351,98s user 11,08s system 168% cpu 3:36,10 total
// 724.6 MiB (759 772 127)

// prebuild clang 3.4 + gold
// ninja  347,16s user 9,87s system 163% cpu 3:37,85 total
// 724.6 MiB (759 769 933)

// own gcc build (4.8.3) + ld
// ninja  397,22s user 25,43s system 229% cpu 3:04,12 total
// 671.8 MiB (704 383 733)

// own gcc build (4.8.2) + gold
// ninja  380,03s user 16,46s system 230% cpu 2:52,02 total
// 671.8 MiB (704 381 511)

// prebuild gcc 4.8.2 + ld
// ninja  426,57s user 15,67s system 232% cpu 3:10,12 total
// 672.0 MiB (704 617 435)

// prebuild gcc 4.8.2 + gold
// ninja  429,41s user 16,70s system 232% cpu 3:11,77 total
// 672.0 MiB (704 615 204)
