# Chrome App for Avalon Nano

## Launch
Ref: https://developer.chrome.com/apps/first_app#load

* Bring up the apps and extensions management page by clicking the settings icon and choosing Tools > Extensions.

* Make sure the Developer mode checkbox has been selected.

* Click the Load unpacked extension button, navigate to your app's folder and click OK.

## UDEV Rule for Linux
`KERNEL=="hidraw*", SUBSYSTEM=="hidraw", ATTRS{idVendor}=="29f1", MODE="0664", GROUP="plugdev"`


## Links
* https://github.com/progranism/Bitcoin-JavaScript-Miner
* https://github.com/bitcoinjs/bitcoinjs-lib
* https://github.com/derjanb/hamiyoca