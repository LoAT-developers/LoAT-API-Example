target_sources(LoAT_API_Example PRIVATE
  CINTLexer.cpp
  CINTParser.cpp
  CINTBaseListener.cpp
  CINTBaseVisitor.cpp
  CINTListener.cpp
  CINTVisitor.cpp
)

target_include_directories(LoAT_API_Example
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
