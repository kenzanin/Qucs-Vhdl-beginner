#include <freehdl/kernel.h>
#include <freehdl/std.h>


/* External declarations */
/* End of external declarations */
/* Entity class declaration */
class L4work_E7andgate {
public:
   void *father_component;
  L4work_E7andgate (name_stack &iname, map_list *mlist, void *father);
  ~L4work_E7andgate() {};
  sig_info<enumeration> *L4work_E7andgate_S3ina,*L4work_E7andgate_S3inb,*L4work_E7andgate_S2op;
};

/* Implementation of entity methods */
L4work_E7andgate::
L4work_E7andgate(name_stack &iname, map_list *mlist, void *father) {
    father_component = father;
    iname.push("");
    L4work_E7andgate_S3ina=new sig_info<enumeration>(iname,":ina",":work:andgate",mlist,(&L3std_Q8standard_I3bit_INFO),vIN,this);
    L4work_E7andgate_S3inb=new sig_info<enumeration>(iname,":inb",":work:andgate",mlist,(&L3std_Q8standard_I3bit_INFO),vIN,this);
    L4work_E7andgate_S2op=new sig_info<enumeration>(iname,":op",":work:andgate",mlist,(&L3std_Q8standard_I3bit_INFO),vOUT,this);
    iname.pop();
};


/* Initialization function for entity :work:andgate */
int L3std_Q8standard_init ();
bool L4work_E7andgate_init_done = false;
int L4work_E7andgate_init(){
if (L4work_E7andgate_init_done) return 1;
L4work_E7andgate_init_done=true;
L3std_Q8standard_init ();
register_source_file("/coba01.vhdl","coba01.vhdl");
name_stack iname;
iname.push("");
iname.pop();
return 1;
}

/* end of L4work_E7andgate Entity */
/* External declarations */
/* End of external declarations */
/* Architecture class declaration */
class L4work_E7andgate_A10behavioral : public L4work_E7andgate {
public:
  L4work_E7andgate_A10behavioral (name_stack &iname, map_list *mlist, void *father, int level);
  ~L4work_E7andgate_A10behavioral();
};

/* Concurrent statement class declaration(s) */


/* Class decl. process _4pn */
class L4work_E7andgate_A10behavioral_P4_4pn : public process_base {
public:
  L4work_E7andgate_A10behavioral_P4_4pn(L4work_E7andgate_A10behavioral* L4work_E7andgate_A10behavioral_AP_PAR,name_stack &iname);
  ~L4work_E7andgate_A10behavioral_P4_4pn() {};
  bool execute();
  L4work_E7andgate_A10behavioral* L4work_E7andgate_A10behavioral_AP;
  driver_info *L4work_E7andgate_D2op;
  enumeration *L4work_E7andgate_R3ina,*L4work_E7andgate_R3inb;
  sig_info<enumeration> *L4work_E7andgate_S3ina,*L4work_E7andgate_S3inb;
  winfo_item winfo[1];
  L4work_E7andgate_A10behavioral *arch;
};
  /* Implementation of process :work:andgate(behavioral):_4pn methods */
