#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>
#include <Windows.h>
#include <fstream>
#include <filesystem>
#include<stdio.h>
#include <conio.h>
#define wgeti system("choco install wget -y");
#define wait1 std::this_thread::sleep_for(std::chrono::seconds(1));
#define clear std::cout << "\033[2J\033[1;1H";
using namespace std;

bool checkInternet() {
    int status = system("ping -c 1 google.com");
    return (status == 0);
}

void browserselect() {
    std::string input;
    system("echo Milyen böngészöt szeretne?: ");
    system("echo (chrome vagy firefox) ");
    std::cin >> input;
    if (input == "chrome" || input == "Chrome") {
        system("choco install googlechrome -y");
        system("echo TelepItés kész ");
        system("pause");
    }
    else if (input == "firefox" || input == "Firefox") {
        system("choco install firefox -y");
        system("echo TelepItés kész ");
        system("pause");

    }
    else {
        system("echo Semmijen böngésző nem lett telepItve  ");
        system("pause");
    }
}

void devActive() {
    cout << "Irjon be devflag-et \n";
    cout << "(browserinstall,wgetinstall,adddummychoco) \n";
    std::string input;
    std::cin >> input;
    if (input == "browserinstall" || input == "Browserinstall") {
        browserselect();

    }
    if (input == "wgetinstall" || input == "Wgetinstall") {
        wgeti
            system("pause");

    }
    if (input == "adddummychoco" || input == "Adddummychoco") {
        std::ofstream outfile("C:\\ProgramData\\chocolatey\\bin\\choco.exe");
    }
    else {
        cout << "Nem heligen devflag-et Irt be \n";
        //goto main
    }
}

void devMenuCheck() {
    const int ESC = 27;
    bool escPressed = false;

    // Wait for ESC key or timeout
    //By the way why didnt i use the other timer???????
    auto start = std::chrono::high_resolution_clock::now();
    while (!escPressed) {
        if (_kbhit()) {
            char key = _getch();
            if (key == ESC) {
                escPressed = true;
            }
        }

        auto now = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(now - start).count();
        if (duration >= 1000) {
            break; // 1s Timeout
        }
    }

    if (escPressed) {
        std::cout << " ________  ___       __                  ___     \n";
        std::cout << "|\\   ____\\|\\  \\     |\\  \\               |\\  \\    \n";
        std::cout << "\\ \\  \\___|\\ \\  \\    \\ \\  \\  ____________\\ \\  \\   \n";
        std::cout << " \\ \\  \\    \\ \\  \\  __\\ \\  \\|\\____________\\ \\  \\  \n";
        std::cout << "  \\ \\  \\____\\ \\  \\|\\__\\_\\  \\|____________|\\ \\  \\ \n";
        std::cout << "   \\ \\_______\\ \\____________\\              \\ \\__\\\n";
        std::cout << "    \\|_______|\\|____________|               \\|__|\n";
        std::cout << "\n";
        std::cout << "DEVMENU AKTIV \n";
        wait1
            devActive();

    }
    else {
        //goto main :)
    }
}


