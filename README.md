# C# Project Template

A template for C# projects

## Install

Generate a new repository from this template.

## Usage

1. Clone the repository generated from this template.

1. Change file names and contents to match your project name.

    I recommend removing everything under `src/` and regenerating them with your own project name. Here are some useful commands:

    ```bash
    dotnet new console -o <project_name> --use-program-main

    dotnet new xunit -o <project_name>.Tests

    dotnet add <project_name>.Tests/<project_name>.Tests.csproj reference <project_name>/<project_name>.csproj
    ```

1. Change `LICENSE` and `README.md`.

1. Search for all `ChangeThis` in the project and change them to your project name.

## Contributing

Ask questions by creating an issue.

PRs accepted.

## License

CC0-1.0 © futrime
