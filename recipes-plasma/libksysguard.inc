# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KSysGuard library"
HOMEPAGE = ""
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.1-only.txt;md5=147a320ed8b16b036829a0c71d424153"
PR = "r0"

DEPENDS = " \
    libnl \
    libcap \
    libpcap \
    lmsensors \
    kcompletion \
    kconfig \
    kconfigwidgets \
    kcoreaddons \
    kiconthemes \
    knewstuff \
    kservice \
    kwidgetsaddons \
    kwindowsystem \
    networkmanager-qt \
    plasma-framework \
    qtwebchannel \
    qtwebengine \
    libcap \
"

inherit cmake_plasma
#cmake files include sysroot paths
inherit cmake_sysroot

FILES:${PN} += " \
    ${datadir}/ksysguard \
    ${libdir}/qml \
"
