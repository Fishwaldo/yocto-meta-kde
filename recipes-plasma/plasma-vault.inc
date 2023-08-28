# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Plasma applet and services for creating encrypted vaults"
DESCRIPTION = "Plasma applet and services for creating encrypted vaults"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-vault"
LICENSE = "GPL-2.0-only | GPL-3.0-only | LicenseRef-KDE-Accepted-GPL"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977 \
    file://LICENSES/GPL-3.0-only.txt;md5=1c76c4cc354acaac30ed4d5eefea7245 \
    file://LICENSES/LicenseRef-KDE-Accepted-GPL.txt;md5=b4c280013bbbadfbe92219498dc5228c \
"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    ki18n \
    plasma-framework \
    networkmanager-qt \
    libksysguard \
"

inherit cmake_plasma
inherit cmake_kf5
inherit kdoctools
inherit kconfig

FILES:${PN} += " \
    ${datadir}/plasma/plasmoids/org.kde.plasma.vault/* \
"
