/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:45:07 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/10 05:26:44 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
    this->_size = 0;
    _array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->_size = n;
    _array = new T[n];
}
template <typename T>
Array<T>::Array(Array const &obj)
{
    this->_array = nullptr;
    *this = obj;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const &obj)
{
    if (this != &obj)
    {
        delete[] this->_array;
        this->_array = new T[obj.size()];
        this->_size = obj.size();
        for (size_t i = 0; i < this->_size; i++)
            this->_array[i] = obj[i];
    }
    return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index) const
{
    if(index >= this->_size)
        throw std::out_of_range("Index is out of range");
    return (this->_array[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (this->_size);
}

template <typename T>
Array<T>::~Array() 
{
    delete[] _array;
}
