#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

//===============================================================================================//
void checkPath(std::string pathA, std::string pathB, std::string pathC, std::string (pathD), std::string here, std::string missing)
{
	if(std::filesystem::exists(pathA) || std::filesystem::exists(pathB) || std::filesystem::exists(pathC) || std::filesystem::exists(pathD))
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
   
   	checkPath("/usr/lib/update-notifier/apt-check", "/usr/local/lib/update-notifier/apt-check", "/usr/bin/update-notifier/apt-check", "/snap/bin/apt-check", \
		"echo \"\t  \033[1;32m✓   \033[1;35mAvailable update \033[1;37m|\033[1;33m\" $(/usr/lib/update-notifier/apt-check --human-readable | head -n1 | cut -d \" \" -f1)", \
		"\t  \033[1;31m\033[1;31m✗   Available update \033[1;37m| \033[1;31mUnknown - $> sudo apt install update-notifier\n");
    std::cout << "\n\t \033[0;37m >> To see the list of available updates :\n";
    std::cout << "\t   $> /usr/lib/update-notifier/apt-check -p\n";
    std::cout << std::endl;

    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::cout << "     |                </SYSTEM COMMANDS>               |" << std::endl;
    std::cout << "     +-------------------------------------------------+" << std::endl;
    std::system("echo \"\t  \033[1;32m✓                \033[1;35mapt \033[1;37m|\033[1;33m\" $(apt -v | cut -d \" \" -f2)");

	checkPath("/usr/bin/bison", "/usr/sbin/bison", "/usr/local/bin/bison", "/snap/bin/bison", \
		"echo \"\t  \033[1;32m✓              \033[1;35mbison \033[1;37m|\033[1;33m\" $(bison --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗              bison \033[1;37m| \033[1;31mNot installed - $> sudo apt install bison\n");

	checkPath("/usr/bin/bzip2", "/usr/sbin/bzip2", "/usr/local/bin/bzip2", "/snap/bin/bzip2", \
		"echo \"\t  \033[1;32m✓              \033[1;35mbzip2 \033[1;37m|\033[1;33m\" $(bzip2 --version 2>&1 < /dev/null | head -n1 | cut -c 50-54)", \
		"\t  \033[1;31m✗              bzip2 \033[1;37m| \033[1;31mNot installed - $> sudo apt install bzip2\n");

	checkPath("/usr/bin/curl","/usr/sbin/curl", "/usr/local/bin/curl", "/snap/bin/curl", \
		"echo \"\t  \033[1;32m✓               \033[1;35mcurl \033[1;37m|\033[1;33m\" $(curl --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗               curl \033[1;37m| \033[1;31mNot installed - $> sudo apt install curl\n");

	checkPath("/usr/bin/dfc","/usr/sbin/dfc", "/usr/local/bin/dfc", "/snap/bin/dfc", \
		"echo \"\t  \033[1;32m✓                \033[1;35mdfc \033[1;37m|\033[1;33m\" $(dfc -v | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗                dfc \033[1;37m| \033[1;31mNot installed - $> sudo apt install dfc\n");

	checkPath("/usr/bin/diff","/usr/sbin/diff", "/usr/local/bin/diff", "/snap/bin/diff", \
		"echo \"\t  \033[1;32m✓               \033[1;35mdiff \033[1;37m|\033[1;33m\" $(diff --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗               diff \033[1;37m| \033[1;31mNot installed - $> sudo apt install diff\n");

	checkPath("/usr/bin/exa","/usr/sbin/exa", "/usr/local/bin/exa", "/snap/bin/exa", \
		"echo \"\t  \033[1;32m✓                \033[1;35mexa \033[1;37m|\033[1;33m\" $(exa --version | head -n2 | cut -c 2-8 | tail +2)", \
		"\t  \033[1;31m✗                exa \033[1;37m| \033[1;31mNot installed - $> sudo apt install exa\n");

	checkPath("/usr/bin/find","/usr/sbin/find", "/usr/local/bin/find", "/snap/bin/find", \
		"echo \"\t  \033[1;32m✓               \033[1;35mfind \033[1;37m|\033[1;33m\" $(find --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗               find \033[1;37m| \033[1;31mNot installed - $> sudo apt install find\n");

	checkPath("/usr/bin/gawk","/usr/sbin/gawk", "/usr/local/bin/gawk", "/snap/bin/gawk", \
		"echo \"\t  \033[1;32m✓               \033[1;35mgawk \033[1;37m|\033[1;33m\" $(gawk --version | head -n1 | cut -c 9-13)", \
		"\t  \033[1;31m✗               gawk \033[1;37m| \033[1;31mNot installed - $> sudo apt install gawk\n");

	checkPath("/usr/bin/git","/usr/sbin/git", "/usr/local/bin/git", "/snap/bin/git", \
		"echo \"\t  \033[1;32m✓                \033[1;35mgit \033[1;37m|\033[1;33m\" $(git --version | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗                git \033[1;37m| \033[1;31mNot installed - $> sudo apt install git\n");

	checkPath("/usr/bin/grep","/usr/sbin/grep", "/usr/local/bin/grep", "/snap/bin/grep", \
		"echo \"\t  \033[1;32m✓               \033[1;35mgrep \033[1;37m|\033[1;33m\" $(grep --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗               grep \033[1;37m| \033[1;31mNot installed - $> sudo apt install grep\n");

	checkPath("/usr/bin/gzip","/usr/sbin/gzip", "/usr/local/bin/gzip", "/snap/bin/gzip", \
		"echo \"\t  \033[1;32m✓               \033[1;35mgzip \033[1;37m|\033[1;33m\" $(gzip --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗               gzip \033[1;37m| \033[1;31mNot installed - $> sudo apt install gzip\n");

	checkPath("/usr/bin/ldd", "/usr/sbin/ldd", "/usr/local/bin/ldd", "/snap/bin/ldd", \
		"echo \"\t  \033[1;32m✓                \033[1;35mldd \033[1;37m|\033[1;33m\" $(ldd --version | head -n1 | cut -d \" \" -f5)", \
		"\t  \033[1;31m✗                ldd \033[1;37m| \033[1;31mNot installed - $> sudo apt install ldd\n");

	checkPath("/usr/bin/m4","/usr/sbin/m4", "/usr/local/bin/m4", "/snap/bin/m4", \
		"echo \"\t  \033[1;32m✓                 \033[1;35mm4 \033[1;37m|\033[1;33m\" $(m4 --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗                 m4 \033[1;37m| \033[1;31mNot installed - $> sudo apt install m4\n");

	checkPath("/usr/bin/make","/usr/sbin/make", "/usr/local/bin/make", "/snap/bin/make", \
		"echo \"\t  \033[1;32m✓               \033[1;35mmake \033[1;37m|\033[1;33m\" $(make --version | head -n1 | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗               make \033[1;37m| \033[1;31mNot installed - $> sudo apt install make\n");

	checkPath("/usr/bin/makeinfo","/usr/sbin/makeinfo", "/usr/local/bin/makeinfo", "/snap/bin/makeinfo", \
		"echo \"\t  \033[1;32m✓           \033[1;35mmakeinfo \033[1;37m|\033[1;33m\" $(makeinfo --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗           makeinfo \033[1;37m| \033[1;31mNot installed - $> sudo apt install texinfo\n");

	checkPath("/usr/bin/patch","/usr/sbin/patch", "/usr/local/bin/patch", "/snap/bin/patch", \
		"echo \"\t  \033[1;32m✓              \033[1;35mpatch \033[1;37m|\033[1;33m\" $(patch --version | head -n1 | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗              patch \033[1;37m| \033[1;31mNot installed - $> sudo apt install patch\n");

	checkPath("/usr/bin/perl","/usr/sbin/perl", "/usr/local/bin/perl", "/snap/bin/perl", \
		"echo \"\t  \033[1;32m✓               \033[1;35mperl \033[1;37m|\033[1;33m\" $(perl --version | head -n2 | cut -c 44-49 |tail +2)", \
		"\t  \033[1;31m✗               perl \033[1;37m| \033[1;31mNot installed - $> sudo apt install perl\n");

	checkPath("/usr/bin/sed","/usr/sbin/sed", "/usr/local/bin/sed", "/snap/bin/sed", \
		"echo \"\t  \033[1;32m✓                \033[1;35msed \033[1;37m|\033[1;33m\" $(sed --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗                sed \033[1;37m| \033[1;31mNot installed - $> sudo apt install sed\n");

	checkPath("/usr/bin/snap","/usr/sbin/snap", "/usr/local/bin/snap", "/snap/bin/snap", \
		"echo \"\t  \033[1;32m✓               \033[1;35msnap \033[1;37m|\033[1;33m\" $(snap --version | head -n1 | cut -c 9-14)", \
		"\t  \033[1;31m✗               snap \033[1;37m| \033[1;31mNot installed - $> sudo apt install snap\n");

	checkPath("/usr/bin/sudo","/usr/sbin/sudo", "/usr/local/bin/sudo", "/snap/bin/sudo", \
		"echo \"\t  \033[1;32m✓               \033[1;35msudo \033[1;37m|\033[1;33m\" $(sudo --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗               sudo \033[1;37m| \033[1;31mNot installed - $> sudo apt install sudo\n");

	checkPath("/usr/bin/tar","/usr/sbin/tar", "/usr/local/bin/tar", "/snap/bin/tar", \
		"echo \"\t  \033[1;32m✓                \033[1;35mtar \033[1;37m|\033[1;33m\" $(tar --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗                tar \033[1;37m| \033[1;31mNot installed - $> sudo apt install tar\n");

	checkPath("/usr/bin/tree","/usr/sbin/tree", "/usr/local/bin/tree", "/snap/bin/tree", \
		"echo \"\t  \033[1;32m✓                \033[1;35mtar \033[1;37m|\033[1;33m\" $(tree --version | cut -c 6-11)", \
		"\t  \033[1;31m✗                tree \033[1;37m| \033[1;31mNot installed - $> sudo apt install tree\n");

	checkPath("/usr/bin/uptime","/usr/sbin/uptime", "/usr/local/bin/uptime", "/snap/bin/uptime", \
		"echo \"\t  \033[1;32m✓             \033[1;35muptime \033[1;37m|\033[1;33m\" $(uptime --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗             uptime \033[1;37m| \033[1;31mNot installed - $> sudo apt install uptime\n");

	checkPath("/usr/bin/wget","/usr/sbin/wget", "/usr/local/bin/wget", "/snap/bin/wget", \
		"echo \"\t  \033[1;32m✓               \033[1;35mwget \033[1;37m|\033[1;33m\" $(wget --version | head -n1 | cut -c 11-14)", \
		"\t  \033[1;31m✗               wget \033[1;37m| \033[1;31mNot installed - $> sudo apt install wget\n");

	checkPath("/usr/bin/xz","/usr/sbin/xz", "/usr/local/bin/xz", "/snap/bin/xz", \
		"echo \"\t  \033[1;32m✓                 \033[1;35mxz \033[1;37m|\033[1;33m\" $(xz --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗                 xz \033[1;37m| \033[1;31mNot installed - $> sudo apt install xz\n");
    std::cout << std::endl;

    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::cout << "     |                  </SYSTEM TOOLS>                |" << std::endl;
    std::cout << "     +-------------------------------------------------+" << std::endl;

	checkPath("/usr/bin/ld", "/usr/sbin/ld", "/usr/local/bin/ld", "/snap/bin/ld", \
		"echo \"\t  \033[1;32m✓           \033[1;35mbinutils \033[1;37m|\033[1;33m\" $(ld --version | head -n1 | cut -d \" \" -f7-7)", \
		"\t  \033[1;31m✗           binutils \033[1;37m| \033[1;31mNot installed - $> sudo apt install binutils\n");

	checkPath("/usr/bin/chown", "/usr/sbin/chown", "/usr/local/bin/chown", "/snap/bin/chown", \
		"echo \"\t  \033[1;32m✓          \033[1;35mcoreutils \033[1;37m|\033[1;33m\" $(chown --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗          coreutils \033[1;37m| \033[1;31mNot installed - $> sudo apt install coreutils\n");

	checkPath("/usr/sbin/fdisk", "/usr/sbin/fdisk", "/usr/local/bin/fdisk", "/snap/bin/fdisk", \
		"echo \"\t  \033[1;32m✓              \033[1;35mfdisk \033[1;37m|\033[1;33m\" $(fdisk --version | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗              fdisk \033[1;37m| \033[1;31mNot installed - $> sudo apt install fdisk\n");

	checkPath("/usr/bin/g++", "/usr/sbin/g++", "/usr/local/bin/g++", "/snap/bin/g++", \
		"echo \"\t  \033[1;32m✓          \033[1;35mg++ - gcc \033[1;37m|\033[1;33m\" $(g++ --version | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗          g++ - gcc \033[1;37m| \033[1;31mNot installed - $> sudo apt install g++\n");

	checkPath("/usr/bin/zsh", "/usr/sbin/zsh", "/usr/local/bin/zsh", "/snap/bin/zsh", \
		"echo \"\t  \033[1;32m✓                \033[1;35mzsh \033[1;37m|\033[1;33m\" $(zsh --version | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗                zsh \033[1;37m| \033[1;31mNot installed - $> sudo apt install zsh*\n");
    std::cout << std::endl;
   
    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::system("echo  \"     |               </$(whoami | tr '[:lower:]' '[:upper:]') CLI TOOLS>              |\"");
    std::cout << "     +-------------------------------------------------+" << std::endl;

	checkPath("/usr/bin/arp-scan", "/usr/sbin/arp-scan", "/usr/local/bin/arp-scan", "/snap/bin/arp-scan", \
		"echo \"\t  \033[1;32m✓           \033[1;35marp-scan \033[1;37m|\033[1;33m\" $(arp-scan -V | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗           arp-scan \033[1;37m| \033[1;31mNot installed - $> sudo apt install arp-scan\n");

	checkPath("/usr/bin/glances", "/usr/sbin/glances", "/usr/local/bin/glances", "/snap/bin/glances", \
		"echo \"\t  \033[1;32m✓            \033[1;35mglances \033[1;37m|\033[1;33m\" $(glances --version | head -n1 | cut -c 29-33)", \
		"\t  \033[1;31m✗            glances \033[1;37m| \033[1;31mNot installed - $> sudo apt install glances\n");

	checkPath("/usr/bin/inxi", "/usr/sbin/inxi", "/usr/local/bin/inxi", "/snap/bin/inxi", \
		"echo \"\t  \033[1;32m✓               \033[1;35minxi \033[1;37m|\033[1;33m\" $(inxi --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗               inxi \033[1;37m| \033[1;31mNot installed - $> sudo apt install inxi\n");

	checkPath("/usr/bin/mc", "/usr/sbin/mc", "/usr/local/bin/mc", "/snap/bin/mc", \
		"echo \"\t  \033[1;32m✓                 \033[1;35mmc \033[1;37m|\033[1;33m\" $(mc --version | head -n1 | cut -d \" \" -f4-4)", \
		"\t  \033[1;31m✗                 mc \033[1;37m| \033[1;31mNot installed - $> sudo apt install mc\n");

	checkPath("/usr/bin/mplayer", "/usr/sbin/mplayer", "/usr/local/bin/mplayer", "/snap/bin/mplayer", \
		"echo \"\t  \033[1;32m✓            \033[1;35mmplayer \033[1;37m|\033[1;33m\" $(mplayer -v | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗            mplayer \033[1;37m| \033[1;31mNot installed - $> sudo apt install mplayer\n");

	checkPath("/usr/bin/neofetch", "/usr/sbin/neofetch", "/usr/local/bin/neofetch", "/snap/bin/neofetch", \
		"echo \"\t  \033[1;32m✓           \033[1;35mneofetch \033[1;37m|\033[1;33m\" $(neofetch --version | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗           neofetch \033[1;37m| \033[1;31mNot installed - $> sudo apt install neofetch\n");

	checkPath("/usr/bin/python3","/usr/sbin/python3", "/usr/local/bin/python3", "/snap/bin/python3", \
		"echo \"\t  \033[1;32m✓            \033[1;35mpython3 \033[1;37m|\033[1;33m\" $(python3 --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗            python3 \033[1;37m| \033[1;31mNot installed - $> sudo apt install python3\n");

	checkPath("/usr/bin/terminator","/usr/sbin/terminator", "/usr/local/bin/terminator", "/snap/bin/terminator", \
		"echo \"\t  \033[1;32m✓         \033[1;35mterminator \033[1;37m|\033[1;33m\" $(terminator --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗         terminator \033[1;37m| \033[1;31mNot installed - $> sudo apt install terminator\n");

	checkPath("/usr/bin/vim", "/usr/sbin/vim", "/usr/local/bin/vim", "/snap/bin/vim", \
		"echo \"\t  \033[1;32m✓                \033[1;35mvim \033[1;37m|\033[1;33m\" $(vim --version | head -n1 | cut -d \" \" -f5-5)", \
		"\t  \033[1;31m✗                vim \033[1;37m| \033[1;31mNot installed - $> sudo apt install vim\n");

	checkPath("/usr/bin/wordgrinder", "/usr/sbin/wordgrinder", "/usr/local/bin/wordgrinder", "/snap/bin/", \
		"echo \"\t  \033[1;32m✓        \033[1;35mwordgrinder \033[1;37m|\033[1;33m\" $(wordgrinder -h | head -n1 | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗        wordgrinder \033[1;37m| \033[1;31mNot installed - $> sudo apt install wordgrinder\n");
    std::cout << std::endl;

    std::cout << "     \033[1;34m+-------------------------------------------------+" << std::endl;
    std::system("echo  \"     |               </$(whoami | tr '[:lower:]' '[:upper:]') GUI TOOLS>              |\"");
    std::cout << "     +-------------------------------------------------+" << std::endl;

  	checkPath("/usr/bin/alacarte", "/usr/sbin/alacarte", "/usr/local/bin/alacarte", "/snap/bin/alacarte", \
		"echo \"\t  \033[1;32m✓           \033[1;35malacarte \033[1;37m|\033[1;33m\" $(apt list --installed 2>&1 < /dev/null | grep \"alacarte\" | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗           alacarte \033[1;37m| \033[1;31mNot installed - $> sudo apt install alacarte\n");

	checkPath("/usr/bin/audacity", "/usr/sbin/audacity", "/usr/local/bin/audacity", "/snap/bin/audacity", \
		"echo \"\t  \033[1;32m✓           \033[1;35maudacity \033[1;37m|\033[1;33m\" $(apt list --installed 2>&1 < /dev/null | grep \"audacity\" | head -n2 | cut -c 21-25 | tail +2)", \
		"\t  \033[1;31m✗           audacity \033[1;37m| \033[1;31mNot installed - $> sudo apt install audacity\n");
    
	checkPath("/usr/bin/brave-browser", "/usr/sbin/brave-browser", "/usr/local/bin/brave-browser", "/snap/bin/brave-browser", \
		"echo \"\t  \033[1;32m✓              \033[1;35mbrave \033[1;37m|\033[1;33m\" $(brave-browser --version | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗              brave \033[1;37m| \033[1;31mNot installed - See : https://brave.com/linux/#linux\n");

	checkPath("/usr/bin/easytag", "/usr/sbin/easytag", "/usr/local/bin/easytag", "/snap/bin/easytag", \
		"echo \"\t  \033[1;32m✓            \033[1;35measytag \033[1;37m|\033[1;33m\" $(easytag --version | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗            easytag \033[1;37m| \033[1;31mNot installed - $> sudo apt install easytag\n");

	checkPath("/usr/bin/filezilla", "/usr/sbin/filezilla", "/usr/local/bin/filezilla", "/snap/bin/filezilla", \
		"echo \"\t  \033[1;32m✓          \033[1;35mfilezilla \033[1;37m|\033[1;33m\" $(filezilla -v | head -n2 | cut -c 10-16 | tail +2)", \
		"\t  \033[1;31m✗          filezilla \033[1;37m| \033[1;31mNot installed - $> sudo apt install filezilla\n");

	checkPath("/usr/bin/gnome-tweaks", "/usr/sbin/gnome-tweaks", "/usr/local/bin/gnome-tweaks", "/snap/bin/gnome-tweaks", \
		"echo \"\t  \033[1;32m✓       \033[1;35mgnome-tweaks \033[1;37m|\033[1;33m\" $(gnome-tweaks --version)", \
		"\t  \033[1;31m✗       gnome-tweaks \033[1;37m| \033[1;31mNot installed - $> sudo apt install gnome-tweaks\n");

	checkPath("/usr/bin/gparted", "/usr/sbin/gparted", "/usr/local/bin/gparted", "/snap/bin/gparted", \
		"echo \"\t  \033[1;32m✓            \033[1;35mgparted \033[1;37m|\033[1;33m\" $(apt list --installed 2>&1 < /dev/null | grep \"gparted\" | head -n2 | cut -c 20-24 | tail +2)", \
		"\t  \033[1;31m✗            gparted \033[1;37m| \033[1;31mNot installed - $> sudo apt install gparted\n");

	checkPath("/usr/bin/gsmartcontrol", "/usr/sbin/gsmartcontrol", "/usr/local/bin/gsmartcontrol", "/snap/bin/gsmartcontrol", \
		"echo \"\t  \033[1;32m✓      \033[1;35mgsmartcontrol \033[1;37m|\033[1;33m\" $(gsmartcontrol --version | head -n2 | cut -d \" \" -f3 | tail +2)", \
		"\t  \033[1;31m✗      gsmartcontrol \033[1;37m| \033[1;31mNot installed - $> sudo apt install gsmartcontrol\n");

	checkPath("/usr/bin/libreoffice", "/usr/sbin/libreoffice", "/usr/local/bin/libreoffice", "/snap/bin/libreoffice", \
		"echo \"\t  \033[1;32m✓        \033[1;35mlibreoffice \033[1;37m|\033[1;33m\" $(libreoffice --version | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗        libreoffice \033[1;37m| \033[1;31mNot installed - $> sudo snap install libreoffice -or- $> sudo apt install libreoffice-common\n");

	checkPath("/usr/bin/ophcrack", "/usr/sbin/ophcrack", "/usr/local/bin/ophcrack", "/snap/bin/ophcrack", \
		"echo \"\t  \033[1;32m✓           \033[1;35mophcrack \033[1;37m|\033[1;33m\" $(ophcrack -h | head -n1 | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗           ophcrack \033[1;37m| \033[1;31mNot installed - $> sudo apt install ophcrack\n");

	checkPath("/usr/bin/subl", "/usr/sbin/subl", "/usr/local/bin/subl", "/snap/bin/subl", \
		"echo \"\t  \033[1;32m✓       \033[1;35msublime-text \033[1;37m|\033[1;33m\" $(subl --version | cut -d \" \" -f3-4)", \
		"\t  \033[1;31m✗       sublime-text \033[1;37m| \033[1;31mNot installed - see : https://www.sublimetext.com/docs/linux_repositories.html\n");

	checkPath("/usr/bin/synaptic", "/usr/sbin/synaptic", "/usr/local/bin/synaptic", "/snap/bin/synaptic", \
		"echo \"\t  \033[1;32m✓           \033[1;35msynaptic \033[1;37m|\033[1;33m\" $(synaptic --help  | head -n1 | cut -d \" \" -f4)", \
		"\t  \033[1;31m✗           synaptic \033[1;37m| \033[1;31mNot installed - $> sudo apt install synaptic\n");

	checkPath("/usr/bin/teamviewer", "/usr/sbin/teamviewer", "/usr/local/bin/teamviewer", "/snap/bin/teamviewer", \
		"echo \"\t  \033[1;32m✓         \033[1;35mteamviewer \033[1;37m|\033[1;33m\" $(apt list --installed 2>&1 < /dev/null | grep \"teamviewer\" | cut -d \" \" -f2)", \
		"\t  \033[1;31m✗         teamviewer \033[1;37m| \033[1;31mNot installed - $> sudo apt install teamviewer\n");

	checkPath("/usr/bin/thunderbird", "/usr/sbin/thunderbird", "/usr/local/bin/thunderbird", "/snap/bin/thunderbird", \
		"echo \"\t  \033[1;32m✓        \033[1;35mthunderbird \033[1;37m|\033[1;33m\" $(thunderbird --version | cut -d \" \" -f3)", \
		"\t  \033[1;31m✗        thunderbird \033[1;37m| \033[1;31mNot installed - $> sudo apt install thunderbird\n");

	checkPath("/usr/bin/vlc", "/usr/sbin/vlc", "/usr/local/bin/vlc", "/snap/bin/vlc", \
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