
# before use this file, please login with 'docker login'.

# -nostdlib -static 
# in order to link static libary, the static glibc must be installed with 'dnf install glibc-static',
# otherwise it will complaints 'libc not found';

# order to use the scratch parent image, hello must be linked with static library

USER_NAME=jacklee032016
REPOSITORY_PATH=start
TAG=hello

IMAGE_NAME=jackhello

all:
		gcc -nostartfiles -Wall -static -o hello hello.c
		docker build -t $(IMAGE_NAME) .


test:
		docker run jackhello

push:
		docker tag $(IMAGE_NAME) docker.io/$(USER_NAME)/$(REPOSITORY_PATH):$(TAG)
		docker push docker.io/$(USER_NAME)/$(REPOSITORY_PATH):$(TAG)
		
run:
		docker run docker.io/$(USER_NAME)/$(REPOSITORY_PATH):$(TAG)


clean:
		rm -rf hello
		docker rmi $(IMAGE_NAME) -f
		