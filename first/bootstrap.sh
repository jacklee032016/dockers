#!/usr/bin/env bash
if [[ $1 = "-d" ]]; then
  while true; do sleep 1000; done
fi
if [[ $1 = "-bash" ]]; then
  /bin/bash
   echo "hello fedora"
   uname -a
fi
