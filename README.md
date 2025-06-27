# Vesak Lantern Relay Programming 🎆

> Decorative lighting pattern controller for Vesak lanterns and festival displays using Arduino and an 8-channel relay module.

---

## ✨ Project Overview

This Arduino-based project cycles through **8 dynamic lighting patterns** using an **8-channel relay module** connected to lights. It’s designed for **Vesak lanterns**, but can be used in any decorative lighting setup.

Each pattern is programmed to display specific animations like Knight Rider effects, symmetric lighting, alternating sequences, and more.

---

## 🛠 Hardware Requirements

- **Arduino UNO**
- **8-Channel Relay Module**
- **8 Decorative Lights** (or LEDs for testing)
- **Jumper Wires / Breadboard**
- (Optional) Power source for external lights

---

## 🔌 Pin Configuration

| Arduino Pin | Relay Channel |
|-------------|----------------|
| D2          | Relay 1        |
| D3          | Relay 2        |
| D4          | Relay 3        |
| D5          | Relay 4        |
| D6          | Relay 5        |
| D7          | Relay 6        |
| D8          | Relay 7        |
| D9          | Relay 8        |

---

## 🎮 Lighting Patterns

| Pattern     | Description                                                                 |
|-------------|-----------------------------------------------------------------------------|
| **Pattern1** | Sequential on/off: 2→6, then 6→2                                            |
| **Pattern2** | All ON from 2→6, then ON in reverse 6→2                                     |
| **Pattern3** | Knight Rider-style sweeping pattern (repeats 6 times)                       |
| **Pattern4** | All lights from 2–6 ON for 8 seconds                                        |
| **Pattern5** | Only 2, 7, 8, 9 ON (corner-style pattern)                                   |
| **Pattern6** | Alternating 2, 4, 6 ON → then 3, 5 ON                                       |
| **Pattern7** | Flowing 3-light bar moving left-right-left (repeats 6 times)                |
| **Pattern8** | Only relays 6 and 7 ON                                                      |

Each pattern includes delays for visual rhythm and clarity.

---

## 🧪 Simulation

Try the simulation online using **Wokwi**:

🔗 [Open Simulation](https://wokwi.com/projects/399891869136786433)

---

## 📁 Repository

GitHub Repo: [github.com/DamithraFdo/Vesak-Lantern-Relay-Programming](https://github.com/DamithraFdo/Vesak-Lantern-Relay-Programming)

---

## 🚀 Getting Started

1. Open the `.ino` sketch in Arduino IDE
2. Connect relays as per pin mapping
3. Upload code to Arduino UNO
4. Connect lights or LEDs to relay output terminals
5. Power it on and enjoy the show!

---

## 📩 Contact

Developed by **Dqmithra Fernando from StrydoLabs**

- 📧 Email: [strydolabs@gmail.com](mailto:strydolabs@gmail.com)
- 📧 Support: [damithrafdo@gmail.com](mailto:damithrafdo@gmail.com)
- 📞 WhatsApp: +94 71 650 7322

---

## 📜 License

This project is open-source and free to use for educational or non-commercial decorative purposes. Attribution appreciated.

---

🪔 *May your lantern shine bright this Vesak!* 🇱🇰
