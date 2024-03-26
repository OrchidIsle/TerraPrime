
  

# TerraPrime

  

#### A UE5.4 AutoMaterial & PCG Template Plugin

  

## Overview

  

TerraPrime is a cutting-edge landscape automaterial and procedural content generation (PCG) template plugin specifically designed for Unreal Engine 5.4 and beyond. Embracing the revolutionary features of UE5, including Nanite virtualized geometry and Lumen global illumination, TerraPrime provides an unparalleled solution for auto-texturing vast landscapes with real-time displacement and detail enhancement.

  

Crafted for next-gen game development and virtual environments, TerraPrime automates the texturing process, allowing for seamless and intelligent blending of multiple terrain layers based on height, slope, and custom parameters. This plugin is your gateway to creating expansive, dynamic landscapes with ease, pushing the boundaries of realism in virtual worlds.

  

### Key Features

  

- Seamless integration with Unreal Engine 5.4's advanced features, ensuring compatibility with Nanite and Lumen for stunning visual fidelity.

- An array of predefined landscape layers including Dirt, Cliff, Grass, Snow, Beach, and Seabed, plus customizable Paint Layers for bespoke designs.

- Advanced material techniques such as distance variation, macro and normal variation, and cell bombing for lifelike terrain textures.

- Height-defined layer blending for natural transitions between different terrains such as snow-capped mountains and sandy shores.

- TerraPrime is tailored for developers and designers aiming to elevate their landscapes to the next generation of gaming and simulation.

  

### Landscape Layers

  

-  **Dirt**

-  **Cliff**

-  **Grass**

-  **Snow**

-  **Beach**

-  **Seabed**

-  **Paint Layer 1**

-  **Paint Layer 2**

-  **Paint Layer 3**

  ## System Recommendations

To harness the full potential of TerraPrime alongside Unreal Engine 5.4’s cutting-edge features, particularly Nanite, we recommend the following enhanced system specifications:

-   **CPU**: Intel i7 or AMD Ryzen 7, 3.0 GHz or faster.
-   **GPU**: NVIDIA RTX 3080 or AMD RX 6800 XT with at least 10GB VRAM.
-   **RAM**: 32GB or higher.
-   **Storage**: NVMe SSD with at least 100GB of free space.
-   **Operating System**: Windows 10 (64-bit) or later, macOS Big Sur (11.0) or later.

These elevated specs are designed to ensure developers and creators can experience the full graphical and processing power required for detailed landscape creation and manipulation in Unreal Engine 5.4, especially when leveraging intensive features such as Nanite and Lumen for real-time lighting and geometry.

## Prerequisites

  

Before installing TerraPrime, ensure you have the following:

  

- Unreal Engine 5.4 installed on your system.

- Access to Git if opting to clone the repository (for method 1a).

- Basic understanding of Unreal Engine project structure and plugin integration.

  

## Installation Instructions

  

You can add the TerraPrime plugin to your project either by cloning it as a Git submodule or by manually downloading it as a ZIP file and adding it to your project.

  

### 1a. Cloning as a Git Submodule (Recommended for Git Users)

  

1. Open your terminal or command prompt.

2. Navigate to your project's root directory.

3. Execute the following command to add TerraPrime as a submodule:

bashCopy code

`git submodule add https://github.com/OrchiIsle/TerraPrime.git Plugins/TerraPrime`

4. Initialize and update the submodule:

bashCopy code

`git submodule update --init --recursive`

5. Open your Unreal Engine project. UE should automatically detect the new plugin and compile it if necessary.

  

### 1b. Downloading as ZIP and Adding Manually

  

1. Go to the TerraPrime repository on GitHub.

2. Click on the 'Code' button and select 'Download ZIP'.

3. Once downloaded, extract the ZIP file.

4. Copy the extracted folder to your project's `Plugins` directory, which can be found at `<YourProjectFolder>/Plugins/`. If the Plugins directory does not exist, create it.

5. Rename the extracted folder to `TerraPrime` (if it is not already named that).

