# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "System Settings"
HOMEPAGE = ""
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-only.txt;md5=49fc03046e56a282c0c743b5d3a55b7c"
PR = "r0"

DEPENDS += " \
    kitemviews \
    kcmutils \
    kio \
    kservice \
    kiconthemes \
    kwidgetsaddons \
    kwindowsystem \
    kxmlgui \
    kdbusaddons \
    kconfig \
    kpackage \
    kdeclarative \
    kactivities \
    kactivitiesstats \
    kirigami \
    plasma-workspace \
"

inherit cmake_plasma

FILES:${PN} += " \
    ${datadir}/kpackage/genericqml/org.kde.systemsettings.sidebar \
    ${datadir}/kglobalaccel/ \
    ${datadir}/zsh/site-functions \
"

RDEPENDS:${PN} += " \
    qtquickcontrols-qmlplugins \
"

