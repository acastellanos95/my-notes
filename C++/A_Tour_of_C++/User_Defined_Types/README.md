# User-Defined types

I have almost get all, but now I'll check something that I hasn't used 

## Unions

Ok, so I know `union` are struct that have members of multiple types but they can only hold one member value at a time. I know their size is equal to their largest member. So I'll try some things. 

1. does empty unions exists? `emptyunions.cpp`

Yes hahahaha WTH???

2. Size of empty unions are equal to 1 byte because of C++ memory model? `sizeemptyunions.cpp`

Yes again??? WTH? Why would you need and empty union?

3. Why?

What an idiot hahahaha `union` is a `struct`.
