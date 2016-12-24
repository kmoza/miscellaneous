my_dict = {}
content_of_value1 = "abcd"
content_of_value2 = "wxyz"
my_dict.update({"key_name1":content_of_value1})
my_dict.update({"key_name2":content_of_value2})
print my_dict
print my_dict.get("key_name2")