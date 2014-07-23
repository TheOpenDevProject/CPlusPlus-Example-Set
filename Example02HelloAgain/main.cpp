/*
  This file is part of The C++ Example Set.

    The C++ Example Set is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The C++ Example is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <iostream>

int main()
{
  //The following is called a for loop, A for loop begins with a value of n, it then checks our condition of <= n and if the condition is not met affect the itterator
  //This could be seen in english like so
/*
 i is Equal To 0
is i less than or equal to n
if not then affect the value of i
else exit the loop
 */
    for(int i = 0;i <= 10; i++){
    std::cout << "Hello World!" << std::endl;
    }
    return 0;
}

