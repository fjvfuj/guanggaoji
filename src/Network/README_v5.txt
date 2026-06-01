V5 patch:
- Replace blocking mosquitto_connect()/mosquitto_reconnect() with mosquitto_connect_async()/mosquitto_reconnect_async().
- Fix symptom where log stops after "network ready after wait" and no MQTT connect log appears.
- MQTT handshake is now driven by mosquitto_loop(); on_connect() subscribes after CONNACK.
- Adds periodic "MQTT connecting..." log while waiting for broker CONNACK.
