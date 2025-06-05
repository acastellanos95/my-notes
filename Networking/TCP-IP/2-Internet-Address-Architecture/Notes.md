# IP addresses

Every device has an IP address. This are identifications in a network. In a network, addresses should not be duplicated
this is true for all type of networks even the Internet.

## IPv4

IPv4 addresses consist of 32-bit nonnegative integer. Representation:

165.195.130.107 = 10100101 11000011 10000010 01101011 = A5 C3 82 6B

IPv6 addresses consists of 128-bit nonnegative integer. Representation:

8 hex blocks

1. Leading zeroes are not written 5f05:2000:80ad:5800:58:800:2023:1d71

2. Ommited zeroes are replaced by :: only once: 2001:0db8:0:0:0:0:0:2 = 2001:0db8::2

3. IPv4 in IPv6 or IPv4 mapped IPv6 address are preceded by the block ffff. ::ffff:10.0.0.1 represents 10.0.0.1 in IPv6

4. The last 2 block can be represented using dotted-quad IPv4 notation. ::0102::f001 === ::1.2.240.1 

## Address classes

For an address we will have a __Net Number__ to identify the network on which the machine's interface using that IP is 
to be found, and a __Host Number__ to identify the host in the network. A partitioning of IP addresses was given (IPv4):

- Class A (unicast-special):

|-- Net Number --|-- Host --|
| 0 | 7 bits     | 24 bits  |
__Range__: 0.0.0.0 - 127.255.255.255 __High Order Bits__: 0 __% of addresses__: 50% __No. of networks__: 128
__No. of hosts__: 16,777,216

- Class B (unicast-special):

| -- Net Number --|-- Host --|
| 10 | 14 bits    | 16 bits  |
__Range__: 128.0.0.0 - 191.255.255.255 __High Order Bits__: 10 __% of addresses__: 25% __No. of networks__: 16,384
__No. of hosts__: 65,336

- Class C (unicast-special):

| -- Net Number --|-- Host --|
| 110 | 21 bits   | 8 bits   |
__Range__: 192.0.0.0 - 223.255.255.255 __High Order Bits__: 110 __% of addresses__: 12.5% __No. of networks__: 2,097,152
__No. of hosts__: 256

- Class D (multicast):

| -- Bits --|-- multicast address --|
|    1110   |         28 bits       |
__Range__: 224.0.0.0 - 239.255.255.255 __High Order Bits__: 1110 __% of addresses__: 6.25% __No. of networks__: N/A
__No. of hosts__: N/A

- Class E (Reserved):

| -- Bits --|-- multicast address --|
|    1111   |         28 bits       |
__Range__: 240.0.0.0 - 255.255.255.255 __High Order Bits__: 1111 __% of addresses__: 6.25% __No. of networks__: N/A
__No. of hosts__: N/A

## Subnet Addressing
