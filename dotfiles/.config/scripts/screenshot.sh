#
#!/bin/bash
#


# Zähle die Anzahl der bestehenden Screenshot-Dateien
screenshot_count=$(ls ~/Pictures/screenshots/screenshot*.png 2>/dev/null | wc -l)

# Erstelle den neuen Dateinamen
filename="screenshot$screenshot_count.png"

# Ausgabe der Variablen zur Überprüfung
echo "Neuer Screenshot-Dateiname: $filename"

# Mache den Screenshot und speichere ihn unter dem neuen Dateinamen
grim -g "$(slurp)" ~/Pictures/screenshots/$filename

