# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Trigger actions when certain keys are pressed"
SUMMARY = "Trigger actions when certain keys are pressed"
HOMEPAGE = "https://invent.kde.org/plasma/khotkeys"
LICENSE = "CC0-1.0 & GPL-2.0-Only & LGPL-2.0-Only & LGPL-2.0-or-later "


inherit cmake_plasma
inherit ki18n
inherit reuse_license_checksums
inherit kdoctools  
inherit kcmutils


DEPENDS = " \
    kdbusaddons \
    kglobalaccel \
    kio \
    kxmlgui \
    kdelibs4support \
    ktextwidgets \
    kitemmodels \
    kinit \
    plasma-workspace \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"
