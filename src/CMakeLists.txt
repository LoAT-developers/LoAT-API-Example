add_subdirectory(parser)

target_sources(UnSafetyChecker PRIVATE 
    main.cpp
    TranslatorVisitor.cpp
)

target_include_directories(UnSafetyChecker
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)