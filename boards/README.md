# Manual Arduino IDE Installation Instructions 

  1. Open boards.txt using a text editor. The file is located under C:\Users\\[User Name]\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\1.3.0\boards.txt

  2. Copy paste following at the end of file:

```
# -----------------------------------
# MyQt nRF52840
# -----------------------------------
myqt52840.name=MyQt nRF52840

# VID/PID for Bootloader, Arduino & CircuitPython
myqt52840.vid.0=0x239A
myqt52840.pid.0=0x8087
myqt52840.vid.1=0x239A
myqt52840.pid.1=0x0087
myqt52840.vid.2=0x239A
myqt52840.pid.2=0x0088
myqt52840.vid.3=0x239A
myqt52840.pid.3=0x8088

# Upload
myqt52840.bootloader.tool=bootburn
myqt52840.upload.tool=nrfutil
myqt52840.upload.protocol=nrfutil
myqt52840.upload.use_1200bps_touch=true
myqt52840.upload.wait_for_upload_port=true
myqt52840.upload.maximum_size=815104
myqt52840.upload.maximum_data_size=237568

# Build
myqt52840.build.mcu=cortex-m4
myqt52840.build.f_cpu=64000000
myqt52840.build.board=NRF52840_MYQT
myqt52840.build.core=nRF5
myqt52840.build.variant=myqt_nrf52840
myqt52840.build.usb_manufacturer="Milador"
myqt52840.build.usb_product="MyQt nRF52840"
myqt52840.build.extra_flags=-DNRF52840_XXAA {build.flags.usb}
myqt52840.build.ldscript=nrf52840_s140_v6.ld
myqt52840.build.vid=0x239A
myqt52840.build.pid=0x8087

# SoftDevice Menu
myqt52840.menu.softdevice.s140v6=S140 6.1.1
myqt52840.menu.softdevice.s140v6.build.sd_name=s140
myqt52840.menu.softdevice.s140v6.build.sd_version=6.1.1
myqt52840.menu.softdevice.s140v6.build.sd_fwid=0x00B6

# Debug Menu
myqt52840.menu.debug.l0=Level 0 (Release)
myqt52840.menu.debug.l0.build.debug_flags=-DCFG_DEBUG=0
myqt52840.menu.debug.l1=Level 1 (Error Message)
myqt52840.menu.debug.l1.build.debug_flags=-DCFG_DEBUG=1
myqt52840.menu.debug.l2=Level 2 (Full Debug)
myqt52840.menu.debug.l2.build.debug_flags=-DCFG_DEBUG=2
myqt52840.menu.debug.l3=Level 3 (Segger SystemView)
myqt52840.menu.debug.l3.build.debug_flags=-DCFG_DEBUG=3
myqt52840.menu.debug.l3.build.sysview_flags=-DCFG_SYSVIEW=1
```

  3. Add the variant source and header file to define myqt_nrf52840 pinout. Copy and paste files to C:\Users\\[User Name]\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\1.3.0\variants\myqt_nrf52840\

  4. Add bootloader files for the new myqt_nrf52840 device. Copy and paste files to C:\Users\\[User Name]\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\1.3.0\bootloader\myqt_nrf52840\
