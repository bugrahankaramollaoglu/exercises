import moviepy.editor as mp

clip = mp.VideoFileClip(r"örnekVideo.mp4")
clip.audio.write_audiofile(r"örnekSes.wav")