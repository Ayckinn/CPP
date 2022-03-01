#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

//===============================================================================================//
void checkPath(std::string path, std::string here, std::string missing)
{
	if(std::filesystem::exists(path))
		std::system(here.c_str());
	else
		std::cout << missing;

	return;
}
//===============================================================================================//
int main()
{
    std::system("clear");
    std::system("echo $(export LC_ALL=C)");

    std::cout << "               +=============================+" << std::endl;
    std::cout << "               |         \033[1;32mSPYSIA v1.0\033[1;m         |" << std::endl;
    std::cout << "               +===+=====================+===+" << std::endl;
    std::cout << "                   |  \033[1;35m(c)2022 - Ayckinn\033[1;m  |"     << std::endl;
    std::cout << "                   +---------------------+"     << std::endl;
    std::cout << std::endl;
    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::cout << "     |              </GENERAL INFORMATION>             |" << std::endl;
    std::cout << "     +-------------------------------------------------+" << std::endl;
    std::system("echo \"\t  \033[1;32m✓   \033[1;35mOperating System \033[1;37m|\033[1;33m\" $(hostnamectl | head -n6 | cut -d \" \" -f3-4 | tail -n +6)");
    std::system("echo \"\t  \033[1;32m✓     \033[1;35mKernel version \033[1;37m|\033[1;33m\" $(uname -r)");
    std::cout << std::endl;
    std::system("echo \"\t  \033[1;32m✓           \033[1;35mHostname \033[1;37m|\033[1;33m\" $(hostnamectl | head -1 | cut -d \" \" -f4)");
    std::system("echo \"\t  \033[1;32m✓           \033[1;35mLocal IP \033[1;37m|\033[1;33m\" $(hostname -I | cut -d \" \" -f1)");
    std::system("echo \"\t  \033[1;32m✓          \033[1;35mPublic IP \033[1;37m|\033[1;33m\" $(wget http://ipecho.net/plain -O - -q; echo)");
    std::cout << std::endl; 
    std::system("echo \"\t  \033[1;32m✓        \033[1;35mLast update \033[1;37m|\033[1;33m\" $(ls -lt --time-style=\"long-iso\" /var/log/apt | grep -o '\\([0-9]\\{2,4\\}[- ]\\)\\{3\\}[0-9]\\{2\\}:[0-9]\\{2\\}' -m 1)");
   
   	checkPath("/usr/lib/update-notifier/apt-check", \
		"echo \"\t  \033[1;32m✓   \033[1;35mAvailable update \033[1;37m|\033[1;33m\" $(/usr/lib/update-notifier/apt-check --human-readable | head -n1 | cut -d \" \" -f1)", \
		"\t  \033[1;31m\033[1;31m✗   Available update \033[1;37m| \033[1;31mUnknown - $> sudo apt install update-notifier\n");
    std::cout << "\n\t \033[0;37m >> To see the list of available updates :\n";
    std::cout << "\t   $> /usr/lib/update-notifier/apt-check -p\n";
    std::cout << std::endl;

    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::cout << "     |                </SYSTEM COMMANDS>               |" << std::endl;
    std::cout << "     +-------------------------------------------------+" << std::endl;
    std::system("echo \"\t  \033[1;32m✓                \033[1;35mapt \033[1;37m|\033[1;33m\" $(apt -v | cut -d \" \" -f2)");

	checkPath("/usr/bin/bison", \
		"echo \"\t  \033[1;32m✓              \033[1;35mbison \033[1;37m|\033[1;33m\" $(bison --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗              bison \033[1;37m| \033[1;31mNot installed - $> sudo apt install bison\n");

	checkPath("/usr/bin/bzip2", \
		"echo \"\t  \033[1;32m✓              \033[1;35mbzip2 \033[1;37m|\033[1;33m\" $(bzip2 --version 2>&1 < /dev/null | head -n1 | cut -c 50-54)", \
		"\t  \033[1;31m✗              bzip2 \033[1;37m| \033[1;31mNot installed - $> sudo apt install bzip2\n");

	checkPath("/usr/bin/curl", \
		"echo \"\t  \033[1;32m✓               \033[1;35mcurl \033[1;37m|\033[1;33m\" $(curl --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗               curl \033[1;37m| \033[1;31mNot installed - $> sudo apt install curl\n");

	checkPath("/usr/bin/dfc", \
		"echo \"\t  \033[1;32m✓                \033[1;35mdfc \033[1;37m|\033[1;33m\" $(dfc -v | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗                dfc \033[1;37m| \033[1;31mNot installed - $> sudo apt install dfc\n");

	checkPath("/usr/bin/diff", \
		"echo \"\t  \033[1;32m✓               \033[1;35mdiff \033[1;37m|\033[1;33m\" $(diff --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗               diff \033[1;37m| \033[1;31mNot installed - $> sudo apt install diff\n");

	checkPath("/usr/bin/exa", \
		"echo \"\t  \033[1;32m✓                \033[1;35mexa \033[1;37m|\033[1;33m\" $(exa --version | head -n2 | cut -c 2-8 | tail +2)", \
		"\t  \033[1;31m✗                exa \033[1;37m| \033[1;31mNot installed - $> sudo apt install exa\n");

	checkPath("/usr/bin/find", \
		"echo \"\t  \033[1;32m✓               \033[1;35mfind \033[1;37m|\033[1;33m\" $(find --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗               find \033[1;37m| \033[1;31mNot installed - $> sudo apt install find\n");

	checkPath("/usr/bin/gawk", \
		"echo \"\t  \033[1;32m✓               \033[1;35mgawk \033[1;37m|\033[1;33m\" $(gawk --version | head -n1 | cut -c 9-13)", \
		"\t  \033[1;31m✗               gawk \033[1;37m| \033[1;31mNot installed - $> sudo apt install gawk\n");

	checkPath("/usr/bin/git", \
		"echo \"\t  \033[1;32m✓                \033[1;35mgit \033[1;37m|\033[1;33m\" $(git --version | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗                git \033[1;37m| \033[1;31mNot installed - $> sudo apt install git\n");

	checkPath("/usr/bin/grep", \
		"echo \"\t  \033[1;32m✓               \033[1;35mgrep \033[1;37m|\033[1;33m\" $(grep --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗               grep \033[1;37m| \033[1;31mNot installed - $> sudo apt install grep\n");

	checkPath("/usr/bin/gzip", \
		"echo \"\t  \033[1;32m✓               \033[1;35mgzip \033[1;37m|\033[1;33m\" $(gzip --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗               gzip \033[1;37m| \033[1;31mNot installed - $> sudo apt install gzip\n");

	checkPath("/usr/bin/ldd", \
		"echo \"\t  \033[1;32m✓                \033[1;35mldd \033[1;37m|\033[1;33m\" $(ldd --version | head -n1 | cut -d \" \" -f5)", \
		"\t  \033[1;31m✗                ldd \033[1;37m| \033[1;31mNot installed - $> sudo apt install ldd\n");

	checkPath("/usr/bin/m4", \
		"echo \"\t  \033[1;32m✓                 \033[1;35mm4 \033[1;37m|\033[1;33m\" $(m4 --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗                 m4 \033[1;37m| \033[1;31mNot installed - $> sudo apt install m4\n");

	checkPath("/usr/bin/make", \
		"echo \"\t  \033[1;32m✓               \033[1;35mmake \033[1;37m|\033[1;33m\" $(make --version | head -n1 | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗               make \033[1;37m| \033[1;31mNot installed - $> sudo apt install make\n");

	checkPath("/usr/bin/makeinfo", \
		"echo \"\t  \033[1;32m✓           \033[1;35mmakeinfo \033[1;37m|\033[1;33m\" $(makeinfo --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗           makeinfo \033[1;37m| \033[1;31mNot installed - $> sudo apt install texinfo\n");

	checkPath("/usr/bin/patch", \
		"echo \"\t  \033[1;32m✓              \033[1;35mpatch \033[1;37m|\033[1;33m\" $(patch --version | head -n1 | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗              patch \033[1;37m| \033[1;31mNot installed - $> sudo apt install patch\n");

	checkPath("/usr/bin/perl", \
		"echo \"\t  \033[1;32m✓               \033[1;35mperl \033[1;37m|\033[1;33m\" $(perl --version | head -n2 | cut -c 44-49 |tail +2)", \
		"\t  \033[1;31m✗               perl \033[1;37m| \033[1;31mNot installed - $> sudo apt install perl\n");

	checkPath("/usr/bin/sed", \
		"echo \"\t  \033[1;32m✓                \033[1;35msed \033[1;37m|\033[1;33m\" $(sed --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗                sed \033[1;37m| \033[1;31mNot installed - $> sudo apt install sed\n");

	checkPath("/usr/bin/snap", \
		"echo \"\t  \033[1;32m✓               \033[1;35msnap \033[1;37m|\033[1;33m\" $(snap --version | head -n1 | cut -c 9-14)", \
		"\t  \033[1;31m✗               snap \033[1;37m| \033[1;31mNot installed - $> sudo apt install snap\n");

	checkPath("/usr/bin/sudo", \
		"echo \"\t  \033[1;32m✓               \033[1;35msudo \033[1;37m|\033[1;33m\" $(sudo --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗               sudo \033[1;37m| \033[1;31mNot installed - $> sudo apt install sudo\n");

	checkPath("/usr/bin/tar", \
		"echo \"\t  \033[1;32m✓                \033[1;35mtar \033[1;37m|\033[1;33m\" $(tar --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗                tar \033[1;37m| \033[1;31mNot installed - $> sudo apt install tar\n");

	checkPath("/usr/bin/uptime", \
		"echo \"\t  \033[1;32m✓             \033[1;35muptime \033[1;37m|\033[1;33m\" $(uptime --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗             uptime \033[1;37m| \033[1;31mNot installed - $> sudo apt install uptime\n");

	checkPath("/usr/bin/wget", \
		"echo \"\t  \033[1;32m✓               \033[1;35mwget \033[1;37m|\033[1;33m\" $(wget --version | head -n1 | cut -c 11-14)", \
		"\t  \033[1;31m✗               wget \033[1;37m| \033[1;31mNot installed - $> sudo apt install wget\n");

	checkPath("/usr/bin/xz", \
		"echo \"\t  \033[1;32m✓                 \033[1;35mxz \033[1;37m|\033[1;33m\" $(xz --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗                 xz \033[1;37m| \033[1;31mNot installed - $> sudo apt install xz\n");
    std::cout << std::endl;

    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::cout << "     |                  </SYSTEM TOOLS>                |" << std::endl;
    std::cout << "     +-------------------------------------------------+" << std::endl;

	checkPath("/usr/bin/ld", \
		"echo \"\t  \033[1;32m✓           \033[1;35mbinutils \033[1;37m|\033[1;33m\" $(ld --version | head -n1 | cut -d \" \" -f7-7)", \
		"\t  \033[1;31m✗           binutils \033[1;37m| \033[1;31mNot installed - $> sudo apt install binutils\n");

	checkPath("/usr/bin/chown", \
		"echo \"\t  \033[1;32m✓          \033[1;35mcoreutils \033[1;37m|\033[1;33m\" $(chown --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗          coreutils \033[1;37m| \033[1;31mNot installed - $> sudo apt install coreutils\n");

	checkPath("/usr/sbin/fdisk", \
		"echo \"\t  \033[1;32m✓              \033[1;35mfdisk \033[1;37m|\033[1;33m\" $(fdisk --version | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗              fdisk \033[1;37m| \033[1;31mNot installed - $> sudo apt install fdisk\n");

	checkPath("/usr/bin/g++", \
		"echo \"\t  \033[1;32m✓          \033[1;35mg++ - gcc \033[1;37m|\033[1;33m\" $(g++ --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗          g++ - gcc \033[1;37m| \033[1;31mNot installed - $> sudo apt install g++\n");

	checkPath("/usr/bin/zsh", \
		"echo \"\t  \033[1;32m✓                \033[1;35mzsh \033[1;37m|\033[1;33m\" $(zsh --version | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗                zsh \033[1;37m| \033[1;31mNot installed - $> sudo apt install zsh*\n");
    std::cout << std::endl;
   
    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::system("echo  \"     |               </$(whoami | tr '[:lower:]' '[:upper:]') CLI TOOLS>              |\"");
    std::cout << "     +-------------------------------------------------+" << std::endl;

	checkPath("/usr/sbin/arp-scan", \
		"echo \"\t  \033[1;32m✓           \033[1;35marp-scan \033[1;37m|\033[1;33m\" $(arp-scan -V | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗           arp-scan \033[1;37m| \033[1;31mNot installed - $> sudo apt install arp-scan\n");

	checkPath("/usr/bin/glances", \
		"echo \"\t  \033[1;32m✓            \033[1;35mglances \033[1;37m|\033[1;33m\" $(glances --version | head -n1 | cut -c 29-33)", \
		"\t  \033[1;31m✗            glances \033[1;37m| \033[1;31mNot installed - $> sudo apt install glances\n");

	checkPath("/usr/bin/inxi", \
		"echo \"\t  \033[1;32m✓               \033[1;35minxi \033[1;37m|\033[1;33m\" $(inxi --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗               inxi \033[1;37m| \033[1;31mNot installed - $> sudo apt install inxi\n");

	checkPath("/usr/bin/mc", \
		"echo \"\t  \033[1;32m✓                 \033[1;35mmc \033[1;37m|\033[1;33m\" $(mc --version | head -n1 | cut -d \" \" -f4-4)", \
		"\t  \033[1;31m✗                 mc \033[1;37m| \033[1;31mNot installed - $> sudo apt install mc\n");

	checkPath("/usr/bin/mplayer", \
		"echo \"\t  \033[1;32m✓            \033[1;35mmplayer \033[1;37m|\033[1;33m\" $(mplayer -v | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗            mplayer \033[1;37m| \033[1;31mNot installed - $> sudo apt install mplayer\n");

	checkPath("/usr/bin/neofetch", \
		"echo \"\t  \033[1;32m✓           \033[1;35mneofetch \033[1;37m|\033[1;33m\" $(neofetch --version | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗           neofetch \033[1;37m| \033[1;31mNot installed - $> sudo apt install neofetch\n");

	checkPath("/usr/bin/python3", \
		"echo \"\t  \033[1;32m✓            \033[1;35mpython3 \033[1;37m|\033[1;33m\" $(python3 --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗            python3 \033[1;37m| \033[1;31mNot installed - $> sudo apt install python3\n");

	checkPath("/usr/bin/terminator", \
		"echo \"\t  \033[1;32m✓         \033[1;35mterminator \033[1;37m|\033[1;33m\" $(terminator --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗         terminator \033[1;37m| \033[1;31mNot installed - $> sudo apt install terminator\n");

	checkPath("/usr/bin/vim", \
		"echo \"\t  \033[1;32m✓                \033[1;35mvim \033[1;37m|\033[1;33m\" $(vim --version | head -n1 | cut -d \" \" -f5-5)", \
		"\t  \033[1;31m✗                vim \033[1;37m| \033[1;31mNot installed - $> sudo apt install vim\n");

	checkPath("/usr/bin/wordgrinder", \
		"echo \"\t  \033[1;32m✓        \033[1;35mwordgrinder \033[1;37m|\033[1;33m\" $(wordgrinder -h | head -n1 | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗        wordgrinder \033[1;37m| \033[1;31mNot installed - $> sudo apt install wordgrinder\n");
    std::cout << std::endl;

    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::system("echo  \"     |               </$(whoami | tr '[:lower:]' '[:upper:]') GUI TOOLS>              |\"");
    std::cout << "     +-------------------------------------------------+" << std::endl;

  	checkPath("/usr/bin/alacarte", \
		"echo \"\t  \033[1;32m✓           \033[1;35malacarte \033[1;37m|\033[1;33m\" $(apt list --installed 2>&1 < /dev/null | grep \"alacarte\" | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗           alacarte \033[1;37m| \033[1;31mNot installed - $> sudo apt install alacarte\n");

	checkPath("/usr/bin/audacity", \
		"echo \"\t  \033[1;32m✓           \033[1;35maudacity \033[1;37m|\033[1;33m\" $(apt list --installed 2>&1 < /dev/null | grep \"audacity\" | head -n2 | cut -c 21-25 | tail +2)", \
		"\t  \033[1;31m✗           audacity \033[1;37m| \033[1;31mNot installed - $> sudo apt install audacity\n");
    
	checkPath("/usr/bin/brave-browser", \
		"echo \"\t  \033[1;32m✓              \033[1;35mbrave \033[1;37m|\033[1;33m\" $(brave-browser --version | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗              brave \033[1;37m| \033[1;31mNot installed - See : https://brave.com/linux/#linux\n");

	checkPath("/usr/bin/easytag", \
		"echo \"\t  \033[1;32m✓            \033[1;35measytag \033[1;37m|\033[1;33m\" $(easytag --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗            easytag \033[1;37m| \033[1;31mNot installed - $> sudo apt install easytag\n");

	checkPath("/usr/bin/filezilla", \
		"echo \"\t  \033[1;32m✓          \033[1;35mfilezilla \033[1;37m|\033[1;33m\" $(filezilla -v | head -n2 | cut -c 10-16 | tail +2)", \
		"\t  \033[1;31m✗          filezilla \033[1;37m| \033[1;31mNot installed - $> sudo apt install filezilla\n");

	checkPath("/usr/bin/gnome-tweaks", \
		"echo \"\t  \033[1;32m✓       \033[1;35mgnome-tweaks \033[1;37m|\033[1;33m\" $(gnome-tweaks --version)", \
		"\t  \033[1;31m✗       gnome-tweaks \033[1;37m| \033[1;31mNot installed - $> sudo apt install gnome-tweaks\n");

	checkPath("/usr/sbin/gparted", \
		"echo \"\t  \033[1;32m✓            \033[1;35mgparted \033[1;37m|\033[1;33m\" $(apt list --installed 2>&1 < /dev/null | grep \"gparted\" | head -n2 | cut -c 20-24 | tail +2)", \
		"\t  \033[1;31m✗            gparted \033[1;37m| \033[1;31mNot installed - $> sudo apt install gparted\n");

	checkPath("/usr/sbin/gsmartcontrol", \
		"echo \"\t  \033[1;32m✓      \033[1;35mgsmartcontrol \033[1;37m|\033[1;33m\" $(gsmartcontrol --version | head -n2 | cut -d \" \" -f3 | tail +2)", \
		"\t  \033[1;31m✗      gsmartcontrol \033[1;37m| \033[1;31mNot installed - $> sudo apt install gsmartcontrol\n");

	checkPath("/snap/bin/libreoffice", \
		"echo \"\t  \033[1;32m✓        \033[1;35mlibreoffice \033[1;37m|\033[1;33m\" $(libreoffice --version | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗        libreoffice \033[1;37m| \033[1;31mNot installed - $> sudo snap install libreoffice -or- $> sudo apt install libreoffice-common\n");

	checkPath("/usr/bin/ophcrack", \
		"echo \"\t  \033[1;32m✓           \033[1;35mophcrack \033[1;37m|\033[1;33m\" $(ophcrack -h | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗           ophcrack \033[1;37m| \033[1;31mNot installed - $> sudo apt install ophcrack\n");

	checkPath("/usr/bin/subl", \
		"echo \"\t  \033[1;32m✓       \033[1;35msublime-text \033[1;37m|\033[1;33m\" $(subl --version | cut -d \" \" -f3-4)", \
		"\t  \033[1;31m✗       sublime-text \033[1;37m| \033[1;31mNot installed - see : https://www.sublimetext.com/docs/linux_repositories.html\n");

	checkPath("/usr/sbin/synaptic", \
		"echo \"\t  \033[1;32m✓           \033[1;35msynaptic \033[1;37m|\033[1;33m\" $(synaptic --help  | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗           synaptic \033[1;37m| \033[1;31mNot installed - $> sudo apt install synaptic\n");

	checkPath("/usr/bin/teamviewer", \
		"echo \"\t  \033[1;32m✓         \033[1;35mteamviewer \033[1;37m|\033[1;33m\" $(apt list --installed 2>&1 < /dev/null | grep \"teamviewer\" | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗         teamviewer \033[1;37m| \033[1;31mNot installed - $> sudo apt install teamviewer\n");

	checkPath("/usr/bin/thunderbird", \
		"echo \"\t  \033[1;32m✓        \033[1;35mthunderbird \033[1;37m|\033[1;33m\" $(thunderbird --version | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗        thunderbird \033[1;37m| \033[1;31mNot installed - $> sudo apt install thunderbird\n");

	checkPath("/snap/bin/vlc", \
		"echo \"\t  \033[1;32m✓                \033[1;35mvlc \033[1;37m|\033[1;33m\" $(vlc --version 2>&1 < /dev/null | head -n1 | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗                vlc \033[1;37m| \033[1;31mNot installed - $> sudo snap install vlc\n");
    std::cout << std::endl;

    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::cout << "     |              </G++ COMPILATION TEST>            |" << std::endl;
    std::cout << "     +-------------------------------------------------+" << std::endl;
    std::system("echo 'int main(){}' > testcomp.c && g++ -o testcomp testcomp.c");

    std::ifstream testcomp;
    testcomp.open("testcomp");
    if(testcomp)
       std::cout << "\n\t           \033[1;32m✓ COMPILATION => DONE...\n";
    else
    {
       std::cout << "\n\t           \033[1;31m✗ COMPILATION => FAILED...\n";
       std::cout << "                  Test file or g++ not found !\n";
    }
    std::remove("testcomp");
    std::remove("testcomp.c");
    std::cout << std::endl;

    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::cout << "     |                </LIBRARIES TOOLS>               |" << std::endl;
    std::cout << "     +-------------------------------------------------+" << std::endl;
    std::cout << "        \033[1;32mBINUTILS \033[1;37m| \033[0;37mhttp://fr.linuxfromscratch.org/view/lfs-systemd-stable/chapter08/binutils.html#contents-binutils"   << std::endl;
    std::cout << "       \033[1;32mCOREUTILS \033[1;37m| \033[0;37mhttp://fr.linuxfromscratch.org/view/lfs-systemd-stable/chapter08/coreutils.html#contents-coreutils" << std::endl;
    std::cout << "       \033[1;32mFINDUTILS \033[1;37m| \033[0;37mhttp://fr.linuxfromscratch.org/view/lfs-systemd-stable/chapter08/findutils.html#contents-findutils" << std::endl;
    std::cout << "         \033[1;32mG++/GCC \033[1;37m| \033[0;37mhttp://fr.linuxfromscratch.org/view/lfs-systemd-stable/chapter08/gcc.html#contents-gcc"             << std::endl;
    std::cout << "           \033[1;32mGLIBC \033[1;37m| \033[0;37mhttp://fr.linuxfromscratch.org/view/lfs-systemd-stable/chapter08/glibc.html#contents-glibc"         << std::endl;
    std::cout << "            \033[1;32mGZIP \033[1;37m| \033[0;37mhttp://fr.linuxfromscratch.org/view/lfs-systemd-stable/chapter08/gzip.html#contents-gzip"           << std::endl;
    std::cout << "         \033[1;32mNCURSES \033[1;37m| \033[0;37mhttp://fr.linuxfromscratch.org/view/lfs-systemd-stable/chapter08/ncurses.html#contents-ncurses"     << std::endl;
    std::cout << "\033[1;m" << std::endl;

	return EXIT_SUCCESS;
}