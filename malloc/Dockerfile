FROM ubuntu
RUN apt-get update && apt-get install -y gcc htop
ADD malloc.c /malloc.c
RUN gcc -o malloc malloc.c
