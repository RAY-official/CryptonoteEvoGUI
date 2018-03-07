# Installation instructions
## Cryptonote (GUI wallet with miner)

## Install for Ubuntu 16|14:
1. download repo from github
```
git clone https://github.com/FndNur1Labs/CryptonoteEvoGUI.git
```
2. change directory to CryptonoteEvoGUI
```
cd CryptonoteEvoGUI
```
3. change mode install.sh
```
chmod +x install.sh
```
4. run install.sh
```
./install.sh
```
5. make directory build, change directory to build, call cmake, and make
```
mkdir build && cd build && cmake .. && make
```
6. run hongbaowallet
```
./Hongbao
```



## Install for Windows 10 64bit:
1. hit windows key search **windows update settings**. Left hand side click **for developer** then check **developer mode**. 
Wait for install to finish, then close windows update settings.

2. hit windows key go to: **Control Panel\Programs** click **turn windows feature on and off** next check **windows subsystem for linux** 
Restart your computer.

3. download [VCXSRV server for windows](https://sourceforge.net/projects/vcxsrv/files/latest/download) Follow default installation and run. *VCXSRV server must be ran prior to running this wallet everytime*

4. download [UBUNTU for Windows](https://www.microsoft.com/store/productId/9NBLGGH4MSV6)

5. hit windows key and search **ubuntu** open program. *Install will automatically happen then create your user name and password*

6. install updates
```
sudo apt update
```
7. direct ubuntu to use VCXSRV server 
```
export DISPLAY=:0
```
8. install git 
```
sudo apt install git
```
9. install HongBaoWallet
```
git clone https://github.com/FndNur1Labs/CryptonoteEvoGUI.git
```
10. change directory 
```
cd CryptonoteEvoGUI
```
11. change mode install.sh
```
chmod +x install.sh
```
12. run install.sh
```
./install.sh
```
13. make directory build, change directory build, call cmake, and make
```
mkdir build && cd build && cmake .. && make
```
14. run HongBaoWallet *note wallet must sync with blockchain and directory is hongbaowallet/build/ ./Hongbao*
```
./Hongbao
```

If you have any issues contact us on our [TelegramChannel](https://t.me/hongbaoblockchain_support)
Make sure you follow instructions first and put effort into why its not working. 
Its usually human error skipping a step or typo.


Credits By Ecolite[Our CryptonoteEvo Team]




