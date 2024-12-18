<a id="readme-top"></a>

<!-- PROJECT SHIELDS -->
<!--
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![Unlicense License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/othneildrew/logo">
    <img src="test.jpg" alt="Logo" width="100" height="100">
  </a>

  <h3 align="center">PlantSitter Project<3</h3>

  <p align="center">
    A project for automate the management of your beautiful plants based on ESP32 :smile:
    <br />
    <br />
    <br />
    <a href="https://github.com/MrDerrick-007/PlantSitter/">View Demo</a>
    ·
    <a href="https://github.com/MrDerrick-007/PlantSitter//issues/new?labels=bug&template=bug-report---.md">Report Bug</a>
    ·
    <a href="https://github.com/MrDerrick-007/PlantSitter//issues/new?labels=enhancement&template=feature-request---.md">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

The idea for this project start from a personal need: to automatically manage (in the cheapest way) the plants I have at home during the summer when no one is available to take care of them. The goal behind this project is to remotely monitor the condition of the plants and ensure they are watered when needed. It will be possible to track various data, such as soil moisture and room temperature. When the system detects low soil moisture, a pump will be activated to water the target plant. 

<!--### Built With

This section should list any major frameworks/libraries used to bootstrap your project. Leave any add-ons/plugins for the acknowledgements section. Here are a few examples.

* [![Next][Next.js]][Next-url]
* [![React][React.js]][React-url]
* [![Vue][Vue.js]][Vue-url]
* [![Angular][Angular.io]][Angular-url]
* [![Svelte][Svelte.dev]][Svelte-url]
* [![Laravel][Laravel.com]][Laravel-url]
* [![Bootstrap][Bootstrap.com]][Bootstrap-url]
* [![JQuery][JQuery.com]][JQuery-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>

-->

<!-- GETTING STARTED -->
## Getting Started

Instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.

### Prerequisites HW

For the project you need:  
##add list of components--------------

### Installation

For installing and setting up your app you have to follow this steps:

1. Get Arduine IDE 2 at [https://docs.arduino.cc/software/ide-v2/tutorials/getting-started/ide-v2-downloading-and-installing/](https://example.com)
2. Install ESP32 board on the IDE following this guide [https://randomnerdtutorials.com/installing-esp32-arduino-ide-2-0/](https://example.com)
3. Install Filesystem Uploader Plugin [https://randomnerdtutorials.com/arduino-ide-2-install-esp32-littlefs/](https://example.com)
4. To build the asynchronous web server, you need to install the following libraries:
   * https://github.com/me-no-dev/ESPAsyncWebServer
   * https://github.com/me-no-dev/AsyncTCP
5. To build the web server you need two different files. The Arduino sketch and the HTML file. The HTML file should be saved inside a folder called data inside the Arduino sketch folder, as shown below:
<img style="float: right;" src="https://github.com/user-attachments/assets/c0e31e9c-0404-4302-865e-1666f52bc7b0">

<!-- USAGE EXAMPLES -->
## Usage

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [x] Buy all the components
- [x] Test a basic version of the server v1
- [ ] Improve UI🌟
- [ ] Test a basic versione of the system without water irrigation (winter version)🥶
- [ ] Create an STL file for the hardware support🍅
- [ ] Create the summer version with the water pump 
- [ ] Remote check of the light
- [ ] Remote check of the water level for the irrigation
- [ ] Remote check of the room condition (temperature, air humidity, air quality)

See the [open issues](https://github.com/MrDerrick-007/PlantSitter//issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

### Top contributors:

<a href="https://github.com/MrDerrick-007/PlantSitter/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=MrDerrick-007/PlantSitter" alt="contrib.rocks image" />
</a>

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the Unlicense License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTACT -->
## Contact
Project Link: [https://github.com/MrDerrick-007/PlantSitter/](https://github.com/MrDerrick-007/PlantSitter/)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

Use this space to list resources you find helpful and would like to give credit to. I've included a few of my favorites to kick things off!

* [Choose an Open Source License](https://choosealicense.com)
* [GitHub Emoji Cheat Sheet](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [Malven's Flexbox Cheatsheet](https://flexbox.malven.co/)
* [Malven's Grid Cheatsheet](https://grid.malven.co/)
* [Img Shields](https://shields.io)
* [GitHub Pages](https://pages.github.com)
* [Font Awesome](https://fontawesome.com)
* [React Icons](https://react-icons.github.io/react-icons/search)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/MrDerrick-007/PlantSitter.svg?style=for-the-badge
[contributors-url]: https://github.com/MrDerrick-007/PlantSitter//graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/MrDerrick-007/PlantSitter.svg?style=for-the-badge
[forks-url]: https://github.com/MrDerrick-007/PlantSitter/network/members
[stars-shield]: https://img.shields.io/github/stars/MrDerrick-007/PlantSitter.svg?style=for-the-badge
[stars-url]: https://github.com/MrDerrick-007/PlantSitter/stargazers
[issues-shield]: https://img.shields.io/github/issues/MrDerrick-007/PlantSitter/.svg?style=for-the-badge
[issues-url]: https://github.com/MrDerrick-007/PlantSitter/issues
[license-shield]: https://img.shields.io/github/license/MrDerrick-007/PlantSitter.svg?style=for-the-badge
[license-url]: https://github.com/MrDerrick-007/PlantSitter/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com 
