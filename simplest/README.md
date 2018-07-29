# First Image of docker scratch
July 28, 2018

## Debug

bash script must begin as '#!/usr/bin/env bash'. when '#!/bin/bash' it fails;

when hello try to link static, it complains "no libc found', it means the static glibc is not found;

- ```dnf list *static*```: list all static;

- ```dnf search libc```: serach name;

- ```dnf install glibc_static```: install static libc;

When hello is linked with shared library, docker complaints 'format is not support'. Program can not be run because the miss of libc;

### Build, run and push

refer to Makefile.