6. Open your Unreal Engine project. UE should automatically detect the new plugin and compile it if necessary.

  

## Post-Installation

  

After installation, perform the following steps to ensure TerraPrime is properly integrated:

  

1. Open your project in Unreal Engine.

2. Go to Edit -> Plugins to open the Plugins window.

3. Locate the TerraPrime plugin in the list and ensure it is enabled.

4. Restart the Unreal Engine editor if prompted.

## Usage

  
  

Once you have successfully installed the TerraPrime Landscape AutoMaterial plugin in your Unreal Engine 5 project, you can begin utilizing its features to enhance your landscapes. Here's a comprehensive guide on how to use the AutoMaterial post-installation:

  

1.  **Accessing TerraPrime Content:**

- Open your Unreal Engine project.

- In the Content Browser, you might not immediately see the Plugins folder where the TerraPrime content resides. To view it, click on 'Settings' (the gear icon) at the bottom of the Content Browser and check the 'Show Plugin Content' option.

- Navigate to `./Plugins/TerraPrime Content/AutoMaterial`. This path leads you to the content provided by the TerraPrime plugin, including the essential materials for landscape auto-generation.

2.  **Creating a Material Instance from M_Landscape:**

- Within the `AutoMaterial` folder, find the material named `M_Landscape`. This is the master landscape material provided by TerraPrime, equipped with multiple layers such as Dirt, Grass, Cliff, and more, along with advanced features like distance variation, macro variation, and Nanite displacement.

- Right-click on the `M_Landscape` material and select "Create Material Instance". This option allows you to generate a customizable version of the master material without altering the original.

- Immediately after selection, Unreal Engine prompts you to rename the new material instance. Choose a descriptive name that reflects its purpose within your project.

3.  **Handling the Material Instance:**

- Once you've renamed the material instance, it is placed within the same folder. However, if you prefer the material instance not to update automatically with plugin updates, or if you wish to customize it extensively, consider duplicating the material instance.

- To duplicate, right-click on your newly created material instance and select "Duplicate". Rename this duplicate accordingly.

- Move your original or duplicated material instance to your project's content folder to keep your custom assets organized.

4.  **Applying the Material Instance to Your Landscape:**

- You can apply the TerraPrime material instance to your landscape either when creating a new landscape or by updating an existing one. To do this, navigate to the landscape editor or the details panel of your landscape asset.

- Assign your material instance to the landscape's material property. This action will apply all the visual characteristics defined in the material instance to your landscape, rendering the various terrain types according to the landscape's height and slope data.

5.  **Customizing the Material Instance:**

- Double-click on your material instance in the Content Browser to open its properties. Here, you can tweak the settings to fit your landscape's specific needs.

- Adjust parameters such as layer weights, texture scales, and color variations to get the desired look for each terrain type. The adjustments you make will immediately reflect on your landscape in the viewport.

6.  **Advanced Setup:**

- Detailed instructions for setting up more advanced features like Runtime Virtual Texturing (RVT) and Nanite will be provided soon. These features enable even more detailed and efficient landscapes in Unreal Engine 5.

  

By following these steps, you can effectively integrate and utilize the TerraPrime Landscape AutoMaterial in your Unreal Engine projects, enhancing your landscapes with dynamic texturing and advanced material effects.

  

## // TODO: Upcoming Features and Enhancements

  

The TerraPrime Landscape AutoMaterial plugin continues to advance, introducing new features and improvements to aid users in crafting more immersive environments within Unreal Engine. Below are the enhancements that we are excited to share with our community in the upcoming updates:

  

-  **Public Domain Nanite-Enabled Landscape Grass and Foliage**: Efforts are underway to incorporate AAA quality, Nanite-enabled grass and foliage assets that fall under the public domain. This initiative aims to equip users with the ability to enhance their landscapes with lifelike, high-detail vegetation that leverages the full potential of UE5's Nanite technology for superior visual quality and performance.

-  **Landscape Grass Foliage Templates**: In our upcoming updates, we plan to introduce an array of landscape grass foliage templates. These predefined configurations are designed for ease of customization and application, enabling users to effortlessly impart a more authentic natural appearance to various landscapes and ecosystems.