L4work_E7andgate_A10behavioral_P4_4pn::
L4work_E7andgate_A10behavioral_P4_4pn(L4work_E7andgate_A10behavioral *L4work_E7andgate_A10behavioral_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E7andgate_A10behavioral_AP=L4work_E7andgate_A10behavioral_AP_PAR;
    L4work_E7andgate_S3ina=L4work_E7andgate_A10behavioral_AP->L4work_E7andgate_S3ina;
    L4work_E7andgate_S3inb=L4work_E7andgate_A10behavioral_AP->L4work_E7andgate_S3inb;
    L4work_E7andgate_R3ina=&L4work_E7andgate_A10behavioral_AP->L4work_E7andgate_S3ina->reader();
    L4work_E7andgate_R3inb=&L4work_E7andgate_A10behavioral_AP->L4work_E7andgate_S3inb->reader();
    L4work_E7andgate_D2op=kernel.get_driver(this,L4work_E7andgate_A10behavioral_AP->L4work_E7andgate_S2op);
    {
     sigacl_list sal(2);
     sal.add(L4work_E7andgate_A10behavioral_AP->L4work_E7andgate_S3ina);
     sal.add(L4work_E7andgate_A10behavioral_AP->L4work_E7andgate_S3inb);
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E7andgate_A10behavioral_P4_4pn::execute() {
    L4work_E7andgate_D2op->inertial_assign(((*L4work_E7andgate_R3ina)&&(*L4work_E7andgate_R3inb)),vtime(0));
    return true;
}

/* handle for simulator to find architecture */
void*
L4work_E7andgate_A10behavioral_handle(name_stack &iname, map_list *mlist, void *father, int level) {
 REPORT(cout << "Starting constructor L4work_E7andgate_A10behavioral ..." << endl);
 return new L4work_E7andgate_A10behavioral(iname, mlist, father, level);
};
extern int L4work_E7andgate_A10behavioral_init ();
handle_info *L4work_E7andgate_A10behavioral_hinfo =
  add_handle("work","andgate","behavioral",&L4work_E7andgate_A10behavioral_handle,&L4work_E7andgate_A10behavioral_init);
/* Architecture Constructor */
L4work_E7andgate_A10behavioral::
L4work_E7andgate_A10behavioral(name_stack &iname, map_list *mlist, void *father, int level) :
  L4work_E7andgate(iname, mlist, father) {
    iname.push(":behavioral");
    iname.push("");
    kernel.add_process(new L4work_E7andgate_A10behavioral_P4_4pn(this,iname.set(":_4pn")),":work:andgate(behavioral)",":_4pn",this);
    iname.pop(); /* pop last declaration from name stack */ iname.pop(); /* pop architecture from name stack */
};

/* Initialization function for architecture :work:andgate(behavioral) */
int L4work_E7andgate_init ();
int L3std_Q8standard_init ();
bool L4work_E7andgate_A10behavioral_init_done = false;
int L4work_E7andgate_A10behavioral_init(){
if (L4work_E7andgate_A10behavioral_init_done) return 1;
L4work_E7andgate_A10behavioral_init_done=true;
L4work_E7andgate_init ();
L3std_Q8standard_init ();
register_source_file("/coba01.vhdl","coba01.vhdl");
name_stack iname;
iname.push("");
iname.pop();
return 1;
}

/* end of :work:andgate(behavioral) Architecture */
/* External declarations */
/* End of external declarations */
/* Entity class declaration */
class L4work_E9testbench {
public:
   void *father_component;
  L4work_E9testbench (name_stack &iname, map_list *mlist, void *father);
  ~L4work_E9testbench() {};
};

/* Implementation of entity methods */
L4work_E9testbench::
L4work_E9testbench(name_stack &iname, map_list *mlist, void *father) {
    father_component = father;
    iname.push("");
    iname.pop();
};


/* Initialization function for entity :work:testbench */
int L3std_Q8standard_init ();
bool L4work_E9testbench_init_done = false;
int L4work_E9testbench_init(){
if (L4work_E9testbench_init_done) return 1;
L4work_E9testbench_init_done=true;
L3std_Q8standard_init ();
register_source_file("ak‹/coba01.vhdl","coba01.vhdl");
name_stack iname;
iname.push("");
iname.pop();
return 1;
}

/* end of L4work_E9testbench Entity */
/* External declarations */
/* End of external declarations */
/* Architecture class declaration */
class L4work_E9testbench_A8dataflow : public L4work_E9testbench {
public:
  L4work_E9testbench_A8dataflow (name_stack &iname, map_list *mlist, void *father, int level);
  ~L4work_E9testbench_A8dataflow();
  sig_info<enumeration> *L4work_E9testbench_A8dataflow_S4outp,*L4work_E9testbench_A8dataflow_S6inptwo,*L4work_E9testbench_A8dataflow_S6inpone;
};

/* Concurrent statement class declaration(s) */


/* Class decl. process testprocess */
class L4work_E9testbench_A8dataflow_P11testprocess : public process_base {
public:
  L4work_E9testbench_A8dataflow_P11testprocess(L4work_E9testbench_A8dataflow* L4work_E9testbench_A8dataflow_AP_PAR,name_stack &iname);
  ~L4work_E9testbench_A8dataflow_P11testprocess() {};
  bool execute();
  L4work_E9testbench_A8dataflow* L4work_E9testbench_A8dataflow_AP;
  driver_info *L4work_E9testbench_A8dataflow_D6inpone,*L4work_E9testbench_A8dataflow_D6inptwo,*D18_implicit_wait_for;
  enumeration *R18_implicit_wait_for;
  sig_info<enumeration> *S18_implicit_wait_for;
  winfo_item winfo[4];
  L4work_E9testbench_A8dataflow *arch;
};
    /* Implementation of process :work:testbench(dataflow):testprocess methods */
L4work_E9testbench_A8dataflow_P11testprocess::
L4work_E9testbench_A8dataflow_P11testprocess(L4work_E9testbench_A8dataflow *L4work_E9testbench_A8dataflow_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E9testbench_A8dataflow_AP=L4work_E9testbench_A8dataflow_AP_PAR;
    S18_implicit_wait_for=new sig_info<enumeration > (iname, ":testprocess:_implicit_wait_for",":work:testbench(dataflow):testprocess",&L3std_Q8standard_I7boolean_INFO,vREGISTER,this);
    R18_implicit_wait_for=&S18_implicit_wait_for->reader();
    L4work_E9testbench_A8dataflow_D6inpone=kernel.get_driver(this,L4work_E9testbench_A8dataflow_AP->L4work_E9testbench_A8dataflow_S6inpone);
    L4work_E9testbench_A8dataflow_D6inptwo=kernel.get_driver(this,L4work_E9testbench_A8dataflow_AP->L4work_E9testbench_A8dataflow_S6inptwo);
    D18_implicit_wait_for=kernel.get_driver(this,S18_implicit_wait_for);
    {
     sigacl_list sal(1);
     sal.add(S18_implicit_wait_for);
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
    {
     sigacl_list sal(1);
     sal.add(S18_implicit_wait_for);
     winfo[1]=kernel.setup_wait_info(sal,this);
    }
    {
     sigacl_list sal(1);
     sal.add(S18_implicit_wait_for);
     winfo[2]=kernel.setup_wait_info(sal,this);
    }
    {
     sigacl_list sal(1);
     sal.add(S18_implicit_wait_for);
     winfo[3]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E9testbench_A8dataflow_P11testprocess::execute() {
  switch (jmp) {
      case 1: goto lab1;
      case 2: goto lab2;
      case 3: goto lab3;
      case 4: goto lab4;
  };

  lab0:
    L4work_E9testbench_A8dataflow_D6inpone->inertial_assign(enumeration(0),vtime(0));
    L4work_E9testbench_A8dataflow_D6inptwo->inertial_assign(enumeration(0),vtime(0));
    wait(winfo[0]); jmp = 1; D18_implicit_wait_for->reset_assign(0,1,10000000LL); return true; lab1:; 
    L4work_E9testbench_A8dataflow_D6inpone->inertial_assign(enumeration(0),vtime(0));
    L4work_E9testbench_A8dataflow_D6inptwo->inertial_assign(enumeration(1),vtime(0));
    wait(winfo[1]); jmp = 2; D18_implicit_wait_for->reset_assign(0,1,10000000LL); return true; lab2:; 
    L4work_E9testbench_A8dataflow_D6inpone->inertial_assign(enumeration(1),vtime(0));
    L4work_E9testbench_A8dataflow_D6inptwo->inertial_assign(enumeration(0),vtime(0));
    wait(winfo[2]); jmp = 3; D18_implicit_wait_for->reset_assign(0,1,10000000LL); return true; lab3:; 
    L4work_E9testbench_A8dataflow_D6inpone->inertial_assign(enumeration(1),vtime(0));
    L4work_E9testbench_A8dataflow_D6inptwo->inertial_assign(enumeration(1),vtime(0));
    wait(winfo[3]); jmp = 4; D18_implicit_wait_for->reset_assign(0,1,10000000LL); return true; lab4:; 
     goto lab0;
}

/* handle for simulator to find architecture */
void*
L4work_E9testbench_A8dataflow_handle(name_stack &iname, map_list *mlist, void *father, int level) {
 REPORT(cout << "Starting constructor L4work_E9testbench_A8dataflow ..." << endl);
 return new L4work_E9testbench_A8dataflow(iname, mlist, father, level);
};
extern int L4work_E9testbench_A8dataflow_init ();
handle_info *L4work_E9testbench_A8dataflow_hinfo =
  add_handle("work","testbench","dataflow",&L4work_E9testbench_A8dataflow_handle,&L4work_E9testbench_A8dataflow_init);
/* Architecture Constructor */
L4work_E9testbench_A8dataflow::
L4work_E9testbench_A8dataflow(name_stack &iname, map_list *mlist, void *father, int level) :
  L4work_E9testbench(iname, mlist, father) {
    iname.push(":dataflow");
    iname.push("");
    L4work_E9testbench_A8dataflow_S4outp=new sig_info<enumeration > (iname, ":outp",":work:testbench(dataflow)",(&L3std_Q8standard_I3bit_INFO),vREGISTER,this);
    L4work_E9testbench_A8dataflow_S6inptwo=new sig_info<enumeration > (iname, ":inptwo",":work:testbench(dataflow)",(&L3std_Q8standard_I3bit_INFO),vREGISTER,this);
    L4work_E9testbench_A8dataflow_S6inpone=new sig_info<enumeration > (iname, ":inpone",":work:testbench(dataflow)",(&L3std_Q8standard_I3bit_INFO),vREGISTER,this);
    tmpml.reset(); tmpml.signal_map(":ina",NULL,vIN,L4work_E9testbench_A8dataflow_S6inpone,NULL); tmpml.signal_map(":inb",NULL,vIN,L4work_E9testbench_A8dataflow_S6inptwo,NULL); tmpml.signal_map(":op",NULL,vOUT,L4work_E9testbench_A8dataflow_S4outp,NULL); kernel.elaborate_architecture("work","andgate","",iname,":portmaps",&tmpml,this,level);
    kernel.add_process(new L4work_E9testbench_A8dataflow_P11testprocess(this,iname.set(":testprocess")),":work:testbench(dataflow)",":testprocess",this);
    iname.pop(); /* pop last declaration from name stack */ iname.pop(); /* pop architecture from name stack */
};

/* Initialization function for architecture :work:testbench(dataflow) */
int L4work_E9testbench_init ();
int L4work_E7andgate_init ();
int L3std_Q8standard_init ();
bool L4work_E9testbench_A8dataflow_init_done = false;
int L4work_E9testbench_A8dataflow_init(){
if (L4work_E9testbench_A8dataflow_init_done) return 1;
L4work_E9testbench_A8dataflow_init_done=true;
L4work_E9testbench_init ();
L4work_E7andgate_init ();
L3std_Q8standard_init ();
register_source_file("ê`k‹/coba01.vhdl","coba01.vhdl");
name_stack iname;
iname.push("");
iname.pop();
return 1;
}

/* end of :work:testbench(dataflow) Architecture */
