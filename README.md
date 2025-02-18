# ESP-IDF Digital Portrait Frame for LILYGO T-Display S3 AMOLED 1.43"

![LILYGO T-Display S3](readme_image.png)

This project provides ESP-IDF implementation for the LILYGO T-Display S3 AMOLED 1.43" (Model H741) to function as a digital portrait frame. While LILYGO provides Arduino examples, this implementation uses the ESP-IDF framework for enhanced performance and control.

## Hardware Requirements

- [LILYGO T-Display S3 AMOLED 1.43"](https://lilygo.cc/products/t-display-s3-amoled-1-64?variant=44507650556085) (Model H741)
- Micro SD Card
- USB-C cable for programming

## Display Specifications

- Resolution: 466 x 466 pixels
- Display Type: AMOLED
- Driver IC: SH8601
- Interface: QSPI
- MCU: ESP32-S3

## Prerequisites

1. ESP-IDF v5.0 or later
2. Formatted SD card (FAT32)
3. Image files prepared according to specifications

## Image Requirements

- Format: PNG
- Resolution: 466 x 466 pixels (square)
- Naming Convention: Sequential numbers (1.png, 2.png, 3.png, etc.)
- Location: Root directory of the SD card

## Building and Flashing

1. Clone this repository:
```bash
git clone [https://github.com/georgebenett/lilygo_h741_espidf.git]
```

2. Navigate to the project directory:
```bash
cd [project-directory]
```

3. Set up ESP-IDF environment:
```bash
. $HOME/esp/esp-idf/export.sh
```

4. Configure the project:
```bash
idf.py set-target esp32s3
idf.py menuconfig
```

5. Build and flash:
```bash
idf.py build
idf.py -p [PORT] flash
```

## SD Card Setup

1. Format your SD card to FAT32
2. Prepare your images:
   - Convert/resize to 466x466 pixels
   - Save as PNG format
   - Name them sequentially (1.png, 2.png, etc.)
3. Copy all images to the root directory of the SD card

## Performance Optimization

For optimal performance, consider these settings in menuconfig:

- Set CPU frequency to 240MHz
- Enable PSRAM
- Configure Flash frequency to 120MHz
- Enable SPIRAM speed to 120MHz
- Set Flash mode to QIO

## Project Structure

```
project/
├── main/
│   ├── main.c
│   ├── CMakeLists.txt
│   └── pin_config.h
├── components/
├── sdkconfig
└── CMakeLists.txt
```

## Troubleshooting

- Ensure all images are exactly 466x466 pixels
- Verify SD card is properly formatted as FAT32
- Check that image files follow the correct naming convention
- Verify SD card connections

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details

## Acknowledgments

- [LILYGO® T-Display S3 AMOLED](https://lilygo.cc/products/t-display-s3-amoled-1-64)
- ESP-IDF team
- Original Arduino examples by LILYGO
