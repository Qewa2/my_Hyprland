#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'

#alias sl='sl -a -10 -F -l'
#alias kitty="kitty -e bash -c 'neofetch; exec bash'"

PS1='[\u@\h \W]\$ ' 
