# Changing_status_in_Discord 

### In my tutorial u will be able to show ur own statuses in dsc, and even u can show whole lyrics of songs :D
###### Animated Status v0.8.4 by toluschr

 
+ Firstly u must download and install **[Betterdiscord](https://betterdiscord.app/)**</br>
+ Then go to Settings>Plugins and click **Open Plugins Folder**</br>
+ Paste this **[files](https://downgit.github.io/#/home?url=https://github.com/ManiFast/Changing_status_in_Discord/tree/main/Plugins_files)** to folder and turn on plugin</br>  
+ You should take your token ([how to take dsc token](#take_token))</br>
+ When you know token, go to plugin settings <img src="https://github.com/ManiFast/Changing_status_in_Discord/blob/main/Photoes/Screenshot%202022-04-30%20124523.png" width="20" height="18" alt="Settings"/> and in column **AuthToken** paste token, then in **Time per Keyframe** write "5000" its 5 seconds (*not less ! otherwise u will get ban*)
+ Go to plugins folder and create new .txt file, open it via [notepad++](https://notepad-plus-plus.org/downloads/v8.2.1/) then for example I take a lyrics of Edamame song, copy this text to file <br/><img  src="https://github.com/ManiFast/Changing_status_in_Discord/blob/main/Photoes/textSongUsual.png" width="500" height="200"/>
+ Press Ctrl+H and mark *Wrap around* and *Regular expression*, in first column write ```^``` second write ```"``` and press **Replace All**
<img src="https://github.com/ManiFast/Changing_status_in_Discord/blob/main/Photoes/leftAdd.png" />

+ Again press Ctrl+H and write in first column ```$``` second ```"```
And now you have text with quotes left and right sides. Copy this text and go to plugin settings <img src="https://github.com/ManiFast/Changing_status_in_Discord/blob/main/Photoes/Screenshot%202022-04-30%20124523.png" width="20" height="18" alt="Settings"/> and paste this in column **Animation**, press save and all done ! You can see changing status in your profile.

### Contents

#### Take_token
Go to [site](https://discordhelp.net/discord-token) and find file "**science**" like in screenshot (click to increase the size)
<img src="https://github.com/ManiFast/Changing_status_in_Discord/blob/main/Photoes/Screenshot%20(116).png" width="600" height="300" alt="drawing"/>
