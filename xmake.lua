add_rules("mode.debug", "mode.release")

target("cpp-project-template")
    add_files("src/**.cc")
    add_includedirs("src")
    set_exceptions("cxx")
    set_kind("binary")
    set_languages("cxx20")
    set_warnings("allextra")
