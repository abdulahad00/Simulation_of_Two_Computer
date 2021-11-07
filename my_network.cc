/*
 * my_network.cc
 *
 *  Created on: Nov 7, 2021
 *      Author: Abdul Ahad
 */




#include<omnetpp.h>
using namespace omnetpp;

class My_node: public cSimpleModule
{
protected:
    void initialize () override;
    void handleMessage(cMessage *msg) override;
};

Define_Module(My_node);

void My_node::initialize()
{
    if(strcmp("computer2",getName()) ==0)
    {
        cMessage *msg = new cMessage("Hello I'm Abdul Ahad");
        send(msg, "output_gate");
    }
}

void My_node::handleMessage(cMessage *msg)
{
    send(msg, "output_gate");
}
