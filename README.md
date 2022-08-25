# DroChill
## ESP32 bluetooth mouse jiggler


![N|ESP32](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRxBzNca25vVHpixpe43H1G64hQvBPdRDXByCEZrv8dkgpu5QUOVWH4v44LM2_hidzS2V8&usqp=CAU)

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

DroChill is a tiny ESP32 powered bluetooth mouse jiggler that helps your Slack or Microsoft Teams to stay awake while you're chilling. Say goodbye to your boss pinging you for not being online!

## Setup
- Clone the repo. 
- Open the repo with VisualStudio Code with Platformio installed.
- Connect your ESP32 and get it's COM port
- In `platformio.ini` change `upload_port` to the one from previous step
- Press upload button and wait for upload to finish.
- Power your board on
- Connect to device called "DroChill mouse jiggler v1"
- ✨You're awesome ✨

## Features

- Moves your mouse evey 1 minute and randomly perofrms a right click
- Prevents software like Slakc/MS Teams from setting you status to "away"
- No setup required
- Simple and reliable

