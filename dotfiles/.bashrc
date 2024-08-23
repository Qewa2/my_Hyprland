#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'

#alias sl='sl -a -10 -F -l'
#alias kitty="kitty -e bash -c 'neofetch; exec bash'"

#start hyprland on startup
if ! pgrep -x "Hyprland" > /dev/null
then
    echo "Hyprland läuft nicht. Starte Hyprland..."
    exec Hyprland
fi

#end hyprland script

PS1='[\u@\h \W]\$ ' 
