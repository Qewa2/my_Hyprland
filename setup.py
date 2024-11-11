import subprocess
import os

# initialize vars
neededPkgs = ['alsa-utils', 'autofs', 'base', 'base-devel', 'bat', 'blueman', 'bluez', 'bluez-utils', 'brightnessctl', 'btop', 'cmatrix', 'cowsay', 'cpupower', 'dolphin', 'efibootmgr', 'exfatprogs', 'fastfetch', 'firefox', 'fzf', 'git', 'grim', 'gst-plugin-pipewire', 'hyprland', 'hyprlock', 'hyprpaper', 'inkscape', 'intel-ucode', 'kitty', 'labymod-appimage', 'libpulse', 'linux', 'linux-firmware', 'man-db', 'mesa-demos', 'mpv', 'neofetch', 'network-manager-applet', 'networkmanager', 'nvidia', 'ollama', 'openrazer-meta-git', 'openssh', 'owofetch-git', 'pacman-contrib', 'pavucontrol', 'pipewire', 'pipewire-alsa', 'pipewire-jack', 'polychromatic', 'pulseaudio-alsa', 'pulseaudio-bluetooth', 'python', 'python-pip', 'python-yaml', 'qjackctl', 'rate-mirrors', 'razercfg', 'sddm', 'sl', 'slurp', 'sof-firmware', 'starship', 'steam', 'traceroute', 'tree', 'ttf-font-awesome', 'ttf-meslo-nerd-font-powerlevel10k', 'unrar', 'unzip', 'vim', 'vulkan-tools', 'waybar', 'waypaper', 'wine', 'wireplumber', 'wireshark-qt', 'wlogout', 'wofi', 'wtf', 'yay', 'yazi', 'yt', 'zram-generator']


def get_installed_packages():
    try:
        # Führe den Befehl `yay -Qeq` aus und erfasse die Ausgabe
        result = subprocess.run(['pacman', '-Qeq'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, check=True)

        # Teile die Ausgabe in einzelne Pakete auf (jede Zeile entspricht einem Paket)
        packages = result.stdout.strip().split('\n')

        return packages
    except subprocess.CalledProcessError as e:
        print(f"Fehler beim Ausführen von pacman : {e}")
        return []

# Hauptprogramm
if __name__ == "__main__":
    installed_packages = get_installed_packages()
    
    # Ausgabe der Pakete
    


installing_needed_packages = []
def add_Packages(Pkg):
    installing_needed_packages.append(Pkg)

os.system("sudo pacman -Syu")
if not("git" in installed_packages):
    os.system("sudo pacman -S git")
else:
    print("git is installed")

if not("yay-bin" in installed_packages):
    os.system("git clone https://aur.archlinux.org/yay-bin.git && cd yay-bin && makepkg -si && cd ..")
    
else:
    print("yay is installed")
os.system("yay -Syu")

#commands to install pkgs
for i in range(len(neededPkgs)):
    if neededPkgs[i] in installed_packages:
        print(neededPkgs[i], "is installed")
    else:
        print("needed: ")
        add_Packages(neededPkgs[i])
        print("     " + neededPkgs[i])

if len(installing_needed_packages) <= 0:
    print("every package is installed")
else:
    command = "yay -S"
    for i in range(len(installing_needed_packages)):
        command = command + f" {installing_needed_packages[i]}"
    print(f"running: {command}")
    os.system(command)
print("\nfinished installing Packages")

os.system("yay -Syu")
os.system("cp -r ~/my_Hyprland/Downloads ~")
os.system("cp -r ~/my_Hyprland/Pictures ~")
os.system("cp -r ~/my_Hyprland/MansAlien_dotfiles")

print("\nfinished moving Directories (hint the dotfiles haven't been copied yet you can do that with:\n     cp -r ~/my_Hyprland/dotfiles/.bashrc ~\n     rm -rf ~/.config\n     cp -r ~/my_Hyprland/dotfiles/.config ~)")