int main() {
    int skip = 0;
    system("Title CW-I");
    devMenuCheck();
    char key;
    bool sKeyPressed = false;
    auto startTime = std::chrono::high_resolution_clock::now();

    while (true) {
        if (_kbhit()) {
            key = _getch();
            if (key == 's' || key == 'S') {
                sKeyPressed = true;
                break;
            }
        }

        auto currentTime = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count();

        if (duration >= 1000) {
            break;
        }
    }

    if (sKeyPressed) {
        skip = 1;
        cout << "Checks skipped";
    }
    //checking internet
    // If 'skip' is not equal to 1, perform internet check
    if (skip != 1) {
        if (checkInternet()) {
            std::cout << "Internet check passed!" << std::endl;
        }
        else {
            // No internet or admin privileges detected
            std::cout << "\033[2J\033[1;1H";
            std::cout << "No internet or admin privileges detected! Please connect to the internet or rerun the program." << std::endl;
            system("pause");
            main();
        }
    }
        //internet check passed
        std::cout << "\033[2J\033[1;1H";
        //Intro here
        std::cout << " ________  ___       __                  ___     \n";
        std::cout << "|\\   ____\\|\\  \\     |\\  \\               |\\  \\    \n";
        std::cout << "\\ \\  \\___|\\ \\  \\    \\ \\  \\  ____________\\ \\  \\   \n";
        std::cout << " \\ \\  \\    \\ \\  \\  __\\ \\  \\|\\____________\\ \\  \\  \n";
        std::cout << "  \\ \\  \\____\\ \\  \\|\\__\\_\\  \\|____________|\\ \\  \\ \n";
        std::cout << "   \\ \\_______\\ \\____________\\              \\ \\__\\\n";
        std::cout << "    \\|_______|\\|____________|               \\|__|\n";
        std::cout << "\n";
        system("echo KészItette: VPeti ");
        system("pause");
        wait1
            std::cout << "\033[2J\033[1;1H";
        system("echo Betöltés: 30% ");
        wait1
            std::cout << "\033[2J\033[1;1H";
        system("echo Betöltés: 60% ");
        wait1
            std::cout << "\033[2J\033[1;1H";
        system("echo Beöltés: 90% ");
        wait1
            std::cout << "\033[2J\033[1;1H";
        //to here

        // try to open file to read
        ifstream ifile;
        ifile.open("C:\\ProgramData\\chocolatey\\bin\\choco.exe");
        if (ifile) {
            //if exists it runs the program
            system("echo Üdvözöljük a CW-ben ");
            //Choice maker 2000
            std::string input;
            system("echo Az alap telepItési módhoz Irja be hogy basic ");
            system("echo A gamer telepItési módhoz Irja be hogy gamer");
            system("echo Az egyéni telepItési módhoz Irja be hogy custom");
            system("echo A fejlesztö telepItési módhoz Irja be hogy developer");
            system("echo A kilépéshez Irja be hogy exit ");
            system("echo A névjegy megjelenItéshez Irja be hogy about ");
            system("echo A frissItéshez Irja be hogy update ");
            system("echo A CWCare-I elindItásához Irja be a care szót ");
            std::cin >> input;
            if (input == "gamer" || input == "Gamer") {
                clear
                    //runs command basic and gamer apps
                    system("choco install vlc notepadplusplus phyton winrar jre8 steam epicgameslaucher discord -y");
                //browser selector
                browserselect();

            }
            else if (input == "alap" || input == "Alap") {
                clear
                    //runs command basic apps
                    system("choco install vlc imgburn notepadplusplus phyton winrar jre8 -y");
                std::string input;
                system("echo Akar libreoffice-t?: ");
                std::cin >> input;
                if (input == "igen" || input == "Igen") {
                    browserselect();
                    main();
                    }
                    

                

                else {
                    //browser selector
                    browserselect();
                    main();


                }

            }
            else if (input == "debloat" || input == "Debloat") {
                clear
                    system("md C:\\CW");
                //install winaero and unzip
                system("choco install winaero-tweaker wget -y");
                //downloads debloat
                system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/deb.ps1 -O C:\\CW\\CWI.ps1");
                //run & pray
                system("powershell C:\\CW\\CWI.ps1");
                system("echo Debloat kész ");
                system("pause");
                main();


            }
            else if (input == "about" || input == "About") {
                system("echo CW-I v1.7.0 Magyar verzió ");
                system("pause");
                main();


            }
            else if (input == "exit" || input == "Exit") {
                clear
                    system("echo Viszlát!");
                wait1

            }
            else if (input == "custom" || input == "Custom") {
                clear
                    std::string input;
                system("echo Irja be a program(ok) nevét: ");
                std::cin >> input;
                system(("cmd /c choco install " + input).c_str());
                system("pause");
                main();


            }

            else if (input == "developer" || input == "Developer") {
                clear
                system("choco install vlc imgburn notepadplusplus phyton winrar jre8 vscode visualstudio2022community wget msys2 -y");
                //browser selector
                browserselect();
                main();

            }

            else if (input == "care" || input == "Care") {
                clear
                std::cout << "  ________  ___       __   ________  ________  ________  _______                  ___     " << std::endl;
                std::cout << "|\\   ____\\|\\  \\     |\\  \\|\\   ____\\|\\   __  \\|\\   __  \\|\\  ___ \\                |\\  \\    " << std::endl;
                std::cout << "\\ \\  \\___|\\ \\  \\    \\ \\  \\ \\  \\___|\\ \\  \\|\\  \\ \\  \\|\\  \\ \\   __/|   ____________\\ \\  \\   " << std::endl;
                std::cout << " \\ \\  \\    \\ \\  \\  __\\ \\  \\ \\  \\    \\ \\   __  \\ \\   _  _\\ \\  \\_|/__|\\____________\\ \\  \\  " << std::endl;
                std::cout << "  \\ \\  \\____\\ \\  \\|\\__\\_\\  \\ \\  \\____\\ \\  \\ \\  \\ \\  \\\\  \\\\ \\  \\_|\\ \\|____________|\\ \\  \\ " << std::endl;
                std::cout << "   \\ \\_______\\ \\____________\\ \\_______\\ \\__\\ \\__\\ \\__\\\\ _\\\\ \\_______\\              \\ \\__\\" << std::endl;
                std::cout << "    \\|_______|\\|____________|\\|_______|\\|__|\\|__|\\|__|\\|__|\\|_______|               \\|__|" << std::endl;
                system("pause");
                system("choco install wget -y");
                system("md C:\\CW");
                system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/CWCare-I.bat -O C:\\CW\\care.bat");
                system("cmd /c C:\\CW\\care.bat");
                system("echo TisztItás kész");
                system("pause");
                clear
                    main();
            }

            else if (input == "update" || input == "Update") {
                clear
                    system("echo A legújabb fájl letöltése ");
                system("choco install wget -y");
                system("wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/CWIH.EXE -O %HOMEDRIVE%%HOMEPATH%\\Desktop\\CWIH.exe");
                system("cmd /c %HOMEDRIVE%%HOMEPATH%\\Desktop\\CWI.exe");
                system("pause");
                wait1
            }


            else
            {
                //If the user enters something wrong it resets
                system("echo Próbáld újra ");
                system("pause");
                main();
            }
        }

        else {
            system("echo Nem észlelhetö chocolatey ");
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "\033[2J\033[1;1H";
            system("pause");
            system("echo A chocolatey letöltése folyamatban. ");
            system("echo NE KAPCSOLÓDJON LE AZ INTERNETRÖL, ÉS NE ZÁRJA EZT AZ ABLAKOT! ");
            //install choco with BPS
            system("echo powershell Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))");
            //creates the file
            system("echo A chocolatey telepItése kész");
            system("pause");
            main();
        }
    }



