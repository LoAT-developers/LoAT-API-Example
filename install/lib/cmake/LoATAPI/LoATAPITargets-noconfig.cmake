#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "LoATAPI" for configuration ""
set_property(TARGET LoATAPI APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(LoATAPI PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libLoATAPI.a"
  )

list(APPEND _cmake_import_check_targets LoATAPI )
list(APPEND _cmake_import_check_files_for_LoATAPI "${_IMPORT_PREFIX}/lib/libLoATAPI.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
