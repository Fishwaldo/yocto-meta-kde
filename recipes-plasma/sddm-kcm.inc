# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Login Screen (SDDM) System Settings Module"
SUMMARY = "sddm-kcm is a KConfig Module (KCM) that integrates itself into KDE's System Settings and serves the purpose of configuring the Simple Desktop Display Manager (SDDM) - the recommended display manager for KDE Plasma."
HOMEPAGE = "https://invent.kde.org/plasma/sddm-kcm"
LICENSE = "CC0-1.0 & GPL-2.0-or-later & GPL-3.0-only & LicenseRef-KDE-Accepted-GPL"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit kauth
inherit kconfig
inherit reuse_license_checksums
inherit kcmutils 


DEPENDS = " \
    knewstuff \
    kconfigwidgets \
    kio \
"

RDEPENDS:${PN} = " \
    sddm \
"

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${datadir}/kpackage/kcms/kcm_sddm/ \
"
