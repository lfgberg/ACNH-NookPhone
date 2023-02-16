# ACNH NookPhone Rainmeter Skin

This is a rainmeter launcher skin modeled after the NookPhone from Animal Crossing New Horizons.

![SkinPreview](https://github.com/lfgberg/ACNH-NookPhone/blob/master/Previews/v1.4.0.png)

![VariantsPreview](https://github.com/lfgberg/ACNH-NookPhone/blob/master/Previews/Size%20Variants.png)

### Contributors

Author - [Lfgberg](https://github.com/lfgberg)
<br>
[!["Buy Me A Coffee"](https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png)](https://www.buymeacoffee.com/lfgberg)

Contributed Icons - [plomdawg](https://github.com/plomdawg)

### Prerequisites

You will need [Rainmeter](https://www.rainmeter.net/) in order to use this skin

### Installing + Configuring

1. Download and install the [latest release](https://github.com/lfgberg/ACNH-NookPhone/releases) .rmskin file
2. Read the welcome skin and click on `configuration file`
3. Read the directions in the configuration file and edit the variables as directed

If you can't find the configuration file for some reason it's in the @Resources folder called `Settings.inc`

### Example Settings.inc file
```ini
;_____  _                       _____      _   _   _
;|  __ \| |                     / ____|    | | | | (_)
;| |__) | | __ _ _   _  ___ _ _| (___   ___| |_| |_ _ _ __   __ _ ___
;|  ___/| |/ _` | | | |/ _ \ '__\___ \ / _ \ __| __| | '_ \ / _` / __|
;| |    | | (_| | |_| |  __/ |  ____) |  __/ |_| |_| | | | | (_| \__ \
;|_|    |_|\__,_|\__, |\___|_| |_____/ \___|\__|\__|_|_| |_|\__, |___/
;                __/ |                                      __/ |
;               |___/                                      |___/

;Please specify your music player of choice options are:
;AIMP - "AIMP"
;foobar2000/J. River Media Center/Media Jukebox/MusicBee - "CAD"
;iTunes - "iTunes"
;MediaMonkey - "MediaMonkey"
;Winamp - "Winamp"
;WMP - "WMP"
;Last.fm/TTPlayer/OpenPandora/Zune - "WLM"

MusicPlayer="iTunes"

;_   _             _    _____  _                       _____      _   _   _
;| \ | |           | |  |  __ \| |                     / ____|    | | | | (_)
;|  \| | ___   ___ | | _| |__) | |__   ___  _ __   ___| (___   ___| |_| |_ _ _ __   __ _ ___
;| . ` |/ _ \ / _ \| |/ /  ___/| '_ \ / _ \| '_ \ / _ \\___ \ / _ \ __| __| | '_ \ / _` / __|
;| |\  | (_) | (_) |   <| |    | | | | (_) | | | |  __/____) |  __/ |_| |_| | | | | (_| \__ \
;|_| \_|\___/ \___/|_|\_\_|    |_| |_|\___/|_| |_|\___|_____/ \___|\__|\__|_|_| |_|\__, |___/
;                                                                                  __/ |
;                                                                                 |___/


;Set ToggleOutline to either 0/1, default is 1 which enables an outline when you hover over an app, 0 disables this feature
ToggleOutline=1

;In order to customize the programs that are launched by the nookphone, please edit the following variables
;Apps are numbered from left to right, there are 5 rows of 3 apps for a total of 15 possible programs
;This means that App 8 is displayed on the third row and second column, App 13 is on the fifth row and first column and so on and so forth

;Replace AppImage with the file path of an icon you'd like to display
;To make a new icon please edit either placeholder-icon.png or placeholder-icon.pdn in the images folder so that everything alligns properly
;There are some example icons in the Images folder, feel free to use them
;If you make your own icon, either provide it's path, OR put it in the images folder and reference it with #@#Images\YourIconName.png
;Replace AppPath with the file path of your program
;Replace AppPath with the file path of your program
AppImage=#@#Images\brave.png
AppName=Brave Browser
AppPath=C:\Program Files (x86)\BraveSoftware\Brave-Browser\Application\brave.exe

App2Image=#@#Images\discord.png
App2Name=Discord
App2Path=C:\Users\lfgab\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Discord Inc\Discord.lnk

App3Image=#@#Images\steam.png
App3Name=Steam
App3Path=C:\Program Files (x86)\Steam\steam.exe

App4Image=#@#Images\itunes.png
App4Name=iTunes
App4Path=C:\Users\lfgab\AppData\Roaming\iTunesRPC\iTunesRichPresence-Rewrite.exe

App5Image=#@#Images\atom.png
App5Name=Atom
App5Path=C:\Users\lfgab\AppData\Local\atom\atom.exe

App6Image=#@#Images\git.png
App6Name=GitHub
App6Path=C:\Users\lfgab\AppData\Local\GitHubDesktop\GitHubDesktop.exe

App7Image=#@#Images\twitch.png
App7Name=Twitch
App7Path=C:\Users\lfgab\AppData\Roaming\Twitch\Bin\Twitch.exe

App8Image=#@#Images\minecraft.png
App8Name=Minecraft
App8Path=C:\Users\lfgab\Twitch\Minecraft\Install\minecraft.exe

App9Image=#@#Images\mtga.png
App9Name=MTG Arena
App9Path=C:\Program Files (x86)\Wizards of the Coast\MTGA\MTGALauncher\MTGALauncher.exe

App10Image=#@#Images\paintdotnet.png
App10Name=Paint.net
App10Path=C:\ProgramData\Microsoft\Windows\Start Menu\Programs\paint.net.lnk

App11Image=#@#Images\epic.png
App11Name=Epic Launcher
App11Path=C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Epic Games Launcher.lnk

App12Image=#@#Images\explorer.png
App12Name=File Explorer
App12Path=C:\Windows\explorer.exe

App13Image=#@#Images\placeholder-icon.png
App13Name=NookPhone
App13Path=C:\

App14Image=#@#Images\placeholder-icon.png
App14Name=NookPhone
App14Path=C:\

App15Image=#@#Images\placeholder-icon.png
App15Name=NookPhone
App15Path=C:\
```
