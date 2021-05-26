该程序实现了基于HAL库的STM32 USB 虚拟网卡通信

烧写到STM32F401单片机(晶振25兆 PB6&PB7接串口)后,usb接电脑,电脑可以看到网卡.wireshark对该网卡抓包可以看到"eset of all peripherals, Initializes the Flash interface and the Systick"这样的字符串,表明下位机数据可以发给上位机.串口可以看到电脑发出的DNS ARP DHCP请求等数据包,内容与wireshark抓到的一致.

TODO 实现以太网相关协议 与LWIP或数传模块集成以实现免客户端操作下位机/即插即用无线网卡功能

感谢[fetisov](https://github.com/fetisov)提供RNDIS示例代码https://github.com/fetisov/lrndis

感谢[waclawek.jan](https://community.st.com/s/profile/0050X000007vqmpQAA) (https://community.st.com/s/question/0D53W000000aCEW/usb-cdc-device-on-stm32h750bdk-problem-with-dtxfsts-register)解答了关键问题

