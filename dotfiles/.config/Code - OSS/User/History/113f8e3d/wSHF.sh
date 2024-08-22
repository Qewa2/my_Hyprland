#!/bin/bash

# Prüfen, ob Hyprland läuft
if pgrep -x "Hyprland" > /dev/null
then
    echo "Hyprland läuft, wird gestoppt..."
    
    # Hyprland beenden
    pkill -x "Hyprland"
    
    if [ $? -eq 0 ]; then
        echo "Hyprland wurde erfolgreich gestoppt."
        # Benutzer abmelden
        systemctl --user exit
    else
        echo "Fehler beim Stoppen von Hyprland."
    fi
else
    echo "Hyprland läuft nicht."
fi
