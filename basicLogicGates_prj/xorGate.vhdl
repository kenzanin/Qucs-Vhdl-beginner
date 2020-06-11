entity xorGate is
    port(ina : in bit;
         op  : out bit;
         inb : in bit); 
end;

architecture behave of xorGate is
begin
    op <= ina xor inb;
end;
