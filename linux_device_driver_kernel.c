-lecutre_08:Pinctrl and GPIO
    -talk about BJT transistor
    -how to use dtc to get the whole dts file from dtb
-Lecture_09:Pintrl and GPIO
    -Pinctrl with various state
-Lecture_10
        -iterrupt and linux kernel

-1)i2c using character device driver approach NOT platform approach
    -The reason for using character device driver is need to return sth to the application layer as copy_to
  ->Lecture 22.3->https://www.bilibili.com/video/BV1fJ411i7PB?p=77&vd_source=352d86e561ef82fd069e1251bfae8933
    -(19:15)
  -Lecture 22.4->https://www.bilibili.com/video/BV1fJ411i7PB?p=78&vd_source=352d86e561ef82fd069e1251bfae8933
  -Lecture 22.5->
  -Lecture 22.6
->spi 
  -Lecture 23.1
  -Lecture 23.2
    -using "ioremap" in other vendors spi controller (26:17)
    -NXP->using much more complex way to do so such as using structure of bibang (26:17)
   -Lecture 23.3->SPI driver
      ->spi_device
      ->spi_driver (6:40)(7:16)
    -(13:55)
  -Lecture 23.4
    -(7:31)
    -the rest will be really similar to I2C part for character driver (14:12)
    -Why don't we use platform driver into I2C and SPI?
    -The reason is that I2C and SPI has its own hiearchy architecture therefore we need to use it. For the platform driver->we ONLY utilize this one if there is no built in hierachy or architecture (15:27)
    -Be aware that even though it is a platform driver, we still need to creacte character device (15:00)
    -Need to use LINUX kernel API to read/write SPI (18:58)
    -SPI transfer async and sync (25:23)
  -Lecture 23.5
      - (00:34)
      -using external GPIO as chip select (00:45)
      -rests skip for now**********************************************************
  -Lecture 24.1_UART
      - (00:42)(1:32)
      -UART_port and UART_driver (4:56)
      -Be aware of uart_ops (10:04)
      - TTY and UART are combined (14:00)
      -IOMAP (21:01) with base address then start to use base address (21:02)
      -uart may support RS-485 but required more configuration (23:14)
  -Lecture 24.2_UART
      - (4:12)
      -Need to know if UART1 <->ttymc0->we need to check manually (10:54)
     -Instead of writing app to do the test->we could use minocom to do so (11:51)
  -Lecture 24.3_porting ncursees
      -be aware that don't mess up between ARM and x86 otherwise things may not work (15:59)
      -need to edit /etc/passwrd ->relate sth for user name and password (30:22)
  -Lecture 24.4_UART
    -be aware of jumper (1:48)
    -How to set up minicom (4:33)
    -minicom need to clear the screen (10:30)
    -linux uart protocol (串口编程)
-
  -
  -
-
  -
  -
-
  -
  -
-
  -
  -
-
  -
  -
-
  -
  -
-
  -
  -
-
  -
  -
-
  -
  -
-
  -
  -
-
  -
  -
