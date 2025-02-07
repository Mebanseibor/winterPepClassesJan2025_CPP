# Documentation

## About the code

### Person header
| Name       | Type | Storage class | Default value | Remark                        |
| ---------- | ---- | ------------- | ------------- | ----------------------------- |
| guidPerson | int  | extern        | 0             | Tracks the GUID of the person |

### Person Class
- #### Data members

    | Name   | Type   | Access Specifier | Default value | Remark                                    |
    | ------ | ------ | ---------------- | ------------- | ----------------------------------------- |
    | guid   | int    | Private          | 0             | A Global Unique ID for the person         |
    | name   | string | Private          |               | Default value is an empty string          |
    | age    | int    | Private          | -1            | In months                                 |
    | gender | char   | Private          | 0             | Undefined genders are categorized under 0 |

- #### Member functions
    
    | Name      | Return type | Access specifier | Purpose                          |
    | --------- | ----------- | ---------------- | -------------------------------- |
    | getGUID   | int         | public           | Returns the guid of the person   |
    | getName   | string      | public           | Returns the name of the person   |
    | getAge    | int         | public           | Returns the age of the person    |
    | getGender | char        | public           | Returns the gender of the person |


## Terms
- GUID
    - A global unique identifier to identify an entity