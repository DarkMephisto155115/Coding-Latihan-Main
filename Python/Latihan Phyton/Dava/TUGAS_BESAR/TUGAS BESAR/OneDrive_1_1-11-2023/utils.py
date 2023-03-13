import os

# function to determine the size of application window
def window_size():
    # get size of the current terminal
    size = os.get_terminal_size()
    # set window width from terminal size
    window_width = size.columns
    # set initial window height from terminal size
    window_height = size.lines
    # we set five line in the bottom for the input, so modified window_height
    number_of_lines_for_input = 5
    window_height -= number_of_lines_for_input # (it is the same as window_height = window_height - number_of_lines_for_input)
    # return the function with dictionary data
    return {"width": window_width, "height": window_height}

# function to render our application window screen
def render_screen(is_center_horizontal_all, *sentences):
    # clear terminal before render the screen
    os.system("cls||clear")

    ws = window_size()
    number_of_lines_in_sentences = len(sentences)
    vertical_padding_before_divided = ws["height"] - number_of_lines_in_sentences
    # one line if else -> if you confuse with this part of code just google one line if else python
    vertical_padding_before_divided = vertical_padding_before_divided if vertical_padding_before_divided % 2 == 0 else vertical_padding_before_divided - 1
    vertical_padding = vertical_padding_before_divided / 2
    line_of_sentence_start = int(vertical_padding)

    number_of_character_longest_sentences = None

    for i in range(ws["height"]):
        # first line and last line set with full border
        if i == 0 or i == ws["height"] - 1:
            print("#"*ws["width"])
        # other lines
        elif i < line_of_sentence_start or i >= line_of_sentence_start + number_of_lines_in_sentences:
            print("#", end="")
            print(" "*(ws["width"]-2), end="#\n")
        else:
            sentence = sentences[i-line_of_sentence_start]
            if is_center_horizontal_all:
                horizontal_padding_before_divided = ws["width"] - len(sentence)
                is_odd = False if horizontal_padding_before_divided % 2 == 0 else True
                horizontal_padding = int((horizontal_padding_before_divided - 1 if is_odd else horizontal_padding_before_divided) / 2)
                print("#", end="")
                print(" "*(horizontal_padding - 1), end="")
                print(sentence, end="")
                print(" "*(horizontal_padding if is_odd else horizontal_padding - 1), end="#\n")
            else:
                if number_of_character_longest_sentences is None:
                    number_of_character_longest_sentences = len(max(sentences, key = len))
                    horizontal_padding_before_divided = ws["width"] - number_of_character_longest_sentences
                    is_odd = False if horizontal_padding_before_divided % 2 == 0 else True
                    horizontal_padding = int((horizontal_padding_before_divided - 1 if is_odd else horizontal_padding_before_divided) / 2)
                print("#", end="")
                print(" "*(horizontal_padding - 1), end="")
                print(sentence, end="")
                print(" "*(ws["width"] - horizontal_padding - len(sentence) - 1), end="#\n")



# convert datetime value to local timezone
def convert_time_to_local(datetime_value):
    local_now = datetime_value.astimezone()
    local_tz = local_now.tzinfo
    return local_tz

def exit_apps():
    os.system("cls||clear")

