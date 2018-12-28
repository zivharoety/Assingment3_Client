//
// Created by guyof@wincs.cs.bgu.ac.il on 12/28/18.
//

#ifndef UNTITLED2_SERVERTOCLIENT_H
#define UNTITLED2_SERVERTOCLIENT_H
#include <iostream>


class serverToClient {
private:
    int id;
    bool terminate;

public:
    serverToClient(int id ,bool terminate);
    bool isTerminate(){
        return terminate;
    }

    void run();


};


#endif //UNTITLED2_SERVERTOCLIENT_H
