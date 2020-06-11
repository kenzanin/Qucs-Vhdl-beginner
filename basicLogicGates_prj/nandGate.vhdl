entity nandGate is
    port(ina : in bit;
         op  : out bit;
         inb : in bit); 
end;

architecture behave of nandGate is
begin
    op <= ina nand inb;
end;
