entity andGate is
    port(ina : in bit;
         op  : out bit;
         inb : in bit); 
end;

architecture behave of andGate is
begin
    op <= ina and inb;
end;
