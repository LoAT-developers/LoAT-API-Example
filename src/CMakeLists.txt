add_subdirectory(parser)

target_sources(LoAT_API_Example PRIVATE 
    main.cpp
    TranslatorVisitor.cpp
)

target_include_directories(LoAT_API_Example
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)