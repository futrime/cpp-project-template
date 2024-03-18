add_rules("mode.debug", "mode.release")

target("cpp-project-template")
    add_files("src/**.cpp")
    add_headerfiles("src/(**.h)")
    add_includedirs("src")
    set_kind("binary")
    set_languages("cxx20")
