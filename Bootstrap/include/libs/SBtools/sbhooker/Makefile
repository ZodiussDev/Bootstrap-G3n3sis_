TARGET := iphone:clang:latest:7.0
ARCHS = arm64
THEOS_PACKAGE_SCHEME=roothide
INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = SBHooker

SBHooker_FILES = Tweak.x
SBHooker_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
