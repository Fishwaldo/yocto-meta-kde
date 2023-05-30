# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "A friendly onboarding wizard for Plasma"
SUMMARY = "A friendly onboarding wizard for Plasma"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-welcome"
LICENSE = "CC-By-SA-4.0 & CC0-1.0 & GPL-2.0-Only & GPL-2.0-or-later & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit reuse_license_checksums
inherit kcoreaddons
inherit kcmutils 
inherit kconfig 
inherit ki18n 

DEPENDS = " \
    kirigami \
    kdbusaddons \
    kio \
    knewstuff \
    knotifications \
    plasma-framework \
    kservice \
    kwindowsystem \
    kuserfeedback \
    kaccounts-integration \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/qml/org/kde/plasma/welcome \
"