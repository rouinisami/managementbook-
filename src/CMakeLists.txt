# Define the executable
add_executable(exec main.cpp book.cpp suppliers.cpp global.cpp purchases.cpp)

# Link libraries (e.g., SQLite3)
target_link_libraries(exec sqlite3)
