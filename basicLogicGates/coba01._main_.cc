/* Main function for architecture :work:testbench(dataflow) */
#include<freehdl/kernel-handle.hh>
int main (int argc, char *argv[]) 

{
  extern handle_info *L4work_E9testbench_A8dataflow_hinfo;
  extern int kernel_main (int, char *[], handle_info*);
  return kernel_main (argc, argv, L4work_E9testbench_A8dataflow_hinfo);
}

/* end of :work:testbench(dataflow) main function */
