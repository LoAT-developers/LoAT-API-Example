target_sources(UnSafetyChecker PRIVATE
  CINTLexer.cpp
  CINTParser.cpp
  CINTBaseListener.cpp
  CINTBaseVisitor.cpp
  CINTListener.cpp
  CINTVisitor.cpp
)

target_include_directories(UnSafetyChecker
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
