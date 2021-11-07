
package networkping;

//
// TODO auto-generated type
//
network New_network
{
    @display("bgb=333,270");
    types:
        simple My_node
        {
            gates:
                input input_gate;
                output output_gate;
        }

    submodules:
        computer1: My_node {
            @display("p=20,23");
        }
        computer2: My_node {
            @display("p=316,252");
        }
    connections:
        computer1.output_gate --> computer2.input_gate;
        computer2.output_gate --> computer1.input_gate;
}
