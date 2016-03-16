FROM ubuntu
RUN apt-get update && apt-get install -y gcc htop
ADD cpu.c /cpu.c
RUN gcc -o cpu cpu.c
