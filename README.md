# TerraPrime :earth_americas:

**An Unreal Engine 5.4+ AutoMaterial & PCG Template Plugin**

TerraPrime is a state-of-the-art landscape automaterial and procedural content generation (PCG) plugin designed for Unreal Engine 5.4 and above. Engineered to streamline the texturing process and support seamless terrain layer blending, TerraPrime is under active development and maintenance for use in our upcoming TBA game while also being shared with the open-source community to enhance through collaborative input and pull requests. Although it includes only low-resolution (2K) textures and placeholder assets to keep the package size manageable, TerraPrime is intended to be used with user-provided high-resolution, Nanite-supported materials and textures. Integrating advanced features such as support for Unreal Engine’s Nanite and Lumen technologies, TerraPrime significantly pushes the boundaries of realism in virtual worlds, making it an indispensable tool for developers aiming to pioneer next-generation game environments and virtual simulations.

## Release & Demo Downloads :arrow_down:

[![Latest Release](https://img.shields.io/badge/download-latest%20release-blue.svg?style=for-the-badge&logo=github)](https://github.com/OrchidIsle/TerraPrime/releases/latest) 
[![Latest Demo](https://img.shields.io/badge/download-latest%20demo-brightgreen.svg?style=for-the-badge&logo=unrealengine)](https://download.orchidisle.games/TerraPrimeDemo/TerraPrimeDemo-Win64-Latest.zip)

## Key Features :sparkles:

- **Seamless UE 5.4+ Integration**: Optimized for Nanite and Lumen.
- **Landscape Layers**: Dirt, Cliff, Grass, Snow, Beach, Seabed, and customizable Paint Layers.
- **Advanced Material Techniques**: Distance variation, macro variation, and cell bombing for lifelike textures.
- **Height-defined Layer Blending**: Ensures natural transitions between terrains.
- **New in 0.4.0**: Added edge noise and additional RGB noise masks for texture variation.
- **New in 0.3.0**: Added support for ambient occlusion and dynamic control over Nanite tessellation at runtime.
- **C++ Classes and Blueprint Nodes**: For advanced control over features like Nanite tessellation.

For a detailed list of features and updates, please visit our [Wiki](https://github.com/OrchidIsle/TerraPrime/wiki).

## Disclaimer :warning:

**TerraPrime**: Optimized for Next-Gen Capabilities! :rocket:

- :computer: **High-End Requirements**: Primarily developed with Unreal Engine's Nanite and Lumen technologies in mind, TerraPrime is tailored for mid-to-high range systems.
- :construction: **Nanite in Experimental Stage**: Features involving Nanite, especially tessellation, are currently experimental. Full functionality is anticipated around Unreal Engine versions 5.6 or 5.7.
- :x: **Known Limitation**: The significant unresolved issue at present is the integration of Runtime Virtual Texturing (RVT) with Nanite object blending.

Stay tuned as we continue to enhance and expand TerraPrime's capabilities for the cutting edge of landscape design! :telescope:

## System Recommendations :computer:

For the best experience with TerraPrime, we recommend the following system specifications:
- **CPU**: Intel i7 or AMD Ryzen 7, 3.0 GHz or faster
- **GPU**: NVIDIA RTX 3080 or AMD RX 6800 XT with at least 10GB VRAM
- **RAM**: 32GB or higher
- **Storage**: NVMe SSD with at least 100GB of free space

## Installation :wrench:

TerraPrime can be integrated into your project by cloning as a Git submodule or by downloading it as a ZIP file. For step-by-step instructions, refer to our [Installation Guide](https://github.com/OrchidIsle/TerraPrime/wiki/Installation-Guide).

## How to Use :memo:

Enhance your landscapes with TerraPrime by following our comprehensive [Usage Guidelines](https://github.com/OrchidIsle/TerraPrime/wiki/How-to-Use) in the wiki.

## Demo Overview

Explore the capabilities of TerraPrime with our interactive demo, available for download. The demo includes three distinct maps, each designed to showcase different features of the TerraPrime plugin:

- **Open World Basic**: Experience the base functionality of TerraPrime with standard Unreal Engine landscapes.
- **Open World Nanite**: See the power of Nanite integration for enhanced terrain detail.
- **Open World Nanite with Foliage**: Discover the dynamic auto-layer landscape grass system with various environmental elements added for realism.

Each map is designed to demonstrate TerraPrime’s seamless blending of terrain layers and advanced material techniques, giving you a hands-on understanding of how to elevate your projects.

### Demo Controls and Features
- **Switch Maps**: Easily switch between different demo environments.
- **Performance Monitoring**: Toggle performance stats to evaluate TerraPrime's impact on frame rates and other metrics.
- **Dynamic Nanite Tessellation**: Experience real-time adjustments in landscape detail.

For detailed instructions on how to navigate and utilize the demo, including character controls and specific features of each map, please refer to our [Demo Usage Guide](https://github.com/OrchidIsle/TerraPrime/wiki/Demo-Guide).

[Download the demo](https://download.orchidisle.games/TerraPrimeDemo/TerraPrimeDemo-Win64-Latest.zip) today to start exploring the advanced capabilities of TerraPrime and see how it can transform your landscape projects in Unreal Engine.

## Known Issues :warning:

- **RVT Integration**: RVT does not currently work with Nanite tessellated landscapes.
- **Tiling Issues**: Nanite landscapes may not tile or blend well without specific configurations.

## Support :handshake:

For support, questions, or contributions, join our [GitHub Discussions](https://github.com/OrchidIsle/TerraPrime/discussions).

## Credits :star2:

Thanks to CGDealers, Unreal Sensei, Shad0w73, Rodrigo Villani, Jan 'Schnett' Schneider, and the public domain resources from AmbientCG by Lennart Demes. For more about their contributions, visit our [Credits Page](https://github.com/OrchidIsle/TerraPrime/wiki/Credits).

Enjoy creating dynamic landscapes with TerraPrime! :art:
