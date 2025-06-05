todos = []

while True:
    user_action = input("Type add, show, display, or exit: ")
    user_action = user_action.strip()
    # strip() => "add " -> "add" (only for strip function removes trailing spaces.)

    match user_action:
        case 'add':
            todo = input("Enter a todo: ")
            todos.append(todo)
        case 'show' | 'display': # 'show' or 'display'
        # '|' => Bitwise OR operator. 
            for item in todos:
                item = item.title()
                print(item)
        case 'exit':
            break
        # case default:
        # case whatever:
        case _: # All above 3-case lines works fine.
            print("You entered an unknown command")

print("Bye!")