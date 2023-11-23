﻿/*Завершите решение так, чтобы оно разделяло строку на пары
из двух символов. Если строка содержит нечетное количество
символов, то следует заменить отсутствующий второй символ
последней пары символом подчеркивания ('_').
Примеры:
* 'abc' =>  ['ab', 'c_']
* 'abcdef' => ['ab', 'cd', 'ef']*/

#include <iostream>
#include <string>
#include <vector>
//// 1. Мы объявляем функцию splitStringIntoPairs, 
//// которая принимает входную строку и возвращает вектор строк.
//  
//2. При вызове splitStringIntoPairs(input), мы создаем 
//вектор для хранения пар символов и запускаем цикл for, 
//который перебирает символы входной строки в двухсимвольных интервалах.
//
//3. Внутри цикла проверяем, есть ли еще минимум один 
//символ после текущего.Если есть, добавляем пару символов
//в наш вектор, используя функцию substr для извлечения 
//подстроки длиной 2 начиная с текущего индекса.
//
//4. Если после текущего символа нет больше символов(то 
//    есть только один символ остался), мы добавляем этот 
//    символ и символ подчеркивания вместо второго символа 
//    в последнюю пару.
//
//5. Когда цикл завершается, мы возвращаем вектор пар символов.
//
//6. В функции main мы объявляем строку input и вызываем 
//splitStringIntoPairs(input).Затем мы перебираем вектор 
//пар символов и выводим их на экран.

std::vector<std::string> solution(const std::string& s)
{
    std::vector<std::string> result;
    for (int i = 0; i < s.length(); i += 2) {
        if (i + 1 < s.length())
        {
            result.push_back(s.substr(i, 2));
        }
        else
        {
            result.push_back(s.substr(i, 1) + "_");
        }
    }
    return result;
}

int main() {
    std::string str = "asdfghjkl";
    std::vector<std::string> pairs = solution(str);
    for (const auto& num : pairs) {
        std::cout << num << '\t';
    }
    
    return 0;
}