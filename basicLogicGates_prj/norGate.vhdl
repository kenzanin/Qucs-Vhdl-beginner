entity norGate is
    port(ina : in bit;
         op  : out bit;
         inb : in bit); 
end;

architecture behave of norGate is
begin
    op <= ina nor inb;
end;
