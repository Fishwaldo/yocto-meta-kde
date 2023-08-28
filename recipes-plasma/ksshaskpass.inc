# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "ssh-add helper that uses KWallet and KPasswordDialog"
SUMMARY = "ssh-add helper that uses KWallet and KPasswordDialog"
HOMEPAGE = "https://invent.kde.org/plasma/ksshaskpass"
LICENSE = " CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit kdoctools
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kwallet \
    kwidgetsaddons \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

