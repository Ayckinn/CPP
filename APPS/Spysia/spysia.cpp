#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

//-- FONTS COLOR
std::string RED     = "\033[1;31m";
std::string GREEN   = "\033[1;32m";
std::string YELLOW  = "\033[1;33m";
std::string BLUE    = "\033[1;34m";
std::string MAGENTA = "\033[1;35m";
std::string WHITE   = "\033[1;37m";
std::string NOCOLOR = "\033[1;m";


void Logo()
{
    std::cout << GREEN << "\
	          _____                  _                  \n\
	         / ___/____  __  _______(_)___ _            \n\
	         \\__ \\/ __ \\/ / / / ___/ / __ `/         \n\
	        ___/ / /_/ / /_/ (__  ) / /_/ /             \n\
	       /____/ .___/\\__, /____/_/\\__,_/            \n\
	           /_/    /____/" << RED << "  v2.2         \n\
	         " << BLUE << " (c)2022 | Marlene Softwares \n\
	   " << MAGENTA << " @Ayckinn " << WHITE << "| " \
	     << YELLOW << "marlene.soft@protonmail.com \n\n" ;

	return;
}
//-----------------------------------------------------------------------------
void checkPath(std::string path, std::string version, std::string missing)
{
	if(std::filesystem::exists("/usr/bin/" + path) || \
		std::filesystem::exists("/usr/sbin/" + path) || \
		std::filesystem::exists("/usr/local/bin/" + path) || \
		std::filesystem::exists("/snap/bin/" + path) || \
		std::filesystem::exists("/usr/lib/" + path))
	{	
		std::system(version.c_str());
	}
	else
		std::cout << missing;

	return;
}
//-----------------------------------------------------------------------------
void Categories(std::string cat)
{
	std::cout << BLUE << "\n     +";
	for(int i = 0; i < 49; i++)
		std::cout << "-";
	std::cout << "+\n";

    std::cout << "     |             " << cat << "             |\n";
	
	std::cout << "     +";
	for(int i = 0; i < 49; i++)
		std::cout << "-";
	std::cout << "+\n";

	return;
}
//-----------------------------------------------------------------------------
void gppCompilTest()
{
    std::system("echo 'int main(){}' > testcomp.c && g++ -o testcomp testcomp.c");

    std::ifstream testcomp;
    testcomp.open("testcomp");
    
    if(testcomp)
       std::cout << "\t           " << GREEN << "✓ COMPILATION => DONE...\n" << NOCOLOR;
    else
    {
       std::cout << "\t           " << RED << "✗ COMPILATION => FAILED...\n";
       std::cout << "                  Test file or g++ not found !\n" << NOCOLOR;
    }
    std::remove("testcomp");
    std::remove("testcomp.c");
    std::cout << "\n";

    return;
}
//=============================================================================
int main()
{
    std::system("clear");
    std::system("echo $(export LC_ALL=C)");
    Logo();

    Categories("</GENERAL INFORMATIONS>");
    std::system("echo \"\t  \033[1;32m✓   \033[1;35mOperating System \033[1;37m|\033[1;33m\" $(hostnamectl | head -n6 | cut -d \" \" -f3-4 | tail -n +6)");
    std::system("echo \"\t  \033[1;32m✓   \033[1;35m  Kernel version \033[1;37m|\033[1;33m\" $(uname -r)");
    std::system("echo \"\t  \033[1;32m✓   \033[1;35m        Hostname \033[1;37m|\033[1;33m\" $(hostnamectl | head -1 | cut -d \" \" -f4)");
    std::system("echo \"\t  \033[1;32m✓   \033[1;35m        Local IP \033[1;37m|\033[1;33m\" $(hostname -I | cut -d \" \" -f1)");
    std::system("echo \"\t  \033[1;32m✓   \033[1;35m       Public IP \033[1;37m|\033[1;33m\" $(wget http://ipecho.net/plain -O - -q; echo)\n");
    std::system("echo \"\t  \033[1;32m✓   \033[1;35m     Last update \033[1;37m|\033[1;33m\" $(ls -lt --time-style=\"long-iso\" /var/log/apt | grep -o '\\([0-9]\\{2,4\\}[- ]\\)\\{3\\}[0-9]\\{2\\}:[0-9]\\{2\\}' -m 1)");
   
   	checkPath("update-notifier/apt-check", \
		"echo \"\t  " + GREEN + "✓   " + MAGENTA + "Available update " + WHITE + "|" + YELLOW + "\" $(/usr/lib/update-notifier/apt-check --human-readable | head -n1 | cut -d \" \" -f1)", \
		"\t  " + RED + "  ✗ Available update " + WHITE + "| " + RED + "Unknown - $> sudo apt install update-notifier\n");

    std::cout << "\n\t \033[0;37m >> To see the list of available updates :\n";
    std::cout << "\t   $> /usr/lib/update-notifier/apt-check -p\n";


    Categories("   </SYSTEM COMMANDS>  ");
    std::system("echo \"\t  \033[1;32m✓                \033[1;35mapt \033[1;37m|\033[1;33m\" $(apt -v | cut -d \" \" -f2)");
	checkPath("bison", \
		"echo \"\t  " + GREEN + "✓              " + MAGENTA + "bison " + WHITE + "|" + YELLOW + "\" $(bison --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗              bison " + WHITE + "| " + RED + "Not installed - $> sudo apt install bison\n");
	checkPath("bzip2", \
		"echo \"\t  " + GREEN + "✓              " + MAGENTA + "bzip2 " + WHITE + "|" + YELLOW + "\" $(bzip2 --version 2>&1 < /dev/null | head -n1 | cut -c 50-54)", \
		"\t  " + RED + "✗              bzip2 " + WHITE + "| " + RED + "Not installed - $> sudo apt install bzip2\n");
	checkPath("curl", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "curl " + WHITE + "|" + YELLOW + "\" $(curl --version | head -n1 | cut -d \" \" -f2)", \
		"\t  " + RED + "✗               curl " + WHITE + "| " + RED + "Not installed - $> sudo apt install curl\n");
	checkPath("dfc", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "dfc " + WHITE + "|" + YELLOW + "\" $(dfc -v | cut -d \" \" -f2)", \
		"\t  " + RED + "✗                dfc " + WHITE + "| " + RED + "Not installed - $> sudo apt install dfc\n");
	checkPath("diff", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "diff " + WHITE + "|" + YELLOW + "\" $(diff --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗               diff " + WHITE + "| " + RED + "Not installed - $> sudo apt install diff\n");
	checkPath("exa", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "exa " + WHITE + "|" + YELLOW + "\" $(exa --version | head -n2 | cut -c 2-8 | tail +2)", \
		"\t  " + RED + "✗                exa " + WHITE + "| " + RED + "Not installed - $> sudo apt install exa\n");
	checkPath("find", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "find " + WHITE + "|" + YELLOW + "\" $(find --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗               find " + WHITE + "| " + RED + "Not installed - $> sudo apt install find\n");
	checkPath("gawk", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "gawk " + WHITE + "|" + YELLOW + "\" $(gawk --version | head -n1 | cut -c 9-13)", \
		"\t  " + RED + "✗               gawk " + WHITE + "| " + RED + "Not installed - $> sudo apt install gawk\n");
	checkPath("git", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "git " + WHITE + "|" + YELLOW + "\" $(git --version | cut -d \" \" -f3)", \
		"\t  " + RED + "✗                git " + WHITE + "| " + RED + "Not installed - $> sudo apt install git\n");
	checkPath("grep", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "grep " + WHITE + "|" + YELLOW + "\" $(grep --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗               grep " + WHITE + "| " + RED + "Not installed - $> sudo apt install grep\n");
	checkPath("gzip", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "gzip " + WHITE + "|" + YELLOW + "\" $(gzip --version | head -n1 | cut -d \" \" -f2)", \
		"\t  " + RED + "✗               gzip " + WHITE + "| " + RED + "Not installed - $> sudo apt install gzip\n");
	checkPath("ldd", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "ldd " + WHITE + "|" + YELLOW + "\" $(ldd --version | head -n1 | cut -d \" \" -f5)", \
		"\t  " + RED + "✗                ldd " + WHITE + "| " + RED + "Not installed - $> sudo apt install ldd\n");
	checkPath("m4", \
		"echo \"\t  " + GREEN + "✓                 " + MAGENTA + "m4 " + WHITE + "|" + YELLOW + "\" $(m4 --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗                 m4 " + WHITE + "| " + RED + "Not installed - $> sudo apt install m4\n");
	checkPath("make", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "make " + WHITE + "|" + YELLOW + "\" $(make --version | head -n1 | cut -d \" \" -f3)", \
		"\t  " + RED + "✗               make " + WHITE + "| " + RED + "Not installed - $> sudo apt install make\n");
	checkPath("makeinfo", \
		"echo \"\t  " + GREEN + "✓           " + MAGENTA + "makeinfo " + WHITE + "|" + YELLOW + "\" $(makeinfo --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗           makeinfo " + WHITE + "| " + RED + "Not installed - $> sudo apt install texinfo\n");
	checkPath("patch", \
		"echo \"\t  " + GREEN + "✓              " + MAGENTA + "patch " + WHITE + "|" + YELLOW + "\" $(patch --version | head -n1 | cut -d \" \" -f3)", \
		"\t  " + RED + "✗              patch " + WHITE + "| " + RED + "Not installed - $> sudo apt install patch\n");
	checkPath("perl", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "perl " + WHITE + "|" + YELLOW + "\" $(perl --version | head -n2 | cut -c 44-49 |tail +2)", \
		"\t  " + RED + "✗               perl " + WHITE + "| " + RED + "Not installed - $> sudo apt install perl\n");
	checkPath("sed", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "sed " + WHITE + "|" + YELLOW + "\" $(sed --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗                sed " + WHITE + "| " + RED + "Not installed - $> sudo apt install sed\n");
	checkPath("snap", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "snap " + WHITE + "|" + YELLOW + "\" $(snap --version | head -n1 | cut -c 9-14)", \
		"\t  " + RED + "✗               snap " + WHITE + "| " + RED + "Not installed - $> sudo apt install snap\n");
	checkPath("sudo", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "sudo " + WHITE + "|" + YELLOW + "\" $(sudo --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗               sudo " + WHITE + "| " + RED + "Not installed - $> sudo apt install sudo\n");
	checkPath("tar", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "tar " + WHITE + "|" + YELLOW + "\" $(tar --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗                tar " + WHITE + "| " + RED + "Not installed - $> sudo apt install tar\n");
	checkPath("tree", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "tree " + WHITE + "|" + YELLOW + "\" $(tree --version | cut -c 7-11)", \
		"\t  " + RED + "✗               tree " + WHITE + "| " + RED + "Not installed - $> sudo apt install tree\n");
	checkPath("uptime", \
		"echo \"\t  " + GREEN + "✓             " + MAGENTA + "uptime " + WHITE + "|" + YELLOW + "\" $(uptime --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗             uptime " + WHITE + "| " + RED + "Not installed - $> sudo apt install uptime\n");
	checkPath("valgrind", \
		"echo \"\t  " + GREEN + "✓           " + MAGENTA + "valgrind " + WHITE + "|" + YELLOW + "\" $(valgrind --version | cut -c 10-15)", \
		"\t  " + RED + "✗           valgrind " + WHITE + "| " + RED + "Not installed - $> sudo apt install valgrind\n");
	checkPath("wget", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "wget " + WHITE + "|" + YELLOW + "\" $(wget --version | head -n1 | cut -c 11-14)", \
		"\t  " + RED + "✗               wget " + WHITE + "| " + RED + "Not installed - $> sudo apt install wget\n");
	checkPath("xz", \
		"echo \"\t  " + GREEN + "✓                 " + MAGENTA + "xz " + WHITE + "|" + YELLOW + "\" $(xz --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗                 xz " + WHITE + "| " + RED + "Not installed - $> sudo apt install xz\n");


    Categories("    </SYSTEM TOOLS>    ");
	checkPath("ld", \
		"echo \"\t  " + GREEN + "✓           " + MAGENTA + "binutils " + WHITE + "|" + YELLOW + "\" $(ld --version | head -n1 | cut -d \" \" -f7-7)", \
		"\t  " + RED + "✗           binutils " + WHITE + "| " + RED + "Not installed - $> sudo apt install binutils\n");
	checkPath("chown", \
		"echo \"\t  " + GREEN + "✓          " + MAGENTA + "coreutils " + WHITE + "|" + YELLOW + "\" $(chown --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗          coreutils " + WHITE + "| " + RED + "Not installed - $> sudo apt install coreutils\n");
	checkPath("/fdisk", \
		"echo \"\t  " + GREEN + "✓              " + MAGENTA + "fdisk " + WHITE + "|" + YELLOW + "\" $(fdisk --version | cut -d \" \" -f4)", \
		"\t  " + RED + "✗              fdisk " + WHITE + "| " + RED + "Not installed - $> sudo apt install fdisk\n");
	checkPath("g++", \
		"echo \"\t  " + GREEN + "✓          " + MAGENTA + "g++ - gcc " + WHITE + "|" + YELLOW + "\" $(g++ --version | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗          g++ - gcc " + WHITE + "| " + RED + "Not installed - $> sudo apt install g++\n");
	checkPath("zsh", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "zsh " + WHITE + "|" + YELLOW + "\" $(zsh --version | cut -d \" \" -f2)", \
		"\t  " + RED + "✗                zsh " + WHITE + "| " + RED + "Not installed - $> sudo apt install zsh*\n");
   

    Categories("      </CLI TOOLS>     ");
	checkPath("arp-scan", \
		"echo \"\t  " + GREEN + "✓           " + MAGENTA + "arp-scan " + WHITE + "|" + YELLOW + "\" $(arp-scan -V | head -n1 | cut -d \" \" -f2)", \
		"\t  " + RED + "✗           arp-scan " + WHITE + "| " + RED + "Not installed - $> sudo apt install arp-scan\n");	
	checkPath("figlet", \
		"echo \"\t  " + GREEN + "✓             " + MAGENTA + "figlet " + WHITE + "|" + YELLOW + "\" $(figlet -v | head -n3 | cut -c 38-42 | tail -n +3)", \
		"\t  " + RED + "✗             figlet " + WHITE + "| " + RED + "Not installed - $> sudo apt install figlet\n");
	checkPath("glances", \
		"echo \"\t  " + GREEN + "✓            " + MAGENTA + "glances " + WHITE + "|" + YELLOW + "\" $(glances --version | head -n1 | cut -c 29-33)", \
		"\t  " + RED + "✗            glances " + WHITE + "| " + RED + "Not installed - $> sudo apt install glances\n");
	checkPath("inxi", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "inxi " + WHITE + "|" + YELLOW + "\" $(inxi --version | head -n1 | cut -d \" \" -f2)", \
		"\t  " + RED + "✗               inxi " + WHITE + "| " + RED + "Not installed - $> sudo apt install inxi\n");
	checkPath("mc", \
		"echo \"\t  " + GREEN + "✓                 " + MAGENTA + "mc " + WHITE + "|" + YELLOW + "\" $(mc --version | head -n1 | cut -d \" \" -f4-4)", \
		"\t  " + RED + "✗                 mc " + WHITE + "| " + RED + "Not installed - $> sudo apt install mc\n");
	checkPath("mplayer", \
		"echo \"\t  " + GREEN + "✓            " + MAGENTA + "mplayer " + WHITE + "|" + YELLOW + "\" $(mplayer -v | head -n1 | cut -d \" \" -f2)", \
		"\t  " + RED + "✗            mplayer " + WHITE + "| " + RED + "Not installed - $> sudo apt install mplayer\n");
	checkPath("nano", \
		"echo \"\t  " + GREEN + "✓               " + MAGENTA + "nano " + WHITE + "|" + YELLOW + "\" $(nano --version | head -n1 | cut -d \" \" -f5)", \
		"\t  " + RED + "✗               nano " + WHITE + "| " + RED + "Not installed - $> sudo apt install nano\n");
	checkPath("neofetch", \
		"echo \"\t  " + GREEN + "✓           " + MAGENTA + "neofetch " + WHITE + "|" + YELLOW + "\" $(neofetch --version | cut -d \" \" -f2)", \
		"\t  " + RED + "✗           neofetch " + WHITE + "| " + RED + "Not installed - $> sudo apt install neofetch\n");
	checkPath("python3", \
		"echo \"\t  " + GREEN + "✓            " + MAGENTA + "python3 " + WHITE + "|" + YELLOW + "\" $(python3 --version | head -n1 | cut -d \" \" -f2)", \
		"\t  " + RED + "✗            python3 " + WHITE + "| " + RED + "Not installed - $> sudo apt install python3\n");
	checkPath("terminator", \
		"echo \"\t  " + GREEN + "✓         " + MAGENTA + "terminator " + WHITE + "|" + YELLOW + "\" $(terminator --version | head -n1 | cut -d \" \" -f2)", \
		"\t  " + RED + "✗         terminator " + WHITE + "| " + RED + "Not installed - $> sudo apt install terminator\n");
	checkPath("vim", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "vim " + WHITE + "|" + YELLOW + "\" $(vim --version | head -n1 | cut -d \" \" -f5-5)", \
		"\t  " + RED + "✗                vim " + WHITE + "| " + RED + "Not installed - $> sudo apt install vim\n");
	checkPath("wordgrinder", \
		"echo \"\t  " + GREEN + "✓        " + MAGENTA + "wordgrinder " + WHITE + "|" + YELLOW + "\" $(wordgrinder -h | head -n1 | cut -d \" \" -f3)", \
		"\t  " + RED + "✗        wordgrinder " + WHITE + "| " + RED + "Not installed - $> sudo apt install wordgrinder\n");


    Categories("      </GUI TOOLS>     ");
  	checkPath("alacarte", \
		"echo \"\t  " + GREEN + "✓           " + MAGENTA + "alacarte " + WHITE + "|" + YELLOW + "\" $(apt list --installed 2>&1 < /dev/null | grep \"alacarte\" | cut -d \" \" -f2)", \
		"\t  " + RED + "✗           alacarte " + WHITE + "| " + RED + "Not installed - $> sudo apt install alacarte\n");
	checkPath("audacity", \
		"echo \"\t  " + GREEN + "✓           " + MAGENTA + "audacity " + WHITE + "|" + YELLOW + "\" $(apt list --installed 2>&1 < /dev/null | grep \"audacity\" | head -n2 | cut -c 21-25 | tail +2)", \
		"\t  " + RED + "✗           audacity " + WHITE + "| " + RED + "Not installed - $> sudo apt install audacity\n");    
	checkPath("brave-browser", \
		"echo \"\t  " + GREEN + "✓              " + MAGENTA + "brave " + WHITE + "|" + YELLOW + "\" $(brave-browser --version | cut -d \" \" -f3)", \
		"\t  " + RED + "✗              brave " + WHITE + "| " + RED + "Not installed - See : https://brave.com/linux/#linux\n");
	checkPath("ddd", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "ddd " + WHITE + "|" + YELLOW + "\" $(ddd --version | head -n1 | cut -d \" \" -f3)", \
		"\t  " + RED + "✗                ddd " + WHITE + "| " + RED + "Not installed - $> sudo apt install ddd\n");
	checkPath("easytag", \
		"echo \"\t  " + GREEN + "✓            " + MAGENTA + "easytag " + WHITE + "|" + YELLOW + "\" $(easytag --version | head -n1 | cut -d \" \" -f2)", \
		"\t  " + RED + "✗            easytag " + WHITE + "| " + RED + "Not installed - $> sudo apt install easytag\n");
	checkPath("filezilla", \
		"echo \"\t  " + GREEN + "✓          " + MAGENTA + "filezilla " + WHITE + "|" + YELLOW + "\" $(filezilla -v | head -n2 | cut -c 10-16 | tail +2)", \
		"\t  " + RED + "✗          filezilla " + WHITE + "| " + RED + "Not installed - $> sudo apt install filezilla\n");
	checkPath("gnome-tweaks", \
		"echo \"\t  " + GREEN + "✓       " + MAGENTA + "gnome-tweaks " + WHITE + "|" + YELLOW + "\" $(gnome-tweaks --version)", \
		"\t  " + RED + "✗       gnome-tweaks " + WHITE + "| " + RED + "Not installed - $> sudo apt install gnome-tweaks\n");
	checkPath("gparted", \
		"echo \"\t  " + GREEN + "✓            " + MAGENTA + "gparted " + WHITE + "|" + YELLOW + "\" $(apt list --installed 2>&1 < /dev/null | grep \"gparted\" | head -n2 | cut -c 20-24 | tail +2)", \
		"\t  " + RED + "✗            gparted " + WHITE + "| " + RED + "Not installed - $> sudo apt install gparted\n");
	checkPath("gsmartcontrol", \
		"echo \"\t  " + GREEN + "✓      " + MAGENTA + "gsmartcontrol " + WHITE + "|" + YELLOW + "\" $(gsmartcontrol --version | head -n2 | cut -d \" \" -f3 | tail +2)", \
		"\t  " + RED + "✗      gsmartcontrol " + WHITE + "| " + RED + "Not installed - $> sudo apt install gsmartcontrol\n");
	checkPath("libreoffice", \
		"echo \"\t  " + GREEN + "✓        " + MAGENTA + "libreoffice " + WHITE + "|" + YELLOW + "\" $(libreoffice --version | cut -d \" \" -f2)", \
		"\t  " + RED + "✗        libreoffice " + WHITE + "| " + RED + "Not installed - $> sudo snap install libreoffice -or- $> sudo apt install libreoffice-common\n");
	checkPath("opera", \
		"echo \"\t  " + GREEN + "✓              " + MAGENTA + "opera " + WHITE + "|" + YELLOW + "\" $(opera --version)", \
		"\t  " + RED + "✗              opera " + WHITE + "| " + RED + "Not installed - $> sudo snap install opera\n");
	checkPath("ophcrack", \
		"echo \"\t  " + GREEN + "✓           " + MAGENTA + "ophcrack " + WHITE + "|" + YELLOW + "\" $(ophcrack -h | head -n1 | cut -d \" \" -f2)", \
		"\t  " + RED + "✗           ophcrack " + WHITE + "| " + RED + "Not installed - $> sudo apt install ophcrack\n");
	checkPath("subl", \
		"echo \"\t  " + GREEN + "✓       " + MAGENTA + "sublime-text " + WHITE + "|" + YELLOW + "\" $(subl --version | cut -d \" \" -f3-4)", \
		"\t  " + RED + "✗       sublime-text " + WHITE + "| " + RED + "Not installed - see : https://www.sublimetext.com/docs/linux_repositories.html\n");
	checkPath("synaptic", \
		"echo \"\t  " + GREEN + "✓           " + MAGENTA + "synaptic " + WHITE + "|" + YELLOW + "\" $(synaptic --help  | head -n1 | cut -d \" \" -f4)", \
		"\t  " + RED + "✗           synaptic " + WHITE + "| " + RED + "Not installed - $> sudo apt install synaptic\n");
	checkPath("teamviewer", \
		"echo \"\t  " + GREEN + "✓         " + MAGENTA + "teamviewer " + WHITE + "|" + YELLOW + "\" $(apt list --installed 2>&1 < /dev/null | grep \"teamviewer\" | cut -d \" \" -f2)", \
		"\t  " + RED + "✗         teamviewer " + WHITE + "| " + RED + "Not installed - $> sudo apt install teamviewer\n");
	checkPath("thunderbird", \
		"echo \"\t  " + GREEN + "✓        " + MAGENTA + "thunderbird " + WHITE + "|" + YELLOW + "\" $(thunderbird --version | cut -d \" \" -f3)", \
		"\t  " + RED + "✗        thunderbird " + WHITE + "| " + RED + "Not installed - $> sudo apt install thunderbird\n");
	checkPath("vlc", \
		"echo \"\t  " + GREEN + "✓                " + MAGENTA + "vlc " + WHITE + "|" + YELLOW + "\" $(vlc --version 2>&1 < /dev/null | head -n1 | cut -d \" \" -f3)", \
		"\t  " + RED + "✗                vlc " + WHITE + "| " + RED + "Not installed - $> sudo snap install vlc\n");

    Categories("</G++ COMPILATION TEST>");
    gppCompilTest();

	return 0;
}