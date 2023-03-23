#!/bin/bash

echo "Wprowadz adres:"
read NUM

if [[ $NUM =~ ^[0-9][0-9]-[0-9][0-9][0-9]$ ]]; then
    echo "Poprawny adres!"
else 
    echo "Niepoprawny adres"
fi
