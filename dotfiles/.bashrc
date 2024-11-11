#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'
alias DOOM='gzdoom'
alias neofetch="~/.config/scripts/neofetch.sh"
alias owofetch="~/.config/scripts/owofetch.sh"
alias todo="~/.config/scripts/todo.sh"
alias waybar_reload="~/.config/scripts/start_waybar.sh"
alias youtube="~/.config/scripts/youtube.sh"
alias whatsapp="~/.config/scripts/whatsapp.sh"
alias disney="~/.config/scripts/disney.sh"
alias music="~/.config/scripts/Music.sh"
alias screensh="~/.config/scripts/screenshot.sh"
alias discord="discord > /dev/null 2>&1 &"
alias httpsmirrors="rate-mirrors --allow-root --protocol https arch | sudo tee /etc/pacman.d/mirrorlist"
alias chatGPT="~/.config/scripts/chatGPT.sh"
alias update="~/.config/scripts/update.sh"
alias upgrade="~/.config/scripts/upgrade.sh"
alias portainer="~/.config/scripts/portainer.sh"

#alias sl='sl -a -10 -F -l'
alias kitty="kitty -e bash -c 'owofetch; exec bash'"

#variables
export TERM=xterm-256color

PS1='[\u@\h \W]\$ ' 


#starship
export STARSHIP_CONFIG=~/.config/starship/starship.toml
eval "$(starship init bash)"

#start owofetch
