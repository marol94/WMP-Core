
Debian
====================
This directory contains files used to package wmpd/wmp-qt
for Debian-based Linux systems. If you compile wmpd/wmp-qt yourself, there are some useful files here.

## wmp: URI support ##


wmp-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install wmp-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your wmpqt binary to `/usr/bin`
and the `../../share/pixmaps/wmp128.png` to `/usr/share/pixmaps`

wmp-qt.protocol (KDE)

