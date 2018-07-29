# Docker testing images

Testing images for socker in 32bit fedora.

## modules
- simplest: Hello world from scratch;
- first: bash script from fedora32 image;
- python: demo how to use python in docker;


## simplest
This is module based on C hello world program and scratch image;

hello world must be linked with static library C, because scratch has nothing can be usable, and container is indenpendent from local host;

So hello.sh can't work with scratch image, it only works with fedora parent;

## first
Fedora 32bit OS, version 25, kernel 4.10.11-200.

Only adds a bash script to run;


## python
Start up demo for python projects;

Add new python packages into the image;
