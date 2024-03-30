
# TerraPrime Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/), and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]


## [0.2.2] - 2024-03-27

### Added

-   **Demo Download Link**: Introduced a demo download link in the README for easy access to a hands-on TerraPrime experience.
-   **Default LayerInfo Files**: Added default LayerInfo files for each layer, streamlining the setup process for new users.
-   **Incorporated CI**: Github CI Support for easy updates of Demo and Plugin.

### Changed

-   **Updated Default Plugin Settings**: Improved the default plugin settings to enhance user experience with TerraPrime.
-   **Open World Default Material Instance (MI)**: Updated the default MI for open-world projects, aligning with best practices for realism and performance.

### Features

-   **Flight Mode for Demo**: Added flight mode to the demo, allowing users to easily explore landscapes. Toggle flight mode on/off with the `F` key.
-   **Fast Flight**: Implemented a fast flight option within the demo, activated by holding the `Shift` key.
-   **Performance Stats**: Added functionality to toggle performance statistics on the screen with the `P` key, providing insights into FPS, system memory, response time, and CPU usage.
-   **Pause Menu**: Integrated a pause menu in the demo, accessible with the `Esc` key, for changing levels or exiting the demo.

### Fixed

-   **Plugin Version Retrieval**: Corrected and optimized the process for retrieving the plugin version within the Unreal Engine environment.

## [0.2.1] - 2024-03-25

### Added

-   Created demo preset specifically tailored for UE default open world map to facilitate easier integration and showcase the plugin's capabilities.
-   Added default LayerInfo files for each terrain layer, streamlining the setup process and improving out-of-the-box usability.

### Changed

-   Modified material setup to apply height blend before landscape layer blending, fixing issues related to painting height-based layers.

## [0.2.0] - 2024-03-25

### Added

-   Enabled Nanite support for advanced geometry and added 8k island preset to improve landscape detail.
-   Added world position-based macro variation to enhance terrain natural appearance.

### Changed

-   Improved grass blending for more natural transitions between terrain types.
-   Updated default material settings to better support 8k maps, enhancing texture detail and quality.
-   Adjusted seabed displacement offset for more realistic underwater landscapes.
-   Updated parameters for enhanced control over material properties.
-   Updated slope blend algorithm for smoother terrain transitions.
-   Fixed noise mask reference to ensure proper terrain texture application.
-   Adjusted defaults, textures, and fixed dirt-grass blending for enhanced visual fidelity.
-   Updated snow layer parameters for more realistic winter scenes.

### Fixed

-   Corrected issues with grass blending to remove harsh lines or incorrect texture applications.

## [0.1.0](https://github.com/OrchidIsle/TerraPrime/releases/tag/0.1.0) - 2024-03-20

### Added

-   Initial commit with the basic project setup.
-   Added texture files to begin terrain material development.
-   Created `FilterPlugin.ini` for plugin configuration options.
-   Added platform allow list for specifying compatible systems or devices.
-   Introduced initial README with project overview, setup, and usage instructions.

### Changed

-   Updated README.md multiple times to refine project documentation and provide clear setup and usage guidelines.
-   Added "todo" section in README for future development plans and feature additions.

[Unreleased]: https://github.com/OrchidIsle/TerraPrime/compare/v0.2.1...HEAD
[0.2.1]: https://github.com/OrchidIsle/TerraPrime/compare/v0.2.0...v0.2.1
[0.2.0]: https://github.com/OrchidIsle/TerraPrime/compare/v0.1.0...v0.2.0
[0.1.0]: https://github.com/OrchidIsle/TerraPrime/releases/tag/v0.1.0