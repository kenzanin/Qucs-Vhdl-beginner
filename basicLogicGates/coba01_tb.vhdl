entity coba01_tb is
end;

architecture behave of coba01_tb is
    component andGate
        port(inA,inB : in bit;
             op      : out bit);    
    end component;
    for andGate_0: andGate use entity work.coba01;
    signal inA, inB, op : bit;
    begin
        andGate_0: andGate port map(inA => inA, inB=> inB, op=>op);
end;