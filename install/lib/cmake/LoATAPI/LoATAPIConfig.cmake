# ---------------------------------------------------------------------------
# This placeholder is replaced by the configure_package_config_file()
# ---------------------------------------------------------------------------

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was LoATAPIConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

# ---------------------------------------------------------------------------
# Include the CMake module for dependency resolution.
# ---------------------------------------------------------------------------
include(CMakeFindDependencyMacro)

# ---------------------------------------------------------------------------
# Ensure that Boost is available on the client side.
# ---------------------------------------------------------------------------
find_dependency(Boost REQUIRED)

# ---------------------------------------------------------------------------
# Create an imported interface target for Boost if it does not already exist.
# ---------------------------------------------------------------------------
if(NOT TARGET Boost::boost)

  # Create an INTERFACE IMPORTED target for Boost.
  add_library(Boost::boost INTERFACE IMPORTED)

  # Set the INTERFACE_INCLUDE_DIRECTORIES property for Boost::boost to the Boost include paths.
  # This property ensures that any target linking to Boost::boost automatically receives the Boost include directories.
  set_target_properties(Boost::boost PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${Boost_INCLUDE_DIRS}"
  )

endif()

# ---------------------------------------------------------------------------
# Include the exported targets file for this API.
# ---------------------------------------------------------------------------
include("${CMAKE_CURRENT_LIST_DIR}/LoATAPITargets.cmake")

# ---------------------------------------------------------------------------
# Set additional variables for static include directories and libraries.
# These variables (LoAT_API_Static_INCLUDE_DIRS and LoAT_API_Static_LIBRARIES) provide
# the installation paths for headers and libraries, and may be used by clients for further configuration.
# ---------------------------------------------------------------------------
set(LoAT_API_Static_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set(LoAT_API_Static_LIBRARIES "${PACKAGE_PREFIX_DIR}/lib")
