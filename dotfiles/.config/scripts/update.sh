#
#!/bin/bash
#

echo "packages to update:"


num_updates=$(checkupdates | wc -l)

# Bedingung überprüfen
if [[ $num_updates -eq 0 ]]; then
    echo "No packages to update"
else
    checkupdates
    yay -Syy
    sudo pacman -Syu
    yay -Syu
fi
