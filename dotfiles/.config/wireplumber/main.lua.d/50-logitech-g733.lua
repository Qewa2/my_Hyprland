rule = {
    matches = {
        {
            { "node.name", "matches", "alsa_output.usb-Logitech_G733_Wireless_Headset.*" },
        },
    },
    apply_properties = {
        ["node.priority"] = 10000,
        ["node.nick"] = "G733 Headset",
    },
}

table.insert(alsa_monitor.rules, rule)

