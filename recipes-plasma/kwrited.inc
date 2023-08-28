# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Listen to traditional system notifications"
SUMMARY = "Listen to traditional system notifications"
HOMEPAGE = "https://invent.kde.org/plasma/kwrited"
LICENSE = " CC0-1.0 & GPL-2.0-or-later"


inherit cmake_plasma
inherit kcoreaddons
inherit ki18n
inherit reuse_license_checksums


DEPENDS = " \
    kdbusaddons \
    knotifications \
    kpty \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

