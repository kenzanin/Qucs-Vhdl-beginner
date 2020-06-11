entity xnorGate is
    port(ina : in bit;
         op  : out bit;
         inb : in bit); 
end;

architecture behave of xnorGate is
begin
    op <= ina xnor inb;
end;
