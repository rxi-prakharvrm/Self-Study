# Using super()

class Parent:
    def __init__(self):
        self.parent_variable = "I am a parent variable"

    def parent_method(self):
        return "This is a method from the parent class."

class Child(Parent):
    def __init__(self):
        super().__init__()  # Call the constructor of the parent class
        self.child_variable = "I am a child variable"

    def child_method(self):
        # Access parent variable
        print(self.parent_variable)  # Output: I am a parent variable
        # Call parent method
        print(super().parent_method())  # Output: This is a method from the parent class.

# Create an instance of the Child class
child_instance = Child()
child_instance.child_method()


# Directly Referencing the Parent Class

# class Parent:
#     def __init__(self):
#         self.parent_variable = "I am a parent variable"

#     def parent_method(self):
#         return "This is a method from the parent class."

# class Child(Parent):
#     def __init__(self):
#         Parent.__init__(self)  # Call the constructor of the parent class
#         self.child_variable = "I am a child variable"

#     def child_method(self):
#         # Access parent variable
#         print(self.parent_variable)  # Output: I am a parent variable
#         # Call parent method
#         print(Parent.parent_method(self))  # Output: This is a method from the parent class.

# # Create an instance of the Child class
# child_instance = Child()
# child_instance.child_method()
