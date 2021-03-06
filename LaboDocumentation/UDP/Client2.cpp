//
//  Client.cpp
//  RobotCirkelDetector
//
//  Created by Jeroen Provoost on 21/03/14.
//  Copyright (c) 2014 Jeroen Provoost. All rights reserved.
//

#include "Client.h"

// Init groepA
void Client::init() {
    sockfd = socket(AF_INET,SOCK_DGRAM,0);
    bzero(&servaddr_a,sizeof(servaddr_a));
    servaddr_a.sin_family = AF_INET;
    servaddr_a.sin_addr.s_addr=inet_addr(groepA);
    servaddr_a.sin_port=htons(3200);
}

// Init groepB
void Client::initB() {
    sockGroepB = socket(AF_INET,SOCK_DGRAM,0);

    bzero(&servaddr_GroepB,sizeof(servaddr_GroepB));
    servaddr_GroepB.sin_family          =       AF_INET;
    servaddr_GroepB.sin_addr.s_addr     =       inet_addr(groepB);
    servaddr_GroepB.sin_port            =       htons(3200);
}

void Client::send(Udp_package udp_package) {
        sendto(sockfd,&udp_package,sizeof(struct Udp_package),0, (struct sockaddr *)&servaddr_a,sizeof(servaddr_a));
}
void Client::sendB(Udp_package udp_package) {
        sendto(sockGroepB, &udp_package,sizeof(struct Udp_package),0, (struct sockaddr *)&servaddr_GroepB,sizeof(servaddr_GroepB));
}

void Client::close_socket() {
    close(sockfd);

}
void Client::close_socketB() {
    close(sockGroepB);
}