-  **Procedural Content Generation (PCG) Templates and Meshes**: We are developing initial PCG templates and meshes that are tailored for distinct biomes and climates. This collection will support users in rapidly creating diverse settings — from dense, verdant jungles to barren, sandy dunes — each with their own unique characteristics and environmental elements.

-  **Expanded Cell Bombing Techniques**: We are also expanding our repertoire of cell bombing techniques to further diminish texture repetition and augment the uniqueness of each landscape. These upcoming techniques will offer users additional strategies to ensure every terrain is distinct and visually engaging, avoiding the common pitfalls of homogeneity.

  

These forthcoming features are aimed at bolstering the flexibility and accessibility of the TerraPrime Landscape AutoMaterial plugin, enabling creators to forge more detailed and varied virtual landscapes with ease. We're excited for you to experience these enhancements and look forward to bringing more dynamic and interactive elements to your Unreal Engine projects. Stay tuned for future updates and developments!

  

## Support

  

For issues, questions, or contributions, please refer to the TerraPrime repository on GitHub or contact the support team through the Unreal Engine forums.

  

Enjoy creating beautiful, dynamic landscapes with TerraPrime!

  
  

## Credits

  

This section is dedicated to acknowledging and expressing gratitude towards the individuals and resources that have significantly contributed to the development and refinement of the TerraPrime Landscape AutoMaterial plugin:

  

-  **CGDealers & Unreal Sensei**: A heartfelt thank you goes out to CGDealers and Unreal Sensei for their outstanding YouTube tutorials which have greatly influenced our understanding of landscape materials and best practices within Unreal Engine. Their tutorials serve as a cornerstone for learning and inspiration within the Unreal Engine community. Additionally, Unreal Sensei's Blueprints Master Class has provided in-depth knowledge crucial for advancing our plugin's functionality.

-  **Shad0w73**: The author of the community tutorial on Landscape With Macro Variations for UEFN, has provided invaluable insights into utilizing macro variations to reduce texture tiling and enhance landscape realism. This guidance has played a pivotal role in the development of TerraPrime’s texturing capabilities. More details can be found on [Epic Developer Community Forums](https://forums.unrealengine.com/t/community-tutorial-landscape-with-macro-variations-for-uefn/1212384) and the [Epic Games Developer Community page](https://dev.epicgames.com/community/learning/tutorials/mM97/fortnite-landscape-with-macro-variations-for-uefn).

-  **Rodrigo Villani**: We extend our thanks to Rodrigo Villani for his enlightening tutorial on triplanar projection, which has greatly contributed to TerraPrime’s enhanced texturing techniques. His step-by-step approach has made complex concepts more accessible to developers of all skill levels. The tutorial can be viewed [here](https://youtu.be/6Q89fRpMck8).

-  **Jan 'Schnett' Schneider**: Our appreciation goes to Jan 'Schnett' Schneider for the cell bombing/texture variation project. The techniques and methodologies provided have been essential in minimizing texture repetition, thereby significantly improving the visual quality of landscapes in TerraPrime. Explore his contributions on [GitHub](https://github.com/Schnett/TextureVariation) and [ArtStation](https://www.artstation.com/blogs/janarenz/L6Qq/about-texture-repetition-texture-variation-unreal-engine-45).

-  **AmbientCG (Lennart Demes)**: Special recognition is extended to AmbientCG and Lennart Demes for their extensive collection of public domain textures. These high-quality, seamless textures, available in up to 8K resolution, have been instrumental in creating realistic and detailed landscapes within TerraPrime. All textures are provided under the Creative Commons CC0 License, offering incredible freedom for commercial and personal projects. Explore the vast collection and learn more about the license on [AmbientCG](https://ambientcg.com/).

  

By leveraging these resources and learning from these industry experts, TerraPrime has been able to provide an enhanced experience for Unreal Engine users, enabling them to create stunning, realistic landscapes with greater efficiency and artistic freedom.