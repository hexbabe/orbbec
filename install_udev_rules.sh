#!/bin/bash
set -euo pipefail

# Check if user is root/running with sudo
if [ $(whoami) != root ]; then
    echo Please run this script with sudo
    exit 1
fi

CURR_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd -P)"

if [ "$(uname -s)" != "Darwin" ]; then
    # Install UDEV rules for USB device
    cp ./99-obsensor-libusb.rules /etc/udev/rules.d/99-obsensor-libusb.rules
    echo "usb rules file install at /etc/udev/rules.d/99-obsensor-libusb.rules"
fi
udevadm control --reload-rules && udevadm trigger
echo "udev rules installed successfully"
