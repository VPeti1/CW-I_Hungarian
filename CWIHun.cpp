#include <chrono>
#include <cstdlib>
#include <iostream>
#include <string>
#include <thread>
#include <Windows.h>
#include <fstream>
#include <filesystem>
#include<stdio.h>
#define wait1 std::this_thread::sleep_for(std::chrono::seconds(1));
#define clear std::cout << "\033[2J\033[1;1H";
using namespace std;

int main() {
    system("Title CW-I");
    //checking internet
    int status = system("echo ping -c 1 google.com");
    if (status != 0) {
        //no more interwebs or adminnnn privs
        std::cout << "\033[2J\033[1;1H";
        system("echo Nincs internet vagy administrátor jog! Indítsa újra a programot");;
        system("pause");
        main();
    }
    else {
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
        system("echo Készítette VPeti ");
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
            system("echo Az alap telepítési módhoz írja be hogy basic ");
            system("echo A gamer telepítési módhoz írja be hogy gamer");
            system("echo Az egyéni telepítési módhoz írja be hogy custom");
            system("echo A fejlesztö telepítési módhoz írja be hogy developer");
            system("echo A kilépéshez írja be hogy exit ");
            system("echo A névjegy megjelenítéshez írja be hogy about ");
            system("echo A frissítéshez írja be hogy update ");
            system("echo A CWCare-I elindításához írja be a care szót ");
            std::cin >> input;
            if (input == "gamer" || input == "Gamer") {
                clear
                    //runs command basic and gamer apps
                    system("choco install vlc notepadplusplus phyton winrar jre8 steam epicgameslaucher discord -y");
                //browser selector
                std::string input;
                system("echo Milyen böngészöt szeretne?: ");
                system("echo (chrome vagy firefox) ");
                std::cin >> input;
                if (input == "chrome" || input == "Chrome") {
                    system("choco install googlechrome -y");
                    system("echo Telepítés kész ");
                    system("pause");
                    main();
                }
                else if (input == "firefox" || input == "Firefox") {
                    system("choco install firefox -y");
                    system("echo Telepítés kész ");
                    system("pause");
                    main();

                }
                else {
                    system("echo Telepítés kész ");
                    system("pause");
                    main();
                }

            }
            else if (input == "alap" || input == "Alap") {
                clear
                    //runs command basic apps
                    system("choco install vlc imgburn notepadplusplus phyton winrar jre8 -y");
                std::string input;
                system("echo Akar libreoffice-t?: ");
                std::cin >> input;
                if (input == "yes" || input == "Yes") {
                    system("choco install libreoffice -y");
                    //install browser
                    std::string input;
                    system("echo Milyen böngészöt szeretne?: ");
                    system("echo (chrome vagy firefox) ");
                    std::cin >> input;
                    if (input == "chrome" || input == "Chrome") {
                        system("choco install googlechrome -y");
                        system("echo Telepítés kész ");
                        system("pause");
                        main();
                    }
                    else {
                        system("choco install firefox -y");
                        system("echo Telepítés kész ");

                    }

                }

                else {
                    //browser selector
                    std::string input;
                    system("echo Milyen böngészöt szeretne?: ");
                    system("echo (chrome vagy firefox) ");
                    std::cin >> input;
                    if (input == "chrome" || input == "Chrome") {
                        system("choco install googlechrome -y");
                        system("echo Telepítés kész ");
                        system("pause");
                        main();
                    }
                    else if (input == "firefox" || input == "Firefox") {
                        system("choco install firefox -y");
                        system("echo Telepítés kész ");
                        system("pause");
                        main();

                    }
                    else {
                        system("echo Telepítés kész ");
                        system("pause");
                        main();
                    }


                }

            }
            else if (input == "debloat" || input == "Debloat") {
                clear
                    system("echo md C:\\CW");
                //install winaero and unzip
                system("choco install winaero-tweaker wget -y");
                //downloads debloat
                system("echo wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/deb.ps1 -O C:\\CW\\CWI.ps1");
                //run & pray
                system("echo powershell C:\\CW\\CWI.ps1");
                system("echo Debloat complete ");
                system("pause");
                main();


            }
            else if (input == "about" || input == "About") {
                system("echo CW-I v1.6.0 Magyar verzió ");
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
                system("echo Írja be a program(ok) nevét: ");
                std::cin >> input;
                system(("cmd /c choco install " + input).c_str());
                system("pause");
                main();


            }

            else if (input == "developer" || input == "Developer") {
                clear
                    system("choco install vlc imgburn notepadplusplus phyton winrar jre8 vscode visualstudio2022community wget msys2 -y");
                //browser selector
                std::string input;
                system("echo Milyen böngészöt szeretne?: ");
                system("echo (chrome vagy firefox) ");
                std::cin >> input;
                if (input == "chrome" || input == "Chrome") {
                    system("choco install googlechrome -y");
                    system("echo Telepítés kész ");
                    system("pause");
                    main();
                }
                else if (input == "firefox" || input == "Firefox") {
                    system("choco install firefox -y");
                    system("echo Telepítés kész ");
                    system("pause");
                    main();

                }




                else {
                    system("echo Telepítés kész ");
                    system("pause");
                    main();
                }

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
                system("echo md C:\\CW");
                system("echo wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/CWCare-I.bat -O C:\\CW\\care.bat");
                system("echo cmd /c C:\\CW\\care.bat");
                system("echo Tisztítás kész");
                system("pause");
                clear
                    main();
            }

            else if (input == "update" || input == "Update") {
                clear
                    system("echo A legújabb fájl letöltése ");
                system("choco install wget -y");
                system("echo wget https://raw.githubusercontent.com/VPeti1/CWAcces/main/CWIH.EXE -O %HOMEDRIVE%%HOMEPATH%\\Desktop\\CWIH.exe");
                system("echo A fájl letöltve az asztalra ");
                system("echo Kérjük futtassa a fájlt ");
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
            system("echo NE KAPCSOLJON LE AZ INTERNETRÖL, ÉS NE ZÁRJA EZT AZ ABLAKOT! ");
            //install choco with BPS
            system("echo powershell Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))");
            //creates the file
            system("echo A chocolatey telepítése kész");
            system("pause");
            main();
        }
    }
}


