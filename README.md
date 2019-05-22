# GCC-6.3

This directory contains the GNU Compiler Collection (GCC).

The GNU Compiler Collection is free software.  See the files whose
names start with COPYING for copying permission.  The manuals, and
some of the runtime libraries, are under different terms; see the
individual source files for details.

The directory INSTALL contains copies of the installation information
as HTML and plain text.  The source of this information is
gcc/doc/install.texi.  The installation information includes details
of what is included in the GCC sources and what files GCC installs.

See the file gcc/doc/gcc.texi (together with other files that it
includes) for usage and porting information.  An online readable
version of the manual is in the files gcc/doc/gcc.info*.

See http://gcc.gnu.org/bugs/ for how to report bugs usefully.

Copyright years on GCC source files may be listed using range
notation, e.g., 1987-2012, indicating that every year in the range,
inclusive, is a copyrightable year that could otherwise be listed
individually.

## Information

The source is based on the code of [easyname](http://mirror.easyname.at/gnu/gcc/gcc-6.3.0/) 
and has been modified to compile successfully. Branches for Ubuntu 16.04 LTS and 18.04 LTS are available.

## Installation

    git clone git@github.com:huberthomas/gcc-6.3.git
    cd gcc-6.3
    ./contrib/download_prerequesites
    mkdir build && cd build

Configure it and set the installation directory by modifying the prefix parameter

    ../configure -v --prefix=/usr/local/gcc-6.3 --disable-multilib
    make -j$(nproc)
    sudo make install

## Hints

Afterwards you can use update-alternatives to switch between gcc versions:

    sudo update-alternatives --install /usr/bin/gcc gcc /usr/local/gcc-6.3/bin/gcc 6

for other versions

    ls -l /usr/bin/gcc*

you can do the same, e.g.

    sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-7 7

Switch between the gcc versions by 

    sudo update-alternatives --config gcc

Test it by

    gcc --version

## Acknowledgment

Thanks to the contributors of gcc-6.3.
