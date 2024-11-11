#
#!/bin/bash
#

rate-mirrors --allow-root --protocol https arch | sudo tee /etc/pacman.d/mirrorlist

~/.config/scripts/update.sh

