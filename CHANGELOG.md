
# TerraPrime Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/), and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased](https://github.com/OrchidIsle/TerraPrime/compare/0.2.1...HEAD)

## [0.2.1](https://github.com/OrchidIsle/TerraPrime/compare/0.2.0...0.2.1) - YYYY-MM-DD

### Added

-   Created demo preset specifically tailored for UE default open world map to facilitate easier integration and showcase the plugin's capabilities.
-   Added default LayerInfo files for each terrain layer, streamlining the setup process and improving out-of-the-box usability.

### Changed

-   Modified material setup to apply height blend before landscape layer blending, fixing issues related to painting height-based layers.

## [0.2.0](https://github.com/OrchidIsle/TerraPrime/compare/0.1.0...0.2.0) - 2024-03-25

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
