# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "View information about your computer's hardware"
SUMMARY = "KInfocenter gives you a host of information about your hardware and its capabilities"
HOMEPAGE = "https://invent.kde.org/plasma/kinfocenter"
LICENSE = "BSD-2-Clause & BSD-3-Clause & CC0-1.0 & FSFAP & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.1-or-later & LGPL-3.0-only & LicenseRef-KDE-Accepted-LGPL & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit kauth
inherit kconfig
inherit reuse_license_checksums
inherit kcmutils
inherit kdoctools  


DEPENDS = " \
    kio \
    kservice \
    solid \
    systemsettings \
    pciutils \ 
"

RDEPENDS:${PN} = " \
    systemsettings \
    wayland-utils \
"
KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kpackage/kcms/ \
    ${datadir}/desktop-directories/ \
    ${libdir}/qml/org/kde/kinfocenter \
    ${libdir}/libKInfoCenterInternal.so \
"

FILES:${PN}-dev = ""