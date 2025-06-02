# Summary

## Architectural principles

1. Allow multiple task to run simultaneously in the interconnected network.
2. Resilient to loss of networks or gateways.
3. Multi-communication services support.
4. Network non-discrimination.
5. Distributed management of resources.
6. Cost-effective.
7. Easy host attachment.
8. Accountability of resources.

## Packets, Connections, and Datagrams

### Packet

A packet is a chunk of data that is carried through the network.

### Connections

A connection is a circuit made between machines, this circuit has a bandwidth, the circuit creates a pathway through the network between these machines.

### Datagrams

Is a packet that contains the source and final destination in its data. This allows for each packet switches to be stateless by not storing direction of packet. 

## OSI Model

Open System Interconnection model, suggests seven logical layers:
|   Layer         |    Description |
| --------------- | -------------- |
| Application (Host) | User initiated task, these are the methods created by the application developers like HTTP, FTP, etc. |
| Presentation (Host) | Methods for presenting data formats and translations rules. Encryption from cipher to data. TLS. |
| Session (Host) | Layer in charge of openning, closing, reinitiating connections or mantaining a state. Cookies, TLS. |
| Transport (Host) | Methods of connections in the machine used by programs. TCP, UDP, etc. |
| Network (Network devices) | Describes packet format. |
| Link (Network devices) | Methods of comms between a single link, Ethernet, Wi-fi. |
| Physical (Network devices) | Connectors, bit encoding, frequencies, etc. |

## TCP/IP model

| Layer | Description |
| ----- | ----------- |
| Application (7, Hosts)| Any internet compatible app. HTTP, DNS, DHCP. |
| Transport (4, Hosts) | Exchange of data between abstract ports. TCP, UDP, SCTP. |
| Network (3.5, Internet Devices, Network layer) | Setup, management and security layer. ICMP, IGMP, IPSec. |
| Network (3, Internet devices, Network layer) | Datagrams and routing. IPv4, IPv6. |
| Link (2.5, Internet devices, Driver) | Map addresses to link-layer. |

## Multiplexing, Demultiplexing and Encapsulation in TCP/IP

Start from bottom-up.

### Link layer

- Ethernet frame:

| 48-bit destination address | 16 bit ethernet type |
| 0xXXX (Media access control) | 0x0 (IPv4), 0x6 (Address resolution protocol), 0xD (IPv6) |

How demultiplexing works in TCP/IP

| Ethernet frame|                               | head + payload + trailer |
demux into:
| ARP | or | IPv4 | | IPv6 |                    | payload = IP datagram = protocol + port + payload' |
IPv4 demux into:
| ICMP |, | UDP |, | TCP |, | IGMP |, etc.      | payload' = protocol + checksum + data |
UDP demux into:          TCP demux into:
| DNS | | Web Server |    | Web Server |        | data = ciphered data |

## Port numbers

IANA: (well known) 0-1023, (registered) 1024-49151 and (dynamic/private) 49152-65535

- SSH 22
- FTP 20,21
- Telnet 23
- SMTP 25
- DNS 53
- HTTP 80, HTTPS 443
- IMAP 143 IMAPS 993
- SNMP (simple network management protocol) 161
- LDAP (lightweight directory access protocol) 389

For application purposes you can use private ports.

## Names, Addresses and DNS

IP address identify the host, DNS is the database that maps IP addresses to domain names such as `google.com` or 
viceversa

## Internets, Intranets and Extranets

Internet: Multiple networks connected together
Intranet: Private internet run by a business
Extranet: Constraint use of networks using the Internet
