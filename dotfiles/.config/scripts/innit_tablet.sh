#!/bin/bash

# Starte den UGEE-Treiber im Hintergrund und löse ihn vom Terminal
nohup /usr/lib/ugeeTablet/ugeeTabletDriver &> /dev/null &

# Speichere die Prozess-ID (PID) des Treibers
PID=$!

# Gib dem Treiber etwas Zeit, um vollständig zu starten
sleep 2

# Finde den Frontend-Prozess, falls vorhanden
FRONTEND_PID=$(pgrep -P $PID)

# Überprüfe, ob der Frontend-Prozess gefunden wurde und beende ihn
if [ ! -z "$FRONTEND_PID" ]; then
    echo "Beende das Frontend mit PID $FRONTEND_PID..."
    kill "$FRONTEND_PID"
else
    echo "Kein Frontend-Prozess gefunden."
fi

# Löse das Backend vom Terminal, falls es noch verbunden ist
disown $PID

echo "Backend läuft nun im Hintergrund."

