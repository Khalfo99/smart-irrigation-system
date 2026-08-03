# Wiring Diagram

## ESP32 Connections

### Soil Moisture Sensor

VCC  -> 3.3V

GND  -> GND

AO   -> GPIO34

---

### Relay Module

VCC -> 5V

GND -> GND

IN  -> GPIO26

---

### Water Pump

12V Power Supply

↓

Relay Module

↓

Water Pump

---

### Wi-Fi

Integrated inside ESP32

---

## Power Supply

12V Adapter

↓

Buck Converter (5V)

↓

ESP32 + Relay
