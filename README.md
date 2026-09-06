# 🔥 Automatic Fire Detection and Suppression System

An **Automatic Fire Detection and Suppression System** designed to detect the presence of fire and automatically activate an alarm and water pump to suppress it.

## 📌 Project Overview

This project demonstrates a simple and low-cost **automated fire safety system**. When a fire/flame is detected, the system activates a **buzzer** to provide an audible warning and turns on a **water pump** to extinguish the fire automatically.

The system can be useful as a prototype for **fire safety, automation, embedded systems, and smart protection applications**.

## ✨ Features

* 🔥 Automatic fire/flame detection
* 🚨 Buzzer-based fire alarm
* 💧 Automatic water pump activation
* ⚡ Real-time response to fire detection
* 🔧 Simple and low-cost hardware implementation
* 🤖 Automated fire suppression

## 🛠️ Components Used

* Microcontroller
* Flame/Fire Sensor
* Buzzer
* Water Pump
* Relay Module
* Water Container
* Connecting Wires
* Power Supply
* Breadboard/PCB

## ⚙️ Working Principle

The system continuously monitors the environment using a **flame sensor**.

```text
        🔥 Fire/Flame
             │
             ▼
      ┌──────────────┐
      │ Flame Sensor │
      └──────┬───────┘
             │
             ▼
      ┌──────────────┐
      │Microcontroller│
      └──────┬───────┘
             │
       ┌─────┴─────┐
       ▼           ▼
   🚨 Buzzer    💧 Relay
                    │
                    ▼
               Water Pump
                    │
                    ▼
             🔥 Fire Suppression
```

### Operation

1. The flame sensor continuously monitors for fire.
2. When a flame is detected, the sensor sends a signal to the microcontroller.
3. The microcontroller activates the **buzzer** as an alarm.
4. The microcontroller also activates the **relay module**.
5. The relay switches on the **water pump**.
6. Water is sprayed toward the fire to suppress it.
7. When the fire is no longer detected, the system returns to its normal monitoring state.

## 💻 Software

The project can be programmed using:

* **Arduino IDE**
* Embedded C/C++
* Microcontroller firmware

## 📂 Project Structure

```text
Automatic-Fire-Detection-and-Suppression-System/
│
├── README.md
├── src/
│   └── fire_fighting_system.ino
│
├── circuit/
│   └── circuit_diagram.png
│
├── images/
│   └── project.jpg
│
└── demo/
    └── demonstration.mp4
```

## 🚀 Applications

This prototype can be adapted for:

* 🏠 Home fire safety
* 🏭 Industrial fire monitoring
* 🏢 Building safety systems
* 🔬 Laboratory safety
* 📦 Storage and warehouse protection
* 🤖 Automated fire suppression systems

## 🔮 Future Improvements

Possible improvements include:

* 📡 IoT-based remote fire monitoring
* 📱 Mobile notification through Wi-Fi/GSM
* 📷 Camera-based fire detection
* 🌡️ Temperature and smoke sensing
* 🎯 Automatic nozzle direction control
* ☁️ Cloud-based monitoring and data logging
* 🔋 Battery/solar-powered operation

## 🎥 Demonstration

Add your project demonstration video here:

> **Demo:** `demo/demonstration.mp4`

You can also upload the video to YouTube and add the link here.

## 📸 Project Images

Add photographs of the hardware and working prototype to the `images/` folder.

Example:

```markdown
![Automatic Fire Detection and Suppression System](images/project.jpg)
```

## 👩‍💻 Author

**Nadira Farjana**

Electrical & Electronic Engineering
Jamalpur Science & Technology University, Bangladesh
