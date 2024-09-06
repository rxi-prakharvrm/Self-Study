# Comupter Networking Basics

## ISP

An ISP, or Internet Service Provider, is a company or organization that offers internet access to customers. ISPs can provide connections through various methods, including wired (such as fiber optics, cable, or DSL) and wireless (such as satellite or mobile data) connections.

## Types of ISPs

## Tier 1 ISPs

These are large ISPs that invest heavily in infrastructure, including the maintenance and operation of submarine cables, which form the backbone of the global internet. Tier 1 ISPs can connect directly to the internet backbone without paying for IP transit and typically provide services to large organizations, smaller ISPs, and content providers. Examples include companies like AT&T, Level 3, ATNT, SPRINT and NTT Communications.

## Tier 2 ISPs

Tier 2 ISPs purchase internet transit from Tier 1 providers but also engage in peering relationships with other networks to reduce costs. They generally provide services directly to end-users, such as businesses and individuals. Examples of Tier 2 ISPs include companies like Jio, Airtel, and Verizon Fios.

## Tier 3 ISPs

These ISPs rely on purchasing internet transit from Tier 2 providers and focus on delivering internet services to local consumers, such as home users and small businesses. Tier 3 ISPs are typically smaller, regional providers who do not engage in large-scale peering or operate backbone networks.

## Router

A router is a Layer 3 (network layer) device in the OSI model that connects different networks and directs data traffic between them. Its main function is to determine the most efficient path for forwarding packets to their destination.

Routers maintain a routing table that stores information about directly connected hosts and their IP addresses. This helps in selecting the best route for packet forwarding.

Modern routers often have built-in firewalls for security, protecting networks from external threats. These firewalls can also enforce rules, such as blocking or allowing specific URLs, keywords, or types of traffic.

Routers also perform Network Address Translation (NAT), allowing multiple devices in a local network to share a single public IP address. This adds a layer of security by masking internal IP addresses from external networks.

Additionally, routers provide Dynamic Host Configuration Protocol (DHCP) services, automatically assigning unique IP addresses to devices, which simplifies network management.

Lastly, Quality of Service (QoS) is another feature of routers, enabling prioritization of certain traffic, such as streaming or voice calls, ensuring optimal performance even during heavy network usage.

## Hub

A hub is a basic networking device used to connect multiple hosts, enabling communication between them. It operates in half-duplex mode, meaning that data can only be sent or received by one host at a time, not simultaneously. Unlike more advanced devices like switches, a hub is not intelligent. When it receives data, it broadcasts the signal to all connected devices, regardless of the destination, which can lead to security vulnerabilities and unnecessary network congestion.

## Firewall

A firewall is a networking device that secures a network by acting as a barrier between the internal network and external threats. It enforces rules to allow or block specific URLs, keywords, or types of traffic, thus controlling the data entering or leaving the network.

Firewalls come in both software and hardware forms. For small networks, a software firewall, often built into routers, is sufficient. However, for larger networks, such as corporate environments, a hardware firewall is necessary for stronger protection and better performance.

## NIC (Network Interface Card)

A Network Interface Card (NIC) is a hardware device that enables a host (such as a computer or server) to connect to a network, providing the interface between the host and the internet or local network. It allows data transmission between the host and other devices on the network by converting data into signals that can be transmitted over a network medium, such as Ethernet cables or Wi-Fi.

## Access Point

An access point (AP) is a device that connects wireless devices to a wired network, like the internet. It acts as a bridge between your devices and the network, allowing you to access network resources wirelessly.

## Intranet vs Internet

| Internet | Intranet |
| -------- | -------- |
| A global network connecting millions of private, public, academic, business and government networks. | A private network used within an organization to connects its internal systems and users. |

## DNS

DNS stands for Domain Name System, which is the system that translates human-readable domain names into IP addresses that browsers use to load web pages.

## EIGRP Overview

Enhanced Interior Gateway Routing Protocol (EIGRP) is a Cisco-developed routing protocol that helps routers find the fastest path to a destination in a network. EIGRP is a hybrid protocol that combines features of distance-vector and link-state routing protocols. Here are some of its features:

- Diffused Update Algorithm (DUAL): EIGRP uses DUAL to calculate the shortest path to a destination and to ensure a loop-free routing environment.

- Ease of deployment: EIGRP is known for being easy to deploy.
Fast convergence: EIGRP is known for its fast convergence.

- Efficient information exchange: EIGRP allows routers to exchange information more efficiently than older routing protocols.

To enable EIGRP, you can use the command "router eigrp" followed by an autonomous system (AS) number. The AS number must be the same on all routers on the same EIGRP domain. You can also use "network" commands to specify which interfaces to use for EIGRP routing.

## OSPF Overview

Open Shortest Path First (OSPF) is an IP routing protocol that uses a mathematical algorithm to calculate the most efficient path to direct traffic on IP networks.

Based on link-state or shortest path first (SPF) technology, OSPF distributes routing information between routers in a single autonomous system (AS). This capability differentiates OSPF from older TCP/IP routing protocols, which were designed for less complex networks than those used today.

Using Dijkstra's shortest path algorithm, OSPF calculates the shortest path for all routers in an area of the AS to efficiently use network bandwidth and ensure scalability. The AS may be divided into multiple interconnected networks, such as a wide area network (WAN). The topology is visible only to the routers in the same area.

As a dynamic routing protocol, OSPF not only routes IP packets based on the destination IP address (given in the packet header), but it also detects topological changes in the AS. After detecting changes, OSPF calculates new, loop-free routes after a short period (known as convergence time) in which routing traffic is kept to a minimum.