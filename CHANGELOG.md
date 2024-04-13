
# TerraPrime Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/), and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

## [0.4.1] - 2024-04-13

### Added
- **Additional Noise Masks for Snow**: Introduced an additional noise mask specifically tailored for snow textures to enhance realism in snowy landscapes.
- **More Blurred Edge Noise Mask for Snow**: Added a more blurred edge noise mask to improve the visual transition at the boundaries of snow-covered areas.

### Changed
- **Nanite Displacement Defaults**: Updated the default settings for Nanite displacement to optimize performance and visual quality.
- **Snow Slope Mask Independence**: Made the snow slope mask independent of the cliff mask to allow for more distinct and customizable terrain blending.

### Fixed
- **Displacement Issues**: Addressed and corrected issues with displacement settings that affected landscape realism and fidelity.
- **Foliage Layer Issues**: Resolved problems with foliage layer rendering that impacted visual accuracy and performance.
- **Foliage Default Settings**: Fixed the default settings for foliage to ensure better integration and appearance within diverse environments.
- **Demo Settings Tweaks**: Adjusted settings within the demo to refine the user experience and showcase the capabilities of TerraPrime more effectively.


## [0.4.0] - 2024-04-09

### Added

- **Additional Paint Layers**: Introduced three new paint layers to materials, expanding the versatility and customization options for terrain detailing.
- **Edge Noise for Layers**: Added edge noise to each layer, enhancing the realism and visual complexity of terrain surfaces.
- **RGB Noise Masks**: Included additional RGB noise masks, offering more options for texture variation and landscape diversity.

### Changed

- **Sample Textures Resolution**: Downgraded sample textures to 2K resolution for size considerations, successfully reducing the plugin size by 650MB without compromising significant visual quality.

### Removed

- **Triplanar Mapping**: Removed triplanar mapping support due to incompatibility with Nanite, focusing on features fully supported by Unreal Engine's advanced rendering system.

### Maintenance

- **Orphaned Large Files**: Conducted a purge of old, large files from the project history to streamline the plugin. The complete commit history has been retained in the pre-0.4.0 branch for archival purposes.


## [0.3.0] - 2024-04-02

### Added

-   **Ambient Occlusion Support**: Enhanced realism with the addition of ambient occlusion, improving the visual depth and detail in shadows.
-   **ORDp File Integration**: Finalized support for ORDp files, allowing for comprehensive layer support and more detailed terrain customization.
-   **C++ Support and Blueprint Nodes for Nanite Tessellation**: Introduced C++ support alongside Blueprint nodes to dynamically toggle Nanite tessellation (r.Nanite.Tessellation) at runtime, offering improved control over performance and visual quality.
-   **Heightmap Resources**: Added all raw heightmaps used in demos into the `Textures/Heightmaps` folder, providing users with essential resources for terrain creation.

### Changed

-   **Updated Default Material and Layer Templates**: Refined the default material and updated the dirt/grass layers template to enhance the base visual quality and provide a more robust starting point for terrain development.
-   **Refactored Blueprints and Landscape Grass Foliage Integration**: Completely rewrote and optimized Blueprints for better performance and reliability. Finalized the integration of landscape grass foliage, tailored for efficiently handling small, scattered foliage across layers.

### Removed

-   **Paint Layers**: Temporarily removed paint layers functionality. This feature is planned to be re-added in the next update with improvements.


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

[Unreleased]: https://github.com/OrchidIsle/TerraPrime/compare/v0.4.1...HEAD
[0.4.0]: https://github.com/OrchidIsle/TerraPrime/compare/v0.4.0...v0.4.1
[0.4.0]: https://github.com/OrchidIsle/TerraPrime/compare/v0.3.0...v0.4.0
[0.3.0]: https://github.com/OrchidIsle/TerraPrime/compare/v0.2.1...v0.3.0
[0.2.1]: https://github.com/OrchidIsle/TerraPrime/compare/v0.2.0...v0.2.1
[0.2.0]: https://github.com/OrchidIsle/TerraPrime/compare/v0.1.0...v0.2.0
[0.1.0]: https://github.com/OrchidIsle/TerraPrime/releases/tag/v0.1.0