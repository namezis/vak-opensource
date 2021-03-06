program hello;
type
    bitset = set of 0..63;
    word = record case integer of
            0: (lo, hi: longword);
            1: (m: bitset)
           end;
var
    v: word;
    i: integer;
begin
    { Test bitmasks }
    for i:=0 to 63 do begin
        v.m := [1, i];
        writeln('v = ', v.lo, ':', v.hi);
    end
end.
