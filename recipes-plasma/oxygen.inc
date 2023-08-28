# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "The Oxygen Style for Qt/KDE Applications"
SUMMARY = "The Oxygen Style for Qt/KDE Applications"
HOMEPAGE = "https://invent.kde.org/plasma/oxygen"
LICENSE = " CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & GPL-3.0-or-later & LGPL-2.0-only & LGPL-2.0-or-later & LGPL-2.1-only & LGPL-3.0-only & LicenseRef-KDE-Accepted-GPL & LicenseRef-KDE-Accepted-LGPL & MIT"


inherit cmake_plasma
inherit kauth
inherit kcmutils
inherit kconfig
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    frameworkintegration \
    kcodecs \
    kcompletion \
    kconfigwidgets \
    kguiaddons \
    kservice \
    kwidgetsaddons \
    kwindowsystem \
    kdecoration \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

