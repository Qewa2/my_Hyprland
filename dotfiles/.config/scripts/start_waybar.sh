#
#!/bin/bash
#~/.bashrc
#


#kill waybar
killall waybar

#start top waybar
waybar > /dev/null 2>&1 &

#start taskbar
waybar --config ~/.config/waybar2/config --style ~/.config/waybar2/style.css > /dev/null 2>&1 &
