//
// Created by Moyu on 16/10/7.
//
#include "client.h"

int main (int argc, char*const args[]) {


    const char *ip = "127.0.0.1";
    int port = 3230;
    if(argc > 1) {
        ip = args[1];
        if(argc > 2) {
            port = atoi(args[2]);
        }
    }

    client_run_cmd(ip, port);

    return 0;
}
