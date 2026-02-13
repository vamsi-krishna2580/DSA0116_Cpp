import os

# Change this if your folder path is different
folder_path = r"C:\Users\vamsi\Documents\DSA01C++"

# Rename mapping
rename_map = {
    "56_program.cpp": "Virtual_Person_Student_Teacher_Greet.cpp",
    "57_program.cpp": "Virtual_Shape_Sphere_Cylinder.cpp",
    "58_program.cpp": "Virtual_Animal_Herbivore_Carnivore.cpp",
    "59_program.cpp": "Virtual_Person_Employee_Manager_Work.cpp"
}

# Rename files
for old_name, new_name in rename_map.items():
    old_path = os.path.join(folder_path, old_name)
    new_path = os.path.join(folder_path, new_name)

    if os.path.exists(old_path):
        os.rename(old_path, new_path)
        print(f"Renamed: {old_name} → {new_name}")
    else:
        print(f"File not found: {old_name}")

print("Done!")
