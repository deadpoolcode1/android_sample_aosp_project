LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS) 
# Enable PIE manually. Will get reset on $(CLEAR_VARS). This
# is what enabling PIE translates to behind the scenes.
LOCAL_CFLAGS += -fPIE
LOCAL_LDFLAGS += -fPIE -pie -llog -lcutils 
LOCAL_LDLIBS := -ldl -llog
#ndlog


# give module name
LOCAL_MODULE    := sample_server
# list your C files to compile
LOCAL_SRC_FILES := server.c parson/parson.c
# this option will build executables instead of building library for android application.
include $(BUILD_EXECUTABLE)


