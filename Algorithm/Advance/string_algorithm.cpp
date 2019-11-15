#include "stdafx.h"
#include "string_algorithm.h"

#include <string.h>

void ReplaceStringSpace(const char* oldText, int old_len, char* newText, int* newLen)
{
    if (oldText == nullptr || newLen == nullptr)
    {
        return;
    }

    if (newText == nullptr)
    {
        *newLen = old_len;

        int index = 0;
        while (index < old_len)
        {
            if (*(oldText + index) == ' ')
            {
                *newLen += 2;
            }
            ++index;
        }
    }
    else
    {
        int old_pre_index = 0;
        int old_index = 0;
        while (old_index < old_len && old_pre_index < old_len)
        {
            if (*(oldText + old_index) == ' ')
            {
                if (old_index > old_pre_index)
                {
                    strncat_s(newText, *newLen, oldText + old_pre_index, old_index - old_pre_index);
                }
                strcat_s(newText, *newLen, "%20");

                old_pre_index = old_index + 1;
            }
            ++old_index;
        }

        if (old_index > old_pre_index)
        {
            strncat_s(newText, *newLen, oldText + old_pre_index, old_index - old_pre_index);
        }
    }
}