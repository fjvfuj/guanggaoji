v6 changes:
- Do not run DHCP when eth0 carrier is 0.
- Do not attempt MQTT connect when cable/link is down.
- Wait up to 12 seconds for DHCP IP/default route after carrier appears.
- Logs now distinguish physical link down from DHCP/MQTT failures.

If logs show link=0/carrier=0, code cannot fix it: check cable, switch/router port, PHY, or board Ethernet config.
