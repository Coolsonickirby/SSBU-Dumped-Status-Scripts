# SSBU Dumped Status Scripts
This is a repository containing all the fighter and their article status scripts dumped.

## Missing
- lua2cpp_ptrainer.nro (Batch script does not properly work with it)
- lua2cpp_common.nro (No status scripts iirc?)
- lua2cpp_item.nro (Missing labels?)

## Credits
- [NSA](https://www.nsa.gov/) | [Ghidra](https://ghidra-sre.org/)
- [blujay](https://github.com/blu-dev/) | Original author of the Lua2CPPAnalysis.java script
- [Coolsonickirby](https://github.com/Coolsonickirby/) | Getting all the articles labels, modifying the original script to automatically do the work, and running it through each nro (95) 4 times (380 times total :eternalpain:)

Major shoutouts to PEAKTAMA (Gintama, go watch it if you haven't) for getting me through doing all this

## Extra Note(s)
- Some status scripts call different functions that weren't dumped. Since god knows I don't wanna go through all this again anytime soon, you can access the shared Ghidra Repository and view all the fighter nros in there with their and their articles statuses analyzed. [Instructions on how to access the shared Ghidra Repo can be found here.](https://coolsonickirby.github.io/Smash-Ultimate-Documentation/Reverse%20Engineering/Ghidra/)