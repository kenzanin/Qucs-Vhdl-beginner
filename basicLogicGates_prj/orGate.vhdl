entity orGate is
    port(ina : in bit;
         op  : out bit;
         inb : in bit); 
end;

architecture behave of orGate is
begin
    op <= ina or inb;
end;
