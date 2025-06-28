class Song:
    # TODO: Initialize the title, artist, genre, and duration of a song. The `duration` property should be an integer value.
    def __init__(self, title, artist, genre, duration):
        self.title = title
        self.artist = artist
        self.genre = genre
        self.duration = int(duration)
        

    # TODO: Complete the `__str__` method to return information about a song in a string format.
    def __str__(self):
        return f"Song: {self.title}, {self.artist}, {self.genre}, {self.duration}"
        

class SongQueue:
    def __init__(self):
        self.songs = []

    # TODO: Create the `add_song` method, which will append a song to the queue.
    def add_song(self, new_element):
        self.songs.append(new_element)
    # TODO: Create the `play_song` method, which will print the information about the first song in the `songs` queue, then remove it from the queue completely.
    def play_song(self):
            print(f"Now playing: {self.songs[0]}")
            del self.songs[0]
    # TODO: Create the `get_size` method, which will return the length of the `songs` queue.
    def get_size(self):
        return len(self.songs)
    # TODO: Complete the `__str__` method to return information about all songs in a queue in a string format.
    def __str__(self):
        return '\n' .join(f"{i + 1}. {song}" for i, song in enumerate(self.songs))

if __name__ == "__main__":

    # TODO: Create an instance of the SongQueue object.
    my_queue = SongQueue()
    # TODO: Open the file called "songs.txt".
    # TODO: Read each song from the "songs.txt" file, creating the appropriate entry for it in your SongQueue object instance. Close the file when you are done.
    with open("songs.txt", 'r') as file:
        for line in file:
            parts = line.strip().split(",")
            if len(parts) == 4:
                title, artist, genre, duration = parts
                song = Song(title, artist, genre, duration)
                my_queue.add_song(song)
    # TODO: After all songs have been created in the SongQueue instance, print each song in the queue.
    print(my_queue)
    # TODO: Use the `play_song` method of SongQueue to play each song until the queue is empty.
    while my_queue.get_size() > 0:
        my_queue.play_song()
