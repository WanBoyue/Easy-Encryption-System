# Easy Encryption System
A small and easy encryption system with hard to break ways to make passwords.
# Do not try in commercial uses! May not be very safe!
The way to encrypt things:
Encryption string length: \[Max 10, use 4 in this example\]
Encryption string input: \[Use abcd in this example\] \[Max 10 characters\]
To be encrypted string input: \[Use abxdc in this example\]
Process:
\[a\]bxdc: a -> b      \[a\]\[b\]cd
a\[b\]xdc: b -> c      a\[b\]\[c\]d
abx\[d\]c: d -> a      \[a\]bc\[d\]
abxd\[c\]: c -> d      ab\[c\]\[d\]
